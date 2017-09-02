//
//  PTSConnection.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/25.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTSConnection : NSObject
+ (instancetype) shareConnection;
- (void) ensureConnect;
- (BOOL) writeData:(NSData *)data error:(NSError* __autoreleasing*)error;
@end
