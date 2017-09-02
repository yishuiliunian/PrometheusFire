//
//  FSTraderOrder.h
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import <Foundation/Foundation.h>
#define INTERFACE_MUTABLE_DICTIONARY_PAIR(key, type)\
- (void) set##key:(type)value; \
- (type) key;

#define IMP_MUTABLE_DICTIONARY_PAIR(key, type) \
- (void) set##key:(type)value \
{ \
if (![self isKindOfClass:[NSMutableDictionary class]]) { \
return;\
}\
[(NSMutableDictionary*)self setObject:value forKey:@""#key]; \
} \
- (type) key\
{\
return self[@""#key];\
}

#define IMP_MUTABLE_DICTIONARY_NSString_PAIR(key)  IMP_MUTABLE_DICTIONARY_PAIR(key, NSString*)
#define INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(key) INTERFACE_MUTABLE_DICTIONARY_PAIR(key, NSString*)
#define INTERFACE_MUTABLE_DICTIONARY_NSObject_PAIR(key) INTERFACE_MUTABLE_DICTIONARY_PAIR(key, NSObject*)
#define IMP_MUTABLE_DICTIONARY_NSObject_PAIR(key)  IMP_MUTABLE_DICTIONARY_PAIR(key, NSObject*)


@interface NSDictionary (OrderInfo)
INTERFACE_MUTABLE_DICTIONARY_NSObject_PAIR(AccountID);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(AppId);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(DeviceId);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(Market);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(OrderGroup);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(OrderQty);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(OrderType);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(Price);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(SecuId);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(Side);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(Symbol);
INTERFACE__MUTABLE_DICTIONARY_NSString_PAIR(UserId);
INTERFACE_MUTABLE_DICTIONARY_NSObject_PAIR(ErrorMsg);
@end

