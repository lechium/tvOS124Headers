/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UINavigationBarTitleViewDataSource.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant.h>

@class _UINavigationBarLargeTitleViewLayout, _UINavigationBarTransitionContext, NSArray, NSString, NSDictionary, UIView, _UINavigationControllerRefreshControlHost, UIFontMetrics;

@interface _UINavigationBarLargeTitleView : UIView <_UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant> {

	_UINavigationBarLargeTitleViewLayout* _layout;
	_UINavigationBarTransitionContext* _transitionContext;
	NSArray* _titleCandidates;
	NSString* __effectiveTitle;
	BOOL _supportsTwoLines;
	BOOL _alignAccessoryViewToTitleBaseline;
	long long _titleType;
	NSString* _title;
	NSArray* _alternateTitles;
	NSDictionary* _titleAttributes;
	UIView* _accessoryView;
	unsigned long long _accessoryViewHorizontalAlignment;
	_UINavigationControllerRefreshControlHost* _refreshControlHost;
	UIFontMetrics* _fontMetrics;

}

@property (nonatomic,readonly) UIFontMetrics * fontMetrics;                                               //@synthesize fontMetrics=_fontMetrics - In the implementation block
@property (assign,nonatomic) long long titleType;                                                         //@synthesize titleType=_titleType - In the implementation block
@property (nonatomic,copy) NSString * title;                                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * alternateTitles;                                                   //@synthesize alternateTitles=_alternateTitles - In the implementation block
@property (nonatomic,copy) NSDictionary * titleAttributes;                                                //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (assign,nonatomic) BOOL supportsTwoLines;                                                       //@synthesize supportsTwoLines=_supportsTwoLines - In the implementation block
@property (nonatomic,readonly) double restingHeightOfTitleView; 
@property (nonatomic,retain) UIView * accessoryView;                                                      //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL alignAccessoryViewToTitleBaseline;                                      //@synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryViewHorizontalAlignment;                         //@synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment - In the implementation block
@property (nonatomic,retain) _UINavigationControllerRefreshControlHost * refreshControlHost;              //@synthesize refreshControlHost=_refreshControlHost - In the implementation block
@property (assign,nonatomic) double restingHeightOfRefreshControl; 
@property (nonatomic,readonly) UIView * accessibilityTitleView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setRefreshControlHost:(_UINavigationControllerRefreshControlHost *)arg1 ;
-(_UINavigationControllerRefreshControlHost *)refreshControlHost;
-(void)titleViewChangedUnderlayContent:(id)arg1 ;
-(void)titleViewChangedHeight:(id)arg1 ;
-(void)titleViewChangedStandardDisplayItems:(id)arg1 ;
-(void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2 ;
-(void)titleViewChangedPreferredDisplaySize:(id)arg1 ;
-(id)_newLayout;
-(void)updateContent;
-(void)recordFromStateForTransition:(id)arg1 ;
-(void)recordToStateForTransition:(id)arg1 ;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg1 ;
-(void)adoptFinalStateFromTransition:(id)arg1 transitionCompleted:(BOOL)arg2 ;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(UIView *)accessibilityTitleView;
-(NSDictionary *)titleAttributes;
-(UIFontMetrics *)fontMetrics;
-(void)setSupportsTwoLines:(BOOL)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(long long)titleType;
-(void)setTitleType:(long long)arg1 ;
-(BOOL)supportsTwoLines;
-(UIView *)accessoryView;
-(BOOL)alignAccessoryViewToTitleBaseline;
-(void)setAlignAccessoryViewToTitleBaseline:(BOOL)arg1 ;
-(unsigned long long)accessoryViewHorizontalAlignment;
-(void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1 ;
-(double)restingHeightOfRefreshControl;
-(void)setRestingHeightOfRefreshControl:(double)arg1 ;
-(id)_newTitleLabel;
-(void)_setupTitle;
-(void)_updateFontMetrics;
-(id)_layoutForMeasurement;
-(CGSize)sizeThatFits:(CGSize)arg1 titleType:(long long)arg2 ;
-(id)_titleForCurrentWidth;
-(void)_updateContentAndInvalidate:(BOOL)arg1 ;
-(id)_effectiveTitle;
-(void)setAlternateTitles:(NSArray *)arg1 ;
-(double)restingHeightOfTitleView;
-(NSArray *)alternateTitles;
@end

