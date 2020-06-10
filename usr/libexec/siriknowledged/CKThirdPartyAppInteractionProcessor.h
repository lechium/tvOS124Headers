//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKInteractionProcessing-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CKThirdPartyAppInteractionProcessor : NSObject <CKInteractionProcessing>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100005f74
- (_Bool)processInteraction:(id)arg1 bundleId:(id)arg2;	// IMP=0x0000000100005ecc
- (id)supportedTypes;	// IMP=0x0000000100005ec4
- (id)bundleIdPredicate;	// IMP=0x0000000100005e84
- (_Bool)supportsSiriDonations;	// IMP=0x0000000100005e7c
- (id)init;	// IMP=0x0000000100005d94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
