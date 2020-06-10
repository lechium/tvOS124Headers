//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLLocationAwarenessProviderProtocol-Protocol.h"
#import "CLRoutineMonitorClientProtocol-Protocol.h"

@class NSString;

@interface CLLocationAwarenessProviderAdapter : CLNotifierServiceAdapter <CLRoutineMonitorClientProtocol, CLLocationAwarenessProviderProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001006eaf60
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001006eaf3c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001006eaeb8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006eb370
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001006eb32c
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006eb2f8
- (struct CLLocationAwarenessProvider *)adaptee;	// IMP=0x00000001006eb2c0
- (void)endService;	// IMP=0x00000001006eb29c
- (void)beginService;	// IMP=0x00000001006eb024
- (id)init;	// IMP=0x00000001006eafe0
- (void)onScenarioTrigger:(id)arg1;	// IMP=0x00000001006eb594

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

