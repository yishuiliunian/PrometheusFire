//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLDecodeHelper : NSObject
{
}

+ (id)decodeSimulationOrder:(struct util_byteios_net *)arg1 hasAveragePrice:(BOOL)arg2;
+ (id)decodeSimulationTriggerOrder:(struct util_byteios_net *)arg1;
+ (id)tradeDecode:(struct util_byteios_net *)arg1;
+ (id)decodeTriggerOrderSimulation:(struct util_byteios_net *)arg1;
+ (id)decodeTriggerOrder:(struct util_byteios_net *)arg1;
+ (id)decodeOrder:(struct util_byteios_net *)arg1 hasAveragePrice:(BOOL)arg2 hasLoanUsed:(BOOL)arg3;

@end

