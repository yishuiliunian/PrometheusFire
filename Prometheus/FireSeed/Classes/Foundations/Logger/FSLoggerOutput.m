//
//  FSLoggerOutput.m
//  Prometheus
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 hint. All rights reserved.
//

#import "FSLoggerOutput.h"

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
    dispatch_async(_outputQueue, ^{
        [_logCache addObject:log];
        dispatch_async(_outputQueue, ^{
            [self outputLog];
        });
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
        [self outputLog];
    }
}

- (void) outputLine:(NSString*)line
{
    NSLog(@"%@",line);
}
@end
