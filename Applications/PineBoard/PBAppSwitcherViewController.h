//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class PBAppSwitcherCollectionViewController, PBAppSwitcherManager, PBAppTransitionContext;

@interface PBAppSwitcherViewController : UIViewController
{
    PBAppTransitionContext *_activeTransitionContext;	// 8 = 0x8
    PBAppSwitcherCollectionViewController *_collectionViewController;	// 16 = 0x10
    CDUnknownBlockType _transitionCompletion;	// 24 = 0x18
    PBAppSwitcherManager *_appSwitcherManager;	// 32 = 0x20
}

@property(readonly, nonatomic) PBAppSwitcherManager *appSwitcherManager; // @synthesize appSwitcherManager=_appSwitcherManager;
@property(copy, nonatomic) CDUnknownBlockType transitionCompletion; // @synthesize transitionCompletion=_transitionCompletion;
@property(retain, nonatomic) PBAppSwitcherCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(retain, nonatomic) PBAppTransitionContext *activeTransitionContext; // @synthesize activeTransitionContext=_activeTransitionContext;
- (void).cxx_destruct;	// IMP=0x00000001000dc9f4
- (void)exitToCurrentApplication;	// IMP=0x00000001000dc8cc
- (void)handleTransitionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dc650
- (id)preferredFocusEnvironments;	// IMP=0x00000001000dc628
- (void)viewDidLoad;	// IMP=0x00000001000dc41c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000dc2f8

@end
