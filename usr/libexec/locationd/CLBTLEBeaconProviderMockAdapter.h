//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLBTLEBeaconProviderAdapter.h"

#import "CLBTLEBeaconProviderMockProtocol-Protocol.h"

@class NSString;

@interface CLBTLEBeaconProviderMockAdapter : CLBTLEBeaconProviderAdapter <CLBTLEBeaconProviderMockProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001007ca71c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001007ca6f8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001007ca674
- (void)requestScan:(double)arg1;	// IMP=0x00000001007cada8
- (void)addProximityScanEvent:(CDUnknownBlockType)arg1;	// IMP=0x00000001007caca0
- (void)addProximityZoneEvent:(CDUnknownBlockType)arg1;	// IMP=0x00000001007cab68
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001007cab2c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001007caae8
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001007caab4
- (struct CLBTLEBeaconProviderMock *)adaptee;	// IMP=0x00000001007caa7c
- (void)endService;	// IMP=0x00000001007caa58
- (void)beginService;	// IMP=0x00000001007ca7e0
- (id)init;	// IMP=0x00000001007ca79c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

