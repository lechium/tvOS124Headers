/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSArray, NSSet, TVSliderContentView;

@interface TVPlaybackProgressBarBackgroundMask : UIView {

	UIColor* _fillColor;
	double _borderWidth;
	double _minBufferingProgress;
	double _maxBufferingProgress;
	double _minPlayheadProgress;
	double _maxPlayheadProgress;
	NSArray* _adMarkers;
	NSSet* _progressBarShapeViews;
	TVSliderContentView* _bufferingSliderContentView;

}

@property (nonatomic,copy) NSSet * progressBarShapeViews;                                   //@synthesize progressBarShapeViews=_progressBarShapeViews - In the implementation block
@property (nonatomic,retain) TVSliderContentView * bufferingSliderContentView;              //@synthesize bufferingSliderContentView=_bufferingSliderContentView - In the implementation block
@property (assign,nonatomic) UIColor * fillColor;                                           //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                                            //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double minBufferingProgress;                                   //@synthesize minBufferingProgress=_minBufferingProgress - In the implementation block
@property (assign,nonatomic) double maxBufferingProgress;                                   //@synthesize maxBufferingProgress=_maxBufferingProgress - In the implementation block
@property (assign,nonatomic) double minPlayheadProgress;                                    //@synthesize minPlayheadProgress=_minPlayheadProgress - In the implementation block
@property (assign,nonatomic) double maxPlayheadProgress;                                    //@synthesize maxPlayheadProgress=_maxPlayheadProgress - In the implementation block
@property (nonatomic,copy) NSArray * adMarkers;                                             //@synthesize adMarkers=_adMarkers - In the implementation block
-(NSSet *)progressBarShapeViews;
-(double)maxBufferingProgress;
-(void)setMinBufferingProgress:(double)arg1 maxBufferingProgress:(double)arg2 ;
-(double)minBufferingProgress;
-(double)maxPlayheadProgress;
-(void)setMinPlayheadProgress:(double)arg1 maxPlayheadProgress:(double)arg2 ;
-(double)minPlayheadProgress;
-(TVSliderContentView *)bufferingSliderContentView;
-(void)setMinBufferingProgress:(double)arg1 ;
-(void)setMaxBufferingProgress:(double)arg1 ;
-(void)setMinPlayheadProgress:(double)arg1 ;
-(void)setMaxPlayheadProgress:(double)arg1 ;
-(void)setAdMarkers:(NSArray *)arg1 ;
-(NSArray *)adMarkers;
-(void)setProgressBarShapeViews:(NSSet *)arg1 ;
-(void)setBufferingSliderContentView:(TVSliderContentView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)fillColor;
-(double)borderWidth;
-(void)setFillColor:(UIColor *)arg1 ;
@end

