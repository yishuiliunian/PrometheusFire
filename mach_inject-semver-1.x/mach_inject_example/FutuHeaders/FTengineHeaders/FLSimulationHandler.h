//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTEngine/FLBaseHandler.h>

@interface FLSimulationHandler : FLBaseHandler
{
}

- (void)keyUpdate;
- (void)keepAliveWithTimeout:(unsigned int)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)loginDecode:(struct util_byteios_net *)arg1;
- (void)startAuthenticiateClientSigAndClientKey;
- (id)initWithQueue:(id)arg1;

@end

