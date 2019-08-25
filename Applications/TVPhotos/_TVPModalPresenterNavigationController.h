//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "TVPModalPresenterFocusing.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSMapTable, NSString, UIView, UIViewController;

@interface _TVPModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, TVPModalPresenterFocusing>
{
    UIViewController *_rootViewController;	// 8 = 0x8
    NSMapTable *_pushCompletionBlocks;	// 16 = 0x10
    NSMapTable *_popCompletionBlocks;	// 24 = 0x18
    NSArray *_previousViewControllers;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *previousViewControllers; // @synthesize previousViewControllers=_previousViewControllers;
- (void).cxx_destruct;	// IMP=0x000000010000a0fc
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;	// IMP=0x000000010000a048
- (void)_dismissForLastViewController:(_Bool)arg1;	// IMP=0x0000000100009f38
- (void)_dismissForLastViewController;	// IMP=0x0000000100009f28
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100009d64
- (void)reset;	// IMP=0x0000000100009c90
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000100009bac
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100009b08
- (void)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009a40
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000099a8
- (id)initWithRootViewController:(id)arg1;	// IMP=0x00000001000098b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end
