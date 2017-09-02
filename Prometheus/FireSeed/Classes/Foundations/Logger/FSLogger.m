//
//  FSLogger.m
//  Prometheus
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 hint. All rights reserved.
//

#import "FSLogger.h"
#import "FSLoggerOutput.h"
#import "FSLoggerNotificationOutput.h"
@implementation FSLogger
+ (instancetype) sharedLogger
{
    static FSLogger* logger = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        logger = [FSLogger new];
    });
    return logger;
}

- (instancetype) init
{
    self = [super init];
    if (!self) {
        return nil;
    }
    _outputs = @[[FSLoggerNotificationOutput new]];
    return self;
}
- (void)logMessageWithLevel:(FSLogLevel)level
                        cmd:(const char*)cmd
                       line:(int)line
                       file:(const char*)file
                     format:(NSString *)format, ... NS_FORMAT_FUNCTION(5, 6)
{
    if (level > self.logLevel || level == FSLogLevelNone || !format) {
        return;
    }
    va_list args;
    va_start(args, format);
    NSString* message =[[NSString alloc] initWithFormat:format arguments:args];
    FSLogModel*(^CreateLog)(void) = ^(void) {
        FSLogModel* log = [FSLogModel new];
        log.message= message;
        log.date = [NSDate date];
        log.level = level;
        log.funciton = [NSString stringWithCString:cmd encoding:NSUTF8StringEncoding];
        log.file = [NSString stringWithCString:file encoding:NSUTF8StringEncoding];
        log.line = line;
        return log;
    };
    FSLogModel* model = CreateLog();
    for (FSLoggerOutput* output in _outputs) {
        [output writeLog:model];
    }
    va_end(args);
}
@end
