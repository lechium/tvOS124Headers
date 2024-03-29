/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollAccessory.h>

@class UIButton, UIView, NSInvocation, NSArray, UIScrollView;

@interface _UIStaticScrollBar : UIView <UIScrollAccessory> {

	UIButton* _upButton;
	UIButton* _downButton;
	UIView* _dividerLine;
	NSInvocation* _invocation;
	NSArray* _constraints;
	BOOL _shouldInsetButtonsForIndex;
	UIScrollView* _scrollView;
	long long _edge;

}

@property (assign,nonatomic) BOOL shouldInsetButtonsForIndex;               //@synthesize shouldInsetButtonsForIndex=_shouldInsetButtonsForIndex - In the implementation block
@property (nonatomic,readonly) long long desiredAccessoryEdge; 
@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long edge;                                //@synthesize edge=_edge - In the implementation block
@property (nonatomic,readonly) BOOL overlay; 
-(void)update;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateConstraints;
-(int)_axis;
-(void)willMoveToWindow:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(CGRect)centeringBounds;
-(void)setShouldInsetButtonsForIndex:(BOOL)arg1 ;
-(void)setEdge:(long long)arg1 ;
-(long long)edge;
-(BOOL)overlay;
-(long long)desiredAccessoryEdge;
-(void)buttonTapped:(id)arg1 ;
-(id)_constraintsForEdge:(long long)arg1 ;
-(BOOL)shouldInsetButtonsForIndex;
@end

