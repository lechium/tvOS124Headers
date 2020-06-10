//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKBacklightManager, BKOrientationManager, CAWindowServer, NSMutableIndexSet, NSMutableSet;
@protocol OS_dispatch_queue;

@interface BKDisplayRenderOverlayManager : NSObject
{
    CAWindowServer *_windowServer;
    BKOrientationManager *_orientationManager;
    BKBacklightManager *_backlightManager;
    NSMutableSet *_activeOverlays;
    NSMutableSet *_overlaysDisablingUpdates;
    long long _lockedOrientation;
    _Bool _backlightLocked;
    NSMutableIndexSet *_frozenDisplayIDs;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(readonly, nonatomic) _Bool backlightLocked; // @synthesize backlightLocked=_backlightLocked;
@property(readonly, nonatomic) NSMutableSet *overlaysDisablingUpdates; // @synthesize overlaysDisablingUpdates=_overlaysDisablingUpdates;
- (void).cxx_destruct;
- (id)_updateWindowServerUpdatesForOverlays:(id)arg1;
- (void)_queue_setBacklightLocked:(_Bool)arg1;
- (void)_queue_setLockedOrientation:(long long)arg1;
- (void)_queue_updateStateForActiveOverlayChange;
- (void)_queue_freezeOverlay:(id)arg1;
- (void)_queue_setOverlaysDisablingUpdates:(id)arg1;
- (_Bool)isShowingNonBootUIOverlays;
- (void)prepareForRestart;
- (_Bool)freezeOverlay:(id)arg1;
- (_Bool)removeOverlay:(id)arg1 withAnimationSettings:(id)arg2;
- (_Bool)applyOverlay:(id)arg1 withAnimationSettings:(id)arg2;
@property(readonly, nonatomic) NSMutableSet *activeOverlays; // @synthesize activeOverlays=_activeOverlays;
- (id)activeOverlayWithDescriptor:(id)arg1;
- (id)description;
- (id)_initWithPersistenceCoordinator:(id)arg1 orientationManager:(id)arg2 backlightManager:(id)arg3 windowServer:(id)arg4;

@end

