//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEHelperDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface NEHelperSourceAppInfo : NSObject <NEHelperDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;	// IMP=0x0000000100023ca8
- (void)handleMessage:(id)arg1;	// IMP=0x000000010002332c
- (id)initWithFirstMessage:(id)arg1;	// IMP=0x000000010002305c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

