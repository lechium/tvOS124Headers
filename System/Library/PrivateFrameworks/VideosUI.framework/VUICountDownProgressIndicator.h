/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImage, CAShapeLayer, CADisplayLink, UIVisualEffectView;

@interface VUICountDownProgressIndicator : UIView {

	BOOL _animating;
	double _duration;
	double _progressWidth;
	UIColor* _progressTintColor;
	UIImage* _backgroundImage;
	UIColor* _backgroundTintColor;
	UIImage* _centerImage;
	UIColor* _centerTintColor;
	/*^block*/id _completion;
	CAShapeLayer* _backgroundLayer;
	CAShapeLayer* _centerLayer;
	CAShapeLayer* _progressLayer;
	CAShapeLayer* _progressMaskLayer;
	CADisplayLink* _displayLink;
	double _progress;
	double _autoFillDelta;
	UIVisualEffectView* _visualEffectView;
	double _autoFillStartTimeStamp;
	UIEdgeInsets _progressInset;
	UIEdgeInsets _backgroundImageInset;
	UIEdgeInsets _centerImageInset;

}

@property (nonatomic,retain) CAShapeLayer * backgroundLayer;                     //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * centerLayer;                         //@synthesize centerLayer=_centerLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                       //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressMaskLayer;                   //@synthesize progressMaskLayer=_progressMaskLayer - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                        //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                  //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double autoFillDelta;                               //@synthesize autoFillDelta=_autoFillDelta - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic) double autoFillStartTimeStamp;                      //@synthesize autoFillStartTimeStamp=_autoFillStartTimeStamp - In the implementation block
@property (nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double progressWidth;                               //@synthesize progressWidth=_progressWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets progressInset;                         //@synthesize progressInset=_progressInset - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;                        //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundImageInset;                  //@synthesize backgroundImageInset=_backgroundImageInset - In the implementation block
@property (nonatomic,retain) UIColor * backgroundTintColor;                      //@synthesize backgroundTintColor=_backgroundTintColor - In the implementation block
@property (nonatomic,retain) UIImage * centerImage;                              //@synthesize centerImage=_centerImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets centerImageInset;                      //@synthesize centerImageInset=_centerImageInset - In the implementation block
@property (nonatomic,retain) UIColor * centerTintColor;                          //@synthesize centerTintColor=_centerTintColor - In the implementation block
@property (nonatomic,copy) id completion;                                        //@synthesize completion=_completion - In the implementation block
-(void)setCenterImage:(UIImage *)arg1 ;
-(UIImage *)centerImage;
-(void)dealloc;
-(void)setTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setCompletion:(id)arg1 ;
-(void)didMoveToSuperview;
-(id)completion;
-(void)setProgress:(double)arg1 ;
-(double)duration;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(double)progress;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(CAShapeLayer *)backgroundLayer;
-(void)setBackgroundLayer:(CAShapeLayer *)arg1 ;
-(void)_animateValueOnDisplayLink:(id)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)_configureProgressLayer;
-(void)_setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_stopAutoAnimation;
-(UIEdgeInsets)progressInset;
-(CAShapeLayer *)progressLayer;
-(UIEdgeInsets)backgroundImageInset;
-(CAShapeLayer *)centerLayer;
-(void)_configureBackground;
-(double)progressWidth;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(void)setCenterLayer:(CAShapeLayer *)arg1 ;
-(double)autoFillDelta;
-(void)setAutoFillDelta:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 duration:(double)arg2 ;
-(void)setCenterImageInset:(UIEdgeInsets)arg1 ;
-(void)setProgressWidth:(double)arg1 ;
-(void)setProgressInset:(UIEdgeInsets)arg1 ;
-(void)setBackgroundImageInset:(UIEdgeInsets)arg1 ;
-(UIColor *)backgroundTintColor;
-(void)setBackgroundTintColor:(UIColor *)arg1 ;
-(UIEdgeInsets)centerImageInset;
-(UIColor *)centerTintColor;
-(void)setCenterTintColor:(UIColor *)arg1 ;
-(CAShapeLayer *)progressMaskLayer;
-(void)setProgressMaskLayer:(CAShapeLayer *)arg1 ;
-(double)autoFillStartTimeStamp;
-(void)setAutoFillStartTimeStamp:(double)arg1 ;
@end

