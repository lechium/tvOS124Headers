//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLWifiLocationProviderProtocol-Protocol.h"

@class NSString;

@interface CLWifiLocationProviderAdapter : CLLocationProviderAdapter <CLWifiLocationProviderProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x0000000100264f70
+ (id)getSilo;	// IMP=0x0000000100264828
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100264804
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100264780
- (void)requestLocationUpdateWithParameters:(CDUnknownBlockType)arg1;	// IMP=0x0000000100264e94
- (void)allowLocalClientsInEmergency:(_Bool)arg1;	// IMP=0x0000000100264e90
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x0000000100264e8c
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x0000000100264e88
- (void)emergencyStateChange:(int)arg1;	// IMP=0x0000000100264c74
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100264c38
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100264bf4
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100264bc0
- (struct CLWifiLocationProvider *)adaptee;	// IMP=0x0000000100264b88
- (void)endService;	// IMP=0x0000000100264b64
- (void)beginService;	// IMP=0x00000001002648ec
- (id)init;	// IMP=0x00000001002648a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

