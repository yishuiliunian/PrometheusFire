//
//  FSFakeBaseHandler.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void(^ResponseBlcok)(NSError* error, id response);
@interface FSFakeBaseHandler : NSObject
- (void) writeDictionary:(NSDictionary*)dicionary command:(unsigned short)cmd responseBlock:(ResponseBlcok)block;
@end
