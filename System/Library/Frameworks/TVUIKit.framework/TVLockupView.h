/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class TVLockupHeaderFooterView, NSLayoutConstraint, UITapGestureRecognizer, UIView, NSString;

@interface TVLockupView : UIControl <UIGestureRecognizerDelegate> {

	BOOL _fixesHeaderFooterAtUnfocusedWidth;
	BOOL _ancestorFocused;
	TVLockupHeaderFooterView* _headerView;
	TVLockupHeaderFooterView* _footerView;
	NSLayoutConstraint* _headerViewTop;
	NSLayoutConstraint* _headerViewBottom;
	NSLayoutConstraint* _headerViewLeading;
	NSLayoutConstraint* _headerViewTrailing;
	NSLayoutConstraint* _contentViewTop;
	NSLayoutConstraint* _contentViewBottom;
	NSLayoutConstraint* _contentViewLeading;
	NSLayoutConstraint* _contentViewTrailing;
	NSLayoutConstraint* _footerViewTop;
	NSLayoutConstraint* _footerViewBottom;
	NSLayoutConstraint* _footerViewLeading;
	NSLayoutConstraint* _footerViewTrailing;
	UITapGestureRecognizer* _selectGestureRecognizer;
	UIView* _concreteContentView;
	CGSize _contentSize;
	NSDirectionalEdgeInsets _contentViewInsets;
	NSDirectionalEdgeInsets _focusSizeIncrease;

}

@property (nonatomic,retain) NSLayoutConstraint * headerViewTop;                              //@synthesize headerViewTop=_headerViewTop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerViewBottom;                           //@synthesize headerViewBottom=_headerViewBottom - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerViewLeading;                          //@synthesize headerViewLeading=_headerViewLeading - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerViewTrailing;                         //@synthesize headerViewTrailing=_headerViewTrailing - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewTop;                             //@synthesize contentViewTop=_contentViewTop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottom;                          //@synthesize contentViewBottom=_contentViewBottom - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewLeading;                         //@synthesize contentViewLeading=_contentViewLeading - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewTrailing;                        //@synthesize contentViewTrailing=_contentViewTrailing - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footerViewTop;                              //@synthesize footerViewTop=_footerViewTop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footerViewBottom;                           //@synthesize footerViewBottom=_footerViewBottom - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footerViewLeading;                          //@synthesize footerViewLeading=_footerViewLeading - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footerViewTrailing;                         //@synthesize footerViewTrailing=_footerViewTrailing - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * selectGestureRecognizer;              //@synthesize selectGestureRecognizer=_selectGestureRecognizer - In the implementation block
@property (nonatomic,readonly) BOOL canAncestorBecomeFocused; 
@property (assign,nonatomic) BOOL fixesHeaderFooterAtUnfocusedWidth;                          //@synthesize fixesHeaderFooterAtUnfocusedWidth=_fixesHeaderFooterAtUnfocusedWidth - In the implementation block
@property (nonatomic,retain) UIView * concreteContentView;                                    //@synthesize concreteContentView=_concreteContentView - In the implementation block
@property (assign,nonatomic) BOOL ancestorFocused;                                            //@synthesize ancestorFocused=_ancestorFocused - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) CGSize contentSize;                                              //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) TVLockupHeaderFooterView * headerView;                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) TVLockupHeaderFooterView * footerView;                           //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentViewInsets;                       //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets focusSizeIncrease;                       //@synthesize focusSizeIncrease=_focusSizeIncrease - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_concreteContentViewClass;
+(BOOL)_inheritsAncestorHighlighting;
-(UITapGestureRecognizer *)selectGestureRecognizer;
-(void)setFocusSizeIncrease:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)focusSizeIncrease;
-(CGSize)_intrinsicContentSize;
-(UIView *)concreteContentView;
-(void)_createFooterView;
-(void)_updateAppearanceForFocusUpdateContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setFixesHeaderFooterAtUnfocusedWidth:(BOOL)arg1 ;
-(void)setAncestorFocused:(BOOL)arg1 ;
-(void)_createConcreteContentView;
-(void)_createContentViewConstraints;
-(void)setContentViewInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)_addHeaderFooterView:(id)arg1 position:(long long)arg2 ;
-(void)_updateHeaderFooterVerticalPositionsInFocus:(BOOL)arg1 ;
-(void)_updateComponentViewConstraints;
-(void)_updateHeaderFooterHorizontalGeometryInFocus:(BOOL)arg1 ;
-(CGSize)_inferredContentSizeFromFrame:(CGRect)arg1 ;
-(BOOL)canAncestorBecomeFocused;
-(unsigned long long)_stateByApplyingAncestorFocusState;
-(void)_updateComponentAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(NSLayoutConstraint *)headerViewTop;
-(NSLayoutConstraint *)headerViewBottom;
-(NSLayoutConstraint *)footerViewTop;
-(NSLayoutConstraint *)footerViewBottom;
-(BOOL)fixesHeaderFooterAtUnfocusedWidth;
-(NSLayoutConstraint *)headerViewLeading;
-(NSLayoutConstraint *)headerViewTrailing;
-(NSLayoutConstraint *)footerViewLeading;
-(NSLayoutConstraint *)footerViewTrailing;
-(BOOL)ancestorFocused;
-(void)pressesCanceled:(id)arg1 withEvent:(id)arg2 ;
-(void)setHeaderViewTop:(NSLayoutConstraint *)arg1 ;
-(void)setHeaderViewBottom:(NSLayoutConstraint *)arg1 ;
-(void)setHeaderViewLeading:(NSLayoutConstraint *)arg1 ;
-(void)setHeaderViewTrailing:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewTop;
-(void)setContentViewTop:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewBottom;
-(void)setContentViewBottom:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewLeading;
-(void)setContentViewLeading:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewTrailing;
-(void)setContentViewTrailing:(NSLayoutConstraint *)arg1 ;
-(void)setFooterViewTop:(NSLayoutConstraint *)arg1 ;
-(void)setFooterViewBottom:(NSLayoutConstraint *)arg1 ;
-(void)setFooterViewLeading:(NSLayoutConstraint *)arg1 ;
-(void)setFooterViewTrailing:(NSLayoutConstraint *)arg1 ;
-(void)setConcreteContentView:(UIView *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)contentSize;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)setContentSize:(CGSize)arg1 ;
-(TVLockupHeaderFooterView *)headerView;
-(void)setHeaderView:(TVLockupHeaderFooterView *)arg1 ;
-(NSDirectionalEdgeInsets)contentViewInsets;
-(void)_installSelectGestureRecognizer;
-(unsigned long long)_stateForFocusUpdateContext:(id)arg1 ;
-(void)_selectGestureChanged:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(TVLockupHeaderFooterView *)footerView;
-(void)setFooterView:(TVLockupHeaderFooterView *)arg1 ;
@end
