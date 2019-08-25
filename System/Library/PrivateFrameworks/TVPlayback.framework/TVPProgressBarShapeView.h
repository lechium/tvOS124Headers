/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSArray, UIBezierPath;

@interface TVPProgressBarShapeView : UIView {

	BOOL _filled;
	BOOL _needsPathUpdate;
	BOOL _needsAdMarkerPathsUpdate;
	BOOL _needsClippingUpdate;
	double _borderWidth;
	UIColor* _fillColor;
	double _minPlayheadPercentage;
	double _maxPlayheadPercentage;
	NSArray* _adMarkerPositions;
	UIBezierPath* _rectangularPath;
	UIBezierPath* _roundedPath;
	NSArray* _adMarkerPaths;
	CGRect _leftClippingRect;
	CGRect _middleClippingRect;
	CGRect _rightClippingRect;

}

@property (nonatomic,copy) UIBezierPath * rectangularPath;               //@synthesize rectangularPath=_rectangularPath - In the implementation block
@property (nonatomic,copy) UIBezierPath * roundedPath;                   //@synthesize roundedPath=_roundedPath - In the implementation block
@property (assign,nonatomic) BOOL needsPathUpdate;                       //@synthesize needsPathUpdate=_needsPathUpdate - In the implementation block
@property (nonatomic,copy) NSArray * adMarkerPaths;                      //@synthesize adMarkerPaths=_adMarkerPaths - In the implementation block
@property (assign,nonatomic) BOOL needsAdMarkerPathsUpdate;              //@synthesize needsAdMarkerPathsUpdate=_needsAdMarkerPathsUpdate - In the implementation block
@property (assign,nonatomic) CGRect leftClippingRect;                    //@synthesize leftClippingRect=_leftClippingRect - In the implementation block
@property (assign,nonatomic) CGRect middleClippingRect;                  //@synthesize middleClippingRect=_middleClippingRect - In the implementation block
@property (assign,nonatomic) CGRect rightClippingRect;                   //@synthesize rightClippingRect=_rightClippingRect - In the implementation block
@property (assign,nonatomic) BOOL needsClippingUpdate;                   //@synthesize needsClippingUpdate=_needsClippingUpdate - In the implementation block
@property (assign,nonatomic) double borderWidth;                         //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                        //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double minPlayheadPercentage;               //@synthesize minPlayheadPercentage=_minPlayheadPercentage - In the implementation block
@property (assign,nonatomic) double maxPlayheadPercentage;               //@synthesize maxPlayheadPercentage=_maxPlayheadPercentage - In the implementation block
@property (assign,getter=isFilled,nonatomic) BOOL filled;                //@synthesize filled=_filled - In the implementation block
@property (nonatomic,copy) NSArray * adMarkerPositions;                  //@synthesize adMarkerPositions=_adMarkerPositions - In the implementation block
-(void)setMinPlayheadPercentage:(double)arg1 ;
-(void)setMaxPlayheadPercentage:(double)arg1 ;
-(void)setAdMarkerPositions:(NSArray *)arg1 ;
-(void)setFilled:(BOOL)arg1 ;
-(BOOL)isFilled;
-(void)setRectangularPath:(UIBezierPath *)arg1 ;
-(void)setRoundedPath:(UIBezierPath *)arg1 ;
-(BOOL)needsPathUpdate;
-(void)_updatePathWithEndCapStyle:(long long)arg1 ;
-(void)setNeedsPathUpdate:(BOOL)arg1 ;
-(BOOL)needsAdMarkerPathsUpdate;
-(NSArray *)adMarkerPositions;
-(void)setAdMarkerPaths:(NSArray *)arg1 ;
-(void)setNeedsAdMarkerPathsUpdate:(BOOL)arg1 ;
-(BOOL)needsClippingUpdate;
-(double)minPlayheadPercentage;
-(double)maxPlayheadPercentage;
-(void)setLeftClippingRect:(CGRect)arg1 ;
-(void)setMiddleClippingRect:(CGRect)arg1 ;
-(void)setRightClippingRect:(CGRect)arg1 ;
-(void)setNeedsClippingUpdate:(BOOL)arg1 ;
-(NSArray *)adMarkerPaths;
-(void)_setNeedsPathUpdate;
-(void)_setNeedsClippingUpdate;
-(void)_setNeedsAdMarkerPathsUpdate;
-(void)_updatePathIfNeeded;
-(void)_updateAdMarkerPathsIfNeeded;
-(void)_updateClippingIfNeeded;
-(UIBezierPath *)roundedPath;
-(UIBezierPath *)rectangularPath;
-(CGRect)leftClippingRect;
-(void)_drawPath:(id)arg1 inRect:(CGRect)arg2 ;
-(CGRect)middleClippingRect;
-(CGRect)rightClippingRect;
-(void)_drawAdMarkersInRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(UIColor *)fillColor;
-(double)borderWidth;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
@end

