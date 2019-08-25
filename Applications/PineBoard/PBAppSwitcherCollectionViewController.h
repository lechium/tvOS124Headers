//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBAppSwitcherManagerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSString, PBAppSwitcherItem, PBAppSwitcherManager, PBAppSwitcherTitleView, TVSStateMachine, UIInterpolatingMotionEffect, UIPanGestureRecognizer, UITapGestureRecognizer, UIViewPropertyAnimator, _PBAppSwitcherCollectionView;

@interface PBAppSwitcherCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, PBAppSwitcherManagerDelegate>
{
    _Bool _panningVertically;	// 8 = 0x8
    _Bool _panningHorizontally;	// 9 = 0x9
    _Bool _scrolling;	// 10 = 0xa
    _Bool _peekEffectEnabled;	// 11 = 0xb
    PBAppSwitcherManager *_appSwitcherManager;	// 16 = 0x10
    TVSStateMachine *_stateMachine;	// 24 = 0x18
    NSIndexPath *_preferredIndexPath;	// 32 = 0x20
    _PBAppSwitcherCollectionView *_collectionView;	// 40 = 0x28
    PBAppSwitcherTitleView *_titleView;	// 48 = 0x30
    UIInterpolatingMotionEffect *_peekEffect;	// 56 = 0x38
    UIPanGestureRecognizer *_panRecognizer;	// 64 = 0x40
    UITapGestureRecognizer *_upRecognizer;	// 72 = 0x48
    PBAppSwitcherItem *_focusedItem;	// 80 = 0x50
    PBAppSwitcherItem *_pendingLaunchItem;	// 88 = 0x58
    CDUnknownBlockType _launchCompletionHandler;	// 96 = 0x60
    UIViewPropertyAnimator *_switcherAnimator;	// 104 = 0x68
    struct CGPoint _initialDragLocation;	// 112 = 0x70
}

@property(retain, nonatomic) UIViewPropertyAnimator *switcherAnimator; // @synthesize switcherAnimator=_switcherAnimator;
@property(copy, nonatomic) CDUnknownBlockType launchCompletionHandler; // @synthesize launchCompletionHandler=_launchCompletionHandler;
@property(retain, nonatomic) PBAppSwitcherItem *pendingLaunchItem; // @synthesize pendingLaunchItem=_pendingLaunchItem;
@property(retain, nonatomic) PBAppSwitcherItem *focusedItem; // @synthesize focusedItem=_focusedItem;
@property(readonly, nonatomic) UITapGestureRecognizer *upRecognizer; // @synthesize upRecognizer=_upRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(readonly, nonatomic) UIInterpolatingMotionEffect *peekEffect; // @synthesize peekEffect=_peekEffect;
@property(nonatomic) _Bool peekEffectEnabled; // @synthesize peekEffectEnabled=_peekEffectEnabled;
@property(retain, nonatomic) PBAppSwitcherTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) _PBAppSwitcherCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *preferredIndexPath; // @synthesize preferredIndexPath=_preferredIndexPath;
@property(nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic, getter=isPanningHorizontally) _Bool panningHorizontally; // @synthesize panningHorizontally=_panningHorizontally;
@property(nonatomic, getter=isPanningVertically) _Bool panningVertically; // @synthesize panningVertically=_panningVertically;
@property(nonatomic) struct CGPoint initialDragLocation; // @synthesize initialDragLocation=_initialDragLocation;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) PBAppSwitcherManager *appSwitcherManager; // @synthesize appSwitcherManager=_appSwitcherManager;
- (void).cxx_destruct;	// IMP=0x00000001000a0d3c
- (struct CGPoint)_preferredContentOffsetForIndexPath:(id)arg1;	// IMP=0x00000001000a0a5c
- (void)_prepareToLaunchItemImmediately:(id)arg1;	// IMP=0x00000001000a0808
- (_Bool)_servicePendingUpdatesWithAnimation:(_Bool)arg1;	// IMP=0x00000001000a04b8
- (void)__applyPendingUpdatesToCollectionView;	// IMP=0x000000010009feb0
- (void)_handleCollectionViewUpdatesWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009fcec
- (void)_finishKillSwipeWithVelocity:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009f978
- (void)_cancelKillSwipeWithVelocity:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009f704
- (void)_updateKillSwipeWithOffset:(double)arg1;	// IMP=0x000000010009f628
- (void)_setKillGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x000000010009f5cc
- (void)_launchItem:(id)arg1 shouldAnimateLayoutSwitch:(_Bool)arg2;	// IMP=0x000000010009f084
- (_Bool)_shouldScrollToItem:(id)arg1 scrollIfNeeded:(_Bool)arg2 forced:(_Bool)arg3;	// IMP=0x000000010009eec4
- (_Bool)_activateItem:(id)arg1;	// IMP=0x000000010009ed58
- (void)_activatePendingLaunchItem;	// IMP=0x000000010009eb64
- (void)_showAppSwitcher;	// IMP=0x000000010009e53c
- (void)_initializeStateMachine;	// IMP=0x000000010009bf48
- (void)manager:(id)arg1 didReceiveLaunchRequestForItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009be3c
- (void)managerDidEnqueuePendingUpdates:(id)arg1;	// IMP=0x000000010009bd4c
- (void)panGestureRecognizerMoved:(id)arg1;	// IMP=0x000000010009b4c0
- (void)upDoubleTapped:(id)arg1;	// IMP=0x000000010009b280
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000010009b194
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010009b164
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x000000010009b134
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010009b010
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010009ade8
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x000000010009ad00
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x000000010009acd8
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000010009acc8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010009ab88
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010009ab30
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010009a9b4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010009a8a4
- (id)preferredFocusEnvironments;	// IMP=0x000000010009a814
- (void)viewDidLayoutSubviews;	// IMP=0x000000010009a6c0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010009a644
- (void)viewDidLoad;	// IMP=0x0000000100099e68
- (id)initWithManager:(id)arg1;	// IMP=0x0000000100099db8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100099da0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100099d88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

