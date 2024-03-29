//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLCoarseCellTilesManagerProtocol-Protocol.h"

@class NSString;

@interface CLCoarseCellTilesManagerAdapter : CLNotifierServiceAdapter <CLCoarseCellTilesManagerProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100531724
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100531700
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010053167c
- (void)requestCellTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4;	// IMP=0x0000000100531b70
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100531b34
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100531af0
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100531abc
- (struct CLCoarseCellTilesManager *)adaptee;	// IMP=0x0000000100531a84
- (void)endService;	// IMP=0x0000000100531a60
- (void)beginService;	// IMP=0x00000001005317e8
- (id)init;	// IMP=0x00000001005317a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

