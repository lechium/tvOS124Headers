//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLRoutineMonitorClientProtocol-Protocol.h"

@class NSString;

@interface CLHarvestRoutineAdapter : NSObject <CLRoutineMonitorClientProtocol>
{
    struct CLHarvestControllerExternal *_harvesterExternal;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onVisit:(id)arg1;	// IMP=0x00000001008247f0
- (id)initWithHarvesterExternal:(struct CLHarvestControllerExternal *)arg1;	// IMP=0x0000000100824794

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

