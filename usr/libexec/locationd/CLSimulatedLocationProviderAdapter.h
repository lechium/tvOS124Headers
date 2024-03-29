//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLSimulatedLocationProviderProtocol-Protocol.h"

@class NSString;

@interface CLSimulatedLocationProviderAdapter : CLLocationProviderAdapter <CLSimulatedLocationProviderProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001003af058
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001003af034
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001003aefb0
+ (_Bool)isSupported;	// IMP=0x00000001003af4a4
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001003af468
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001003af424
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001003af3f0
- (struct CLSimulatedLocationProvider *)adaptee;	// IMP=0x00000001003af3b8
- (void)endService;	// IMP=0x00000001003af394
- (void)beginService;	// IMP=0x00000001003af11c
- (id)init;	// IMP=0x00000001003af0d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

