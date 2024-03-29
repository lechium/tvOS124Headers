/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriUISuggestionsViewDelegate;
@class UIView, UILabel, NSArray, NSTimer, NSMutableOrderedSet, SiriUIAcousticIDSpinner, SiriUISuggestionsHeaderText, UIColor;

@interface SiriUISuggestionsView : UIView {

	UIView* _contentView;
	UILabel* _headerLabel;
	UILabel* _oldHeaderLabel;
	UILabel* _subheaderLabel;
	UILabel* _largeSubheaderLabel;
	NSArray* _suggestionLabels;
	NSArray* _oldSuggestionLabels;
	BOOL _firstSuggestionPresentation;
	NSTimer* _updateSuggestionsTimer;
	NSMutableOrderedSet* _pendedSuggestions;
	SiriUIAcousticIDSpinner* _acousticIDSpinner;
	unsigned long long _numberOfSuggestions;
	NSDirectionalEdgeInsets _edgeInsets;
	UIView* _guideView;
	SiriUISuggestionsHeaderText* _headerText;
	SiriUISuggestionsHeaderText* _subheaderText;
	SiriUISuggestionsHeaderText* _largeSubheaderText;
	UIColor* _textColor;
	id<SiriUISuggestionsViewDelegate> _delegate;
	long long _orientation;
	CGPoint _contentOffset;

}

@property (nonatomic,retain) UIView * guideView;                                             //@synthesize guideView=_guideView - In the implementation block
@property (assign,getter=isGuideHidden,nonatomic) BOOL guideHidden; 
@property (nonatomic,copy) SiriUISuggestionsHeaderText * headerText;                         //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy) SiriUISuggestionsHeaderText * subheaderText;                      //@synthesize subheaderText=_subheaderText - In the implementation block
@property (nonatomic,copy) SiriUISuggestionsHeaderText * largeSubheaderText;                 //@synthesize largeSubheaderText=_largeSubheaderText - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                              //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset;                                          //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISuggestionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long orientation;                                          //@synthesize orientation=_orientation - In the implementation block
-(void)acousticIDSpinnerDidHide:(id)arg1 ;
-(double)_suggestionFontSize;
-(void)_setHeaderText:(id)arg1 ;
-(void)_setSubheaderText:(id)arg1 ;
-(double)_headerToSubheaderOffset;
-(double)_headerToLargeSubheaderOffset;
-(double)_suggestionSpacing;
-(id)_createSpringAnimation:(double)arg1 ;
-(double)_updateSuggestionsDelay;
-(void)setGuideHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isGuideHidden;
-(void)_animateHeaderOut;
-(void)_animateHeaderIn;
-(void)_loadSubheaderViewIfNeeded;
-(void)_setLargeSubheaderText:(id)arg1 ;
-(void)_loadLargeSubheaderViewIfNeeded;
-(void)_loadSuggestionsViewsIfNeeded;
-(void)_animateOutSuggestionAtIndex:(unsigned long long)arg1 ;
-(void)_animateInSuggestionAtIndex:(unsigned long long)arg1 ;
-(void)_updateSuggestions;
-(void)_setSuggestionTexts:(id)arg1 ;
-(void)stopSuggesting;
-(void)clearCurrentSuggestions;
-(void)_reallyShowAcousticIDSpinner;
-(unsigned long long)_numberOfSuggestionsToDisplay;
-(int)_heightType;
-(BOOL)_isPadHeightType;
-(void)setGuideView:(UIView *)arg1 ;
-(void)setGuideHidden:(BOOL)arg1 ;
-(void)setSubheaderText:(SiriUISuggestionsHeaderText *)arg1 ;
-(void)setLargeSubheaderText:(SiriUISuggestionsHeaderText *)arg1 ;
-(void)startSuggesting;
-(BOOL)isShowingSuggestions;
-(void)showAcousticIDSpinner;
-(void)hideAcousticIDSpinner;
-(UIView *)guideView;
-(SiriUISuggestionsHeaderText *)subheaderText;
-(SiriUISuggestionsHeaderText *)largeSubheaderText;
-(void)setDelegate:(id<SiriUISuggestionsViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<SiriUISuggestionsViewDelegate>)delegate;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffset;
-(UIColor *)textColor;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(SiriUISuggestionsHeaderText *)headerText;
-(void)setHeaderText:(SiriUISuggestionsHeaderText *)arg1 ;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isPortrait;
@end

