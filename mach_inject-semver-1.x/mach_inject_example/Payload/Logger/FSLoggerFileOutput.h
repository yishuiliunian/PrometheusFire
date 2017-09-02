//
//  FSLoggerFileOutput.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/29.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "FSLoggerOutput.h"

@interface FSLoggerFileOutput : FSLoggerOutput
@property (nonatomic, strong, readonly) NSURL* url;
- (instancetype) initWithURL:(NSURL*)fileURL;
@end
