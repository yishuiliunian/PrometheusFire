//
//  FSLogModel.h
//  Prometheus
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 hint. All rights reserved.
//
#import <Cocoa/Cocoa.h>

/**
 `FSLogLevel` enum specifies different levels of logging that could be used to limit or display more messages in logs.
 */
typedef NS_ENUM(uint8_t, FSLogLevel) {
    /**
     Log level that disables all logging.
     */
    FSLogLevelNone =  1,
    /**
     Log level that if set is going to output error messages to the log.
     */
    FSLogLevelError = 2,
    /**
     Log level that if set is going to output the following messages to log:
     - Errors
     - Warnings
     */
    FSLogLevelWarning = 3,
    /**
     Log level that if set is going to output the following messages to log:
     - Errors
     - Warnings
     - Informational messages
     */
    FSLogLevelInfo = 4,
    /**
     Log level that if set is going to output the following messages to log:
     - Errors
     - Warnings
     - Informational messages
     - Debug messages
     - Verbose
     */
    FSLogLevelVerbose = 5,
    /**
     Log level that if set is going to output the following messages to log:
     - Errors
     - Warnings
     - Informational messages
     - Debug messages
     */
    
    FSLogLevelDebug = 6,
    
    
};

#import <Foundation/Foundation.h>

@interface FSLogModel : NSObject
@property (nonatomic, assign) FSLogLevel level;
@property (nonatomic, strong) NSString* message;
@property (nonatomic, strong) NSDate* date;
@property (nonatomic, strong) NSString* file;
@property (nonatomic, assign) int line;
@property (nonatomic, strong) NSString* funciton;
@end
