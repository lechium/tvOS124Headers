//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLCellTilesManagerProtocol-Protocol.h"

@class NSString;

@interface CLCellTilesManagerAdapter : CLNotifierServiceAdapter <CLCellTilesManagerProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100744220
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001007441fc
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100744178
- (void)requestCellTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4;	// IMP=0x000000010074466c
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100744630
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001007445ec
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001007445b8
- (struct CLCellTilesManager *)adaptee;	// IMP=0x0000000100744580
- (void)endService;	// IMP=0x000000010074455c
- (void)beginService;	// IMP=0x00000001007442e4
- (id)init;	// IMP=0x00000001007442a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

