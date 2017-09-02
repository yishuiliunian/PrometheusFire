//
//  FSLoggerOutput.m
//  Prometheus
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 hint. All rights reserved.
//

#import "FSLoggerOutput.h"
#include <syslog.h>
@interface FSLoggerOutput ()
{
    dispatch_queue_t _outputQueue;
}
@end
@implementation FSLoggerOutput
- (instancetype) init
{
    self = [super init];
    if (!self) {
        return self;
    }
    _logCache = [NSMutableArray new];
    _outputQueue = dispatch_queue_create("com.prometheus.logger.queue", DISPATCH_QUEUE_SERIAL);
    return self;
}
- (void) writeLog:(FSLogModel *)log
{
    dispatch_sync(_outputQueue, ^{
        [_logCache addObject:log];
        [self outputLog];
    });
}

- (NSString*) logToDescription:(FSLogModel*)log
{
    return log.message;
}
- (void) outputLog
{
    for (FSLogModel* log  in _logCache) {
        NSString* des = log.message;
        [self outputLine:des];
    }
    [_logCache removeAllObjects];
}

- (void) outputLine:(NSString*)line
{
    syslog(LOG_ERR,"FUTUXX:%s",line.UTF8String);
}
@end
