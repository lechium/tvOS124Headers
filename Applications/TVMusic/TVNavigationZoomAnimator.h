//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

@interface TVNavigationZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
}

- (void)_beginZoomAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010008df24
- (void)animateTransition:(id)arg1;	// IMP=0x000000010008dde0
- (double)transitionDuration:(id)arg1;	// IMP=0x000000010008ddd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

