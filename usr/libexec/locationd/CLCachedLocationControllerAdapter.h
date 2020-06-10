//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLCachedLocationControllerProtocol-Protocol.h"

@class NSString;

@interface CLCachedLocationControllerAdapter : CLNotifierServiceAdapter <CLCachedLocationControllerProtocol>
{
}

+ (id)getSilo;	// IMP=0x000000010034345c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100343438
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001003433b4
+ (_Bool)isSupported;	// IMP=0x0000000100343324
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100343874
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100343830
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001003437fc
- (struct CLCachedLocationController *)adaptee;	// IMP=0x00000001003437c4
- (void)endService;	// IMP=0x00000001003437a0
- (void)beginService;	// IMP=0x0000000100343520
- (id)init;	// IMP=0x00000001003434dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
