//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLCompassDatabaseProtocol-Protocol.h"

@class NSString;

@interface CLCompassDatabaseLocationdAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x00000001003f6604
+ (id)getSilo;	// IMP=0x00000001003f622c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001003f6208
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001003f6184
- (_Bool)syncgetLookupBiasWithMagneticField:(CDStruct_869f9c67)arg1 acceleration:(CDStruct_869f9c67)arg2 bias:(CDStruct_869f9c67 *)arg3 level:(int *)arg4 noResults:(_Bool *)arg5;	// IMP=0x00000001003f67cc
- (void)getBiasWithMagneticField:(CDStruct_869f9c67)arg1 acceleration:(CDStruct_869f9c67)arg2;	// IMP=0x00000001003f6784
- (int)syncgetPendingSetBiasCount;	// IMP=0x00000001003f6720
- (void)setBias:(CDStruct_869f9c67)arg1 withMagneticField:(CDStruct_869f9c67)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;	// IMP=0x00000001003f66b0
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001003f6668
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001003f65c8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001003f6584
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001003f6550
- (struct CLCompassDatabase *)adaptee;	// IMP=0x00000001003f6518
- (void)endService;	// IMP=0x00000001003f64f4
- (void)beginService;	// IMP=0x00000001003f62f0
- (id)init;	// IMP=0x00000001003f62ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

