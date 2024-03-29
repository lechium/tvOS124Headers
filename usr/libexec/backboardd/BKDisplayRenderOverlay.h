//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSDisplayRenderOverlayDescribing-Protocol.h"
#import "BSDescriptionProviding-Protocol.h"

@class BKDisplayRenderOverlayPersistenceCoordinator, BKSDisplayProgressIndicatorProperties, BKSDisplayRenderOverlayDescriptor, CADisplay, NSString;

@interface BKDisplayRenderOverlay : NSObject <BKSDisplayRenderOverlayDescribing, BSDescriptionProviding>
{
    BKSDisplayRenderOverlayDescriptor *_descriptor;	// 8 = 0x8
    BKDisplayRenderOverlayPersistenceCoordinator *_persistenceCoordinator;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    float _level;	// 32 = 0x20
    _Bool _visible;	// 36 = 0x24
    _Bool _disablesDisplayUpdates;	// 37 = 0x25
    _Bool _animates;	// 38 = 0x26
    double _scale;	// 40 = 0x28
}

@property(nonatomic, getter=_scale, setter=_setScale:) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic, getter=_persistenceCoordinator, setter=_setPersistenceCoordinator:) BKDisplayRenderOverlayPersistenceCoordinator *persistenceCoordinator; // @synthesize persistenceCoordinator=_persistenceCoordinator;
@property(nonatomic) _Bool animates; // @synthesize animates=_animates;
@property(readonly, nonatomic) _Bool disablesDisplayUpdates; // @synthesize disablesDisplayUpdates=_disablesDisplayUpdates;
@property(nonatomic, setter=_setType:) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) float level; // @synthesize level=_level;
@property(readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;	// IMP=0x0000000100022e04
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100022c20
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100022bcc
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100022b58
- (id)succinctDescription;	// IMP=0x0000000100022b04
@property(readonly, copy) NSString *description;
- (void)_wrapInCATransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022a78
- (id)_persistenceData;	// IMP=0x00000001000229d8
- (void)_cleanup;	// IMP=0x00000001000229d4
- (void)_freeze;	// IMP=0x00000001000229d0
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x00000001000229cc
- (void)_stopAnimating;	// IMP=0x00000001000229c8
- (void)_startAnimating;	// IMP=0x00000001000229c4
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x00000001000229bc
- (void)dismissWithAnimationSettings:(id)arg1;	// IMP=0x0000000100022808
- (void)freeze;	// IMP=0x0000000100022628
- (_Bool)presentWithAnimationSettings:(id)arg1;	// IMP=0x00000001000223c4
@property(readonly, nonatomic, getter=isInterstitial) _Bool interstitial;
@property(readonly, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property(readonly, nonatomic) _Bool lockBacklight;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly, retain, nonatomic) CADisplay *display;
@property(readonly, copy, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x000000010002219c
- (id)_initWithPersistenceData:(id)arg1;	// IMP=0x00000001000220e0
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x0000000100021dc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

