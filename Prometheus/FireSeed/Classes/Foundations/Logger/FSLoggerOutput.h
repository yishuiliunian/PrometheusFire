//
//  FSLoggerOutput.h
//  Prometheus
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 hint. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSLogModel.h"
@interface FSLoggerOutput : NSObject
{
    @protected
    NSMutableArray* _logCache;
}
- (NSString*) logToDescription:(FSLogModel*)log;
- (void) outputLine:(NSString*)line;
- (void) writeLog:(FSLogModel*)log;
@end
