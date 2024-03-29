/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarContentView.h>

@class _UIButtonBar, NSLayoutConstraint, NSMapTable;

@interface _UIToolbarContentView : _UIBarContentView {

	_UIButtonBar* _buttonBar;
	NSLayoutConstraint* _buttonBarLeadingConstraint;
	NSLayoutConstraint* _buttonBarTrailingConstraint;
	NSMapTable* _absorptionTable;
	double _standardEdgeSpacing;
	BOOL _hitTestingExtensionsAreValid;
	NSDirectionalEdgeInsets _padding;

}

@property (assign,nonatomic) NSDirectionalEdgeInsets padding;              //@synthesize padding=_padding - In the implementation block
-(void)updateConstraints;
-(void)tintColorDidChange;
-(void)layoutMarginsDidChange;
-(void)_appearanceChanged;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1 ;
-(long long)barMetrics;
-(double)defaultEdgeSpacing;
-(double)absorptionForItem:(id)arg1 ;
-(double)defaultTextPadding;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)updateContent;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(void)setPadding:(NSDirectionalEdgeInsets)arg1 ;
-(void)reloadWithItems:(id)arg1 ;
-(void)_updateButtonBarConstraintConstantsForItems:(id)arg1 inView:(id)arg2 ;
-(id)_computeEdgeAbsorptionForItems:(id)arg1 ;
-(void)_updateThreeUpFlagsForItems:(id)arg1 ;
-(id)_newButtonBarWithItems:(id)arg1 ;
-(NSDirectionalEdgeInsets)padding;
@end

