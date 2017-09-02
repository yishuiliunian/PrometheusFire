//
//  FSRouter.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSRouteRecord.h"
@interface FSRouter : NSObject

- (BOOL) addRecord:(FSRouteBlockRecord*)record error:(NSError* __autoreleasing*)error;
- (BOOL) removeRecord:(FSRouteBlockRecord*)record error:(NSError* __autoreleasing*)error;
- (BOOL) removeRecordByMethod:(NSString*)method error:(NSError* __autoreleasing*)error;
- (void) handleRemoteData:(NSData*)data withConnection:(PTSConnection*)connection;
@end
