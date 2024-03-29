//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLSedentaryTimerNotifierProtocol-Protocol.h"

@class NSString;

@interface CLSedentaryTimerNotifierAdapter : CLNotifierServiceAdapter <CLSedentaryTimerNotifierProtocol>
{
}

+ (id)getSilo;	// IMP=0x000000010017eb3c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010017eb18
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010017ea94
+ (_Bool)isSupported;	// IMP=0x000000010017f82c
- (int)syncgetSedentaryAlarmData:(vector_50df4d08 *)arg1 since:(double)arg2;	// IMP=0x000000010017f764
- (int)syncgetStopTimerForClient:(id)arg1;	// IMP=0x000000010017f5a4
- (int)syncgetStartTimerForClient:(id)arg1 andOptions:(id)arg2;	// IMP=0x000000010017eff0
- (_Bool)syncgetIsTimerArmed;	// IMP=0x000000010017ef88
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010017ef4c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010017ef08
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010017eed4
- (struct CLSedentaryTimerNotifier *)adaptee;	// IMP=0x000000010017ee9c
- (void)endService;	// IMP=0x000000010017ee78
- (void)beginService;	// IMP=0x000000010017ec00
- (id)init;	// IMP=0x000000010017ebbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

