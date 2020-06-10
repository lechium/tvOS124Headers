//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLWifiTilesManagerProtocol-Protocol.h"

@class NSString;

@interface CLWifiTilesManagerAdapter : CLNotifierServiceAdapter <CLWifiTilesManagerProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100763fb4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100763f90
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100763f0c
- (void)getNumberOfInputApsUsedInWifiTileForCoordinate:(CDStruct_2c43369c)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100765f70
- (void)requestTileDownloadForLat:(double)arg1 lon:(double)arg2 details:(struct CLTileFileDownloadDetails)arg3;	// IMP=0x0000000100764400
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001007643c4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100764380
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010076434c
- (struct CLWifiTilesManager *)adaptee;	// IMP=0x0000000100764314
- (void)endService;	// IMP=0x00000001007642f0
- (void)beginService;	// IMP=0x0000000100764078
- (id)init;	// IMP=0x0000000100764034

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
