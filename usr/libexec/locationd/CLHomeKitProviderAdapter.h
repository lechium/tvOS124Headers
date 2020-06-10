//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLHomeKitProviderProtocol-Protocol.h"

@class NSString;

@interface CLHomeKitProviderAdapter : CLNotifierServiceAdapter <CLHomeKitProviderProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001001b5bbc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b5b98
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001001b5b14
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b5fcc
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b5f88
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b5f54
- (struct CLHomeKitProvider *)adaptee;	// IMP=0x00000001001b5f1c
- (void)endService;	// IMP=0x00000001001b5ef8
- (void)beginService;	// IMP=0x00000001001b5c80
- (id)init;	// IMP=0x00000001001b5c3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

