/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView;

@interface UICalloutBarBackground : UIView {

	double m_dividerOffsets[24];
	BOOL m_isDisplayingVertically;
	UIVisualEffectView* _separatorView;
	UIVisualEffectView* _blurView;
	UIVisualEffectView* _tintView;
	CGRect _highlightRect;

}

@property (assign,nonatomic) CGRect highlightRect;              //@synthesize highlightRect=_highlightRect - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(CGRect)highlightRect;
-(void)setHighlightRect:(CGRect)arg1 ;
-(void)setDividerOffsets:(double*)arg1 ;
-(void)setHighlighted:(BOOL)arg1 forFrame:(CGRect)arg2 isDisplayingVertically:(BOOL)arg3 ;
@end

