//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLMotionAlarmNotifierProtocol-Protocol.h"

@class NSString;

@interface CLMotionAlarmNotifierAdapter : CLNotifierServiceAdapter <CLMotionAlarmNotifierProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001003a2e5c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001003a2e38
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001003a2db4
- (void)launchWatchApplicationForCompanion:(id)arg1;	// IMP=0x00000001003a54bc
- (void)launchRemoteApplication:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001003a52b4
- (void)acknowledgeAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001003a4ba4
- (void)unregisterAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001003a468c
- (void)registerAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001003a3c14
- (void)unregisterClient:(CDUnknownBlockType)arg1;	// IMP=0x00000001003a3834
- (void)registerClient:(CDUnknownBlockType)arg1 adapter:(byref id)arg2;	// IMP=0x00000001003a32a8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001003a326c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001003a3228
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001003a31f4
- (struct CLMotionAlarmNotifier *)adaptee;	// IMP=0x00000001003a31bc
- (void)endService;	// IMP=0x00000001003a3198
- (void)beginService;	// IMP=0x00000001003a2f20
- (id)init;	// IMP=0x00000001003a2edc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
