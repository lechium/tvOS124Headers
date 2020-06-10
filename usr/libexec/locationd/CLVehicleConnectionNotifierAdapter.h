//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLVehicleConnectionNotifierProtocol-Protocol.h"

@class NSString;

@interface CLVehicleConnectionNotifierAdapter : CLNotifierServiceAdapter <CLVehicleConnectionNotifierProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001006d52cc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001006d52a8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001006d5224
- (void)deliverAndReleaseNotification:(struct __CFUserNotification *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000001006d5838
- (struct CLVehicleConnection)syncgetMostRecentInVehicle;	// IMP=0x00000001006d580c
- (struct CLVehicleConnection)syncgetMostRecentVehicleConnection;	// IMP=0x00000001006d57e0
- (void)fetchMostRecentConnectionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001006d5718
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006d56dc
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001006d5698
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006d5664
- (struct CLVehicleConnectionNotifier *)adaptee;	// IMP=0x00000001006d562c
- (void)endService;	// IMP=0x00000001006d5608
- (void)beginService;	// IMP=0x00000001006d5390
- (id)init;	// IMP=0x00000001006d534c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

