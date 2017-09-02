//
//  FSLogger.h
//  Prometheus
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 hint. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSLoggerOutput.h"
#import "FSLogModel.h"

#define FSLog(level, frmt, ...) \
[[FSLogger sharedLogger] logMessageWithLevel:level  cmd:__PRETTY_FUNCTION__ line:__LINE__ file:__FILE__ format:(frmt), ##__VA_ARGS__]

#define FSLogError(frmt, ...) \
FSLog(FSLogLevelError, (frmt), ##__VA_ARGS__)

#define FSLogWarning(frmt, ...) \
FSLog(FSLogLevelWarning, (frmt), ##__VA_ARGS__)

#define FSLogInfo(frmt, ...) \
FSLog(FSLogLevelInfo, (frmt), ##__VA_ARGS__)

#define FSLogDebug( frmt, ...) \
FSLog(FSLogLevelDebug, (frmt), ##__VA_ARGS__)


#define FSLogVerbose(frmt, ...) \
FSLog(FSLogLevelInfo, (frmt), ##__VA_ARGS__)

#define FSLogException(exception) \
FSLogError( @"Caught \"%@\" with reason \"%@\"%@", \
exception.name, exception, \
[exception callStackSymbols] ? [NSString stringWithFormat:@":\n%@.", [exception callStackSymbols]] : @"")

@interface FSLogger : NSObject
@property (nonatomic, assign) FSLogLevel logLevel;
@property (nonatomic, strong, readonly) NSArray<FSLoggerOutput*> * outputs;
+ (instancetype) sharedLogger;
- (void)logMessageWithLevel:(FSLogLevel)level
                        cmd:(const char*)commandInfo
                       line:(int)line
                       file:(const char*)file
                     format:(NSString *)format, ...;
@end
