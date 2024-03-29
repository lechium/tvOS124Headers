/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray, UIFont, UIColor, NSString;

@interface UITableViewIndex : UIControl {

	NSArray* _titles;
	UIFont* _font;
	long long _selectedSection;
	BOOL _pastTop;
	BOOL _pastBottom;
	CGSize _cachedSize;
	CGSize _cachedSizeToFit;
	UIColor* _indexColor;
	UIColor* _indexBackgroundColor;
	UIColor* _indexTrackingBackgroundColor;
	double _topPadding;
	double _bottomPadding;
	double _verticalTextHeightEstimate;
	NSArray* _entries;
	long long _idiom;
	UIEdgeInsets _drawingInsets;

}

@property (nonatomic,retain) NSArray * titles; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) UIEdgeInsets drawingInsets;                          //@synthesize drawingInsets=_drawingInsets - In the implementation block
@property (nonatomic,retain) UIColor * indexColor; 
@property (nonatomic,retain) UIColor * indexBackgroundColor; 
@property (nonatomic,retain) UIColor * indexTrackingBackgroundColor; 
@property (nonatomic,readonly) long long selectedSection;                         //@synthesize selectedSection=_selectedSection - In the implementation block
@property (nonatomic,readonly) NSString * selectedSectionTitle; 
@property (nonatomic,readonly) BOOL pastTop;                                      //@synthesize pastTop=_pastTop - In the implementation block
@property (nonatomic,readonly) BOOL pastBottom;                                   //@synthesize pastBottom=_pastBottom - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(BOOL)canBecomeFocused;
-(void)drawRect:(CGRect)arg1 ;
-(long long)_idiom;
-(id)_fontForIdiom:(long long)arg1 ;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(long long)selectedSection;
-(BOOL)pastTop;
-(BOOL)pastBottom;
-(NSArray *)titles;
-(void)setIndexBackgroundColor:(UIColor *)arg1 ;
-(void)setIndexColor:(UIColor *)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(void)setDrawingInsets:(UIEdgeInsets)arg1 ;
-(void)setIndexTrackingBackgroundColor:(UIColor *)arg1 ;
-(NSString *)selectedSectionTitle;
-(unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1 ;
-(void)_cacheAndMeasureTitles;
-(void)_setIdiom:(long long)arg1 ;
-(CGRect)_effectiveBounds;
-(double)_minLineSpacingForIdiom:(long long)arg1 ;
-(id)_displayTitles;
-(id)_dotImage;
-(UIEdgeInsets)drawingInsets;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(UIColor *)indexColor;
-(BOOL)_updateSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)_externalDotImage;
-(UIColor *)indexTrackingBackgroundColor;
-(UIColor *)indexBackgroundColor;
@end

