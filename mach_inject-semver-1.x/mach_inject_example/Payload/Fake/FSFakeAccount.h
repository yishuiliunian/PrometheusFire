//
//  FSFakeAccount.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSFakeAccount : NSObject
@property (nonatomic, strong) id shareholders;
@property (nonatomic, assign) int foundID;
@property (nonatomic, assign) int platformID;
@property (nonatomic, strong) id platformIDString;
@property (nonatomic, strong) NSString* cardNumber;
@property (nonatomic, strong) NSString* accountTypeString;
@property (nonatomic, assign) unsigned long balance;
@property (nonatomic, assign) uint64_t accountID;
@end
