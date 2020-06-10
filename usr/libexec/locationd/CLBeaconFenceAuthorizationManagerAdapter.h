//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLBeaconFenceAuthorizationManagerProtocol-Protocol.h"

@class NSString;

@interface CLBeaconFenceAuthorizationManagerAdapter : CLNotifierServiceAdapter <CLBeaconFenceAuthorizationManagerProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100807de8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100807dc4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100807d40
- (int)syncgetCanBundle:(id)arg1 performFenceOperationFor:(id)arg2;	// IMP=0x00000001008090cc
- (_Bool)syncgetFences:(list_602ae561 *)arg1 forBundle:(id)arg2 onBehalfOf:(id)arg3;	// IMP=0x0000000100808f4c
- (_Bool)syncgetFences:(list_602ae561 *)arg1 forBundle:(id)arg2;	// IMP=0x0000000100808e28
- (_Bool)syncgetRemoveFence:(const struct MonitoredRegion *)arg1;	// IMP=0x00000001008089f0
- (_Bool)syncgetAddFence:(const struct MonitoredRegion *)arg1;	// IMP=0x0000000100808234
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001008081f8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001008081b4
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100808180
- (struct CLBeaconFenceAuthorizationManager *)adaptee;	// IMP=0x0000000100808148
- (void)endService;	// IMP=0x0000000100808124
- (void)beginService;	// IMP=0x0000000100807eac
- (id)init;	// IMP=0x0000000100807e68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
