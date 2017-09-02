//
//  FSLoggerFileOutput.m
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/29.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "FSLoggerFileOutput.h"

@interface FSLoggerFileOutput ()
{
    @private
    NSFileHandle* _writeHandler;
}
@end
@implementation FSLoggerFileOutput
- (void) dealloc
{
    [_writeHandler closeFile];
}
- (instancetype) initWithURL:(NSURL *)fileURL
{
    self = [super init];
    if (!self) {
        return self;
    }
    _url = fileURL;
    if (![[NSFileManager defaultManager] fileExistsAtPath:fileURL.path]) {
        [[NSFileManager defaultManager] createFileAtPath:fileURL.path contents:nil attributes:nil];
    }
    _writeHandler = [NSFileHandle fileHandleForWritingAtPath:fileURL.path];
    return self;
}

- (void) outputLine:(NSString *)line
{
    NSString* log = [line stringByAppendingString:@"\n"];
    NSData* data = [log dataUsingEncoding:NSUTF8StringEncoding];
    [_writeHandler writeData:data];
    [_writeHandler synchronizeFile];
    
}
@end
