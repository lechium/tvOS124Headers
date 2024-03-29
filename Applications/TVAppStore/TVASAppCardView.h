//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TVAuxiliaryViewSelecting.h"

@class NSString, _UIFloatingContentView;

@interface TVASAppCardView : UIView <TVAuxiliaryViewSelecting>
{
    UIView *_screenshotView;	// 8 = 0x8
    UIView *_iconView;	// 16 = 0x10
    UIView *_titleView;	// 24 = 0x18
    UIView *_subtitleView;	// 32 = 0x20
    UIView *_rightLabelView;	// 40 = 0x28
    _UIFloatingContentView *_floatingView;	// 48 = 0x30
    UIView *_highlightView;	// 56 = 0x38
}

+ (id)appCardViewFromElement:(id)arg1 existingView:(id)arg2;	// IMP=0x0000000100006020
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UIView *rightLabelView; // @synthesize rightLabelView=_rightLabelView;
@property(retain, nonatomic) UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *screenshotView; // @synthesize screenshotView=_screenshotView;
- (void).cxx_destruct;	// IMP=0x00000001000086fc
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x0000000100008520
- (void)layoutSubviews;	// IMP=0x0000000100007d10
- (void)applyFocusedLayout;	// IMP=0x00000001000079dc
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010000713c
- (unsigned long long)_primaryStateForState:(unsigned long long)arg1;	// IMP=0x0000000100007110
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)_updateForAccessibilityChange;	// IMP=0x0000000100006c90
- (void)dealloc;	// IMP=0x0000000100006c18
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000699c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

