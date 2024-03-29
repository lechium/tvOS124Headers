//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayRenderOverlay.h"

#import "CAAnimationDelegate-Protocol.h"

@class CAContext, NSString;

@interface BKDisplayRenderOverlayImage : BKDisplayRenderOverlay <CAAnimationDelegate>
{
    CAContext *_context;	// 8 = 0x8
    struct CGImage *_imageRef;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001d83c
- (_Bool)_applyProgressIndicatorPropertiesToKernelIfNecessary;	// IMP=0x000000010001d504
- (id)_animationForKeyPath:(id)arg1 withSettings:(id)arg2;	// IMP=0x000000010001d448
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010001d35c
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010001d350
- (void)_cleanup;	// IMP=0x000000010001d2a4
- (id)_persistenceData;	// IMP=0x000000010001d23c
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x000000010001d05c
- (void)_freeze;	// IMP=0x000000010001d004
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x000000010001c8a4
- (_Bool)disablesDisplayUpdates;	// IMP=0x000000010001c868
@property(readonly, nonatomic) struct CGImage *image;
- (void)dealloc;	// IMP=0x000000010001c740
- (id)_initWithPersistenceData:(id)arg1;	// IMP=0x000000010001c68c
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x000000010001c630

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

