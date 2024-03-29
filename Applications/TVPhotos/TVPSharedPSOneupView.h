//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPOneupView.h"

@class UIView;

@interface TVPSharedPSOneupView : TVPOneupView
{
    UIView *_commentsBubbleView;	// 8 = 0x8
    UIView *_itemContainerView;	// 16 = 0x10
}

@property(retain, nonatomic) UIView *itemContainerView; // @synthesize itemContainerView=_itemContainerView;
@property(retain, nonatomic) UIView *commentsBubbleView; // @synthesize commentsBubbleView=_commentsBubbleView;
- (void).cxx_destruct;	// IMP=0x000000010004193c
- (id)_getSecondaryCommentsViewFromParentView;	// IMP=0x0000000100041778
- (void)_setFrameForSecondaryView:(id)arg1 itemViewFrame:(struct CGRect)arg2;	// IMP=0x00000001000416a4
- (void)_performPushTransitionToView:(id)arg1 atNewIndex:(long long)arg2;	// IMP=0x0000000100041288
- (void)_addAllSubviews;	// IMP=0x0000000100041130
- (void)_menuAction:(id)arg1;	// IMP=0x00000001000410b8
- (void)_transitionToItemAtIndex:(long long)arg1;	// IMP=0x0000000100040e44
- (void)_configureSupplementaryView;	// IMP=0x0000000100040cec
- (void)_configureItemView:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100040b54
- (void)_transitionToFullScreenMode;	// IMP=0x000000010004092c
- (void)_transitionToCaptionMode;	// IMP=0x0000000100040498
- (void)_longPressAction:(id)arg1;	// IMP=0x0000000100040258
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100040250
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001000400e0
- (id)preferredFocusEnvironments;	// IMP=0x000000010003fef8
- (_Bool)canBecomeFocused;	// IMP=0x000000010003fef0
- (void)switchToOneupCaptionView;	// IMP=0x000000010003fee4

@end

