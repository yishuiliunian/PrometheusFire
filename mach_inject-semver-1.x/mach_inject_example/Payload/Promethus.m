//
//  Promethus.m
//  MachInjectSample
//
//  Created by Dong Zhao on 2017/8/24.
//  Copyright © 2017年 Erwan Barrier. All rights reserved.
//

#import "Promethus.h"
#import "FSTraderOrder.h"
#import "FSLogger.h"
#import "FSFakeAppData.h"
#import "FSFakeBaseHandler.h"
#import "FSFakeLoginManager.h"
#import "FSFakeTradeService.h"
#import "YYModel.h"

@implementation Promethus

+ (instancetype) shareInstance
{
    static Promethus* share;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        share = [Promethus new];
    });
    return share;
}
- (void) trade:(NSDictionary*)query response:(void(^)(NSError *error, NSDictionary* response))response
{
    NSString* stockId = query[@"stock"];
    NSRange range = [stockId rangeOfString:@"."];
    if(range.location != NSNotFound) {
        stockId = [stockId substringToIndex:range.location];
    }
    NSNumber* price = query[@"price"];
    NSNumber* quantity = query[@"quantity"];
    NSString* side = query[@"side"];


    void(^ResponseError)(NSString* msag) = ^(NSString* msg) {
        FSLogDebug(msg);
    };
    if(!stockId) {
        ResponseError(@"the stock info is invalid");
        return;
    }
    if(!price) {
        ResponseError(@"the aim price is invaild");
        return ;
    }
    if (!quantity) {
        ResponseError(@"the quantity is invalid ");
        return;
    }
    if (!side) {
        ResponseError(@"the trade side command is invaild");
        return;
    }
#define ENSURE_NUM(v)  @([v intValue])
    
    NSMutableDictionary* orderInfo = [NSMutableDictionary new];
    FSFakeAppData* data = [FSFakeAppData shareInstance];
    FSLogDebug(@"data %@",data);
    FSFakeUserData* user = [data user];
    FSLogDebug(@"user %@",[[user cnHistoryStocks] yy_modelToJSONObject]);
    FSFakeTradeService* servie = [FSFakeTradeService shareInstance];
    FSLogDebug(@"service %@",[servie cnMarketTradeManager]);
    FSFakeTradeManager* manager = [servie cnMarketTradeManager];
    FSLogDebug(@"service %@", manager);
    FSFakeAccount* account = [manager subAccounts].firstObject;
    FSLogDebug(@"account %@",account);
    
    orderInfo.AccountID = @([account accountID]);
    orderInfo.AppId = @(0);
    orderInfo.Market = @(1);
    orderInfo.OrderGroup = @(-1);
    orderInfo.OrderQty = ENSURE_NUM(quantity);
    orderInfo.OrderType = @(1);
    orderInfo.Price = ENSURE_NUM(price);
    orderInfo.SecuId = @"";
    orderInfo.Side = ENSURE_NUM(side);
    orderInfo.Symbol = stockId;
    orderInfo.UserId = ENSURE_NUM([[[FSFakeAppData shareInstance] user] identifier]);
    NSLog(@"Order Info is %@",orderInfo);
    
    [[[FSFakeLoginManager defaultManager] orderHandler] writeDictionary:orderInfo command:2641 responseBlock:^(NSError *error, NSDictionary* res) {
        if (response) {
            response(error, res);
        }
    }];
    
}
@end
