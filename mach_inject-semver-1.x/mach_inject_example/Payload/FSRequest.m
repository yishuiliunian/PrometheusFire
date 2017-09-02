//
//  FSRequest.m
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "FSRequest.h"

@interface FSRequest ()
@property (nonatomic, strong) NSError* decodeError;
@end
@implementation FSRequest
- (instancetype) initWithData:(NSData *)data
{
    self = [super init];
    if (!self) {
        return self;
    }
    NSError* error;
    PTMessage* message =  [[PTMessage alloc] initWithData:data error:&error];
    if (error) {
        _decodeError = error;
    }
    _message = message;
    return self;
}

- (BOOL) checkVaild:(NSError *__autoreleasing *)error
{
    if (self.decodeError) {
        if (NULL != error) {
            *error = self.decodeError;
        }
        return NO;
    }
    return YES;
}
@end
