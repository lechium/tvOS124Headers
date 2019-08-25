/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIFloatingContentViewDelegate.h>

@class UITextView, _UIFloatingContentView, UIVisualEffectView, UILabel, NSLayoutConstraint, NSString;

@interface AVInfoPanelExpandingSummaryView : UIView <_UIFloatingContentViewDelegate> {

	UITextView* _summaryTextView;
	_UIFloatingContentView* _floatingView;
	UIVisualEffectView* _backgroundView;
	UILabel* _moreLabel;
	NSLayoutConstraint* _horizontalConstraintOfMoreButton;
	BOOL _isTextTruncating;
	BOOL _highLighted;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highLighted;              //@synthesize highLighted=_highLighted - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) unsigned long long maxNumberOfLines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isTextTruncating;
-(void)setHighLighted:(BOOL)arg1 ;
-(void)_createViews;
-(void)setMaxNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfLines;
-(id)_moreLabelExclusionPath;
-(id)init;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)_updateAppearance;
@end

