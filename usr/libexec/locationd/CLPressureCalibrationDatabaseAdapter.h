//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLPressureCalibrationDatabaseProtocol-Protocol.h"

@class NSString;

@interface CLPressureCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLPressureCalibrationDatabaseProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001004daee4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001004daec0
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001004dae3c
+ (_Bool)isSupported;	// IMP=0x00000001004db338
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001004db2fc
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001004db2b8
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001004db284
- (struct CLPressureCalibrationDatabase *)adaptee;	// IMP=0x00000001004db24c
- (void)endService;	// IMP=0x00000001004db228
- (void)beginService;	// IMP=0x00000001004dafa8
- (id)init;	// IMP=0x00000001004daf64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
