//
//  FSLoggerNotificationOutput.m
//  Prometheus
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 hint. All rights reserved.
//

#import "FSLoggerNotificationOutput.h"

@implementation FSLoggerNotificationOutput
- (void) outputLine:(NSString *)line
{
    NSUserNotification *notification = [[NSUserNotification alloc] init];
    notification.title = @"LOG!!!";
    notification.informativeText = line;
    notification.soundName = NSUserNotificationDefaultSoundName;
    
    [[NSUserNotificationCenter defaultUserNotificationCenter] deliverNotification:notification];
}
@end
