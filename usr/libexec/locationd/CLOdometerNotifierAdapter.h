//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLOdometerNotifierProtocol-Protocol.h"

@class NSString;

@interface CLOdometerNotifierAdapter : CLNotifierServiceAdapter <CLOdometerNotifierProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x0000000100165134
+ (id)getSilo;	// IMP=0x0000000100164ce8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100164cc4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100164c40
- (void)updatePhoneWorkoutElevationSubscription:(_Bool)arg1;	// IMP=0x0000000100165384
- (void)querySignificantElevationDeltaFromDate:(id)arg1 toDate:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001651a8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001650f8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001650b4
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100165080
- (struct CLOdometerNotifier *)adaptee;	// IMP=0x0000000100165048
- (void)endService;	// IMP=0x0000000100165024
- (void)beginService;	// IMP=0x0000000100164dac
- (id)init;	// IMP=0x0000000100164d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

