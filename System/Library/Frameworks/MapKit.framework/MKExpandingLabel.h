/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSTextContainer, NSTextStorage, NSLayoutManager, _MKUILabel, UITapGestureRecognizer, UITextView, UIColor, NSString, UIFont, NSAttributedString;

@interface MKExpandingLabel : UIView <UIGestureRecognizerDelegate> {

	unsigned long long _expansionMode;
	NSTextContainer* _textContainer;
	NSTextStorage* _textStorage;
	NSLayoutManager* _textLayoutManager;
	_MKUILabel* _showMoreLabel;
	UITapGestureRecognizer* _showMoreTapRecognizer;
	BOOL _isPerformingLayout;
	UITextView* _textView;
	UIColor* _showMoreTextColor;
	unsigned long long _numberOfLinesWhenCollapsed;
	/*^block*/id _labelResizedBlock;

}

@property (nonatomic,retain) UITextView * textView;                                      //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSString * showMoreText; 
@property (nonatomic,retain) UIFont * showMoreFont; 
@property (nonatomic,retain) UIColor * showMoreTextColor;                                //@synthesize showMoreTextColor=_showMoreTextColor - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLinesWhenCollapsed;              //@synthesize numberOfLinesWhenCollapsed=_numberOfLinesWhenCollapsed - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded; 
@property (nonatomic,copy) id labelResizedBlock;                                         //@synthesize labelResizedBlock=_labelResizedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)_mkExpandingLabelComonInit;
-(void)setNumberOfLinesWhenCollapsed:(unsigned long long)arg1 ;
-(void)setShowMoreText:(NSString *)arg1 ;
-(NSString *)showMoreText;
-(void)setShowMoreFont:(UIFont *)arg1 ;
-(UIFont *)showMoreFont;
-(void)setShowMoreTextColor:(UIColor *)arg1 ;
-(UIColor *)showMoreTextColor;
-(void)_setTextExclusionPath;
-(void)_expand;
-(void)_setExpansionMode:(unsigned long long)arg1 ;
-(BOOL)isShowingExpanded;
-(BOOL)_canShowAllText;
-(unsigned long long)numberOfLinesWhenCollapsed;
-(id)labelResizedBlock;
-(void)setLabelResizedBlock:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(long long)textAlignment;
-(BOOL)isExpanded;
-(id)viewForLastBaselineLayout;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(id)viewForFirstBaselineLayout;
-(UITextView *)textView;
@end

