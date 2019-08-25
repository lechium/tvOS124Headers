/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVLabel.h>

@class CALayer, NSArray, __TVAnimatedImageView;

@interface _TVAnimatedLabel : _TVLabel {

	BOOL _crossfading;
	BOOL _marqueeNeeded;
	BOOL _marqueeing;
	BOOL _starting;
	BOOL _stopping;
	CALayer* _maskLayer;
	BOOL _animating;
	BOOL _paused;
	float _scrollRate;
	double _marqueeDelay;
	double _replicationPadding;
	double _maskCapWidth;
	double _crossfadeDuration;
	NSArray* _attributedStrings;
	unsigned long long _currentAttributedStringIndex;
	double _underPosterOutset;
	__TVAnimatedImageView* _currentMarqueeView;
	__TVAnimatedImageView* _nextMarqueeView;

}

@property (nonatomic,__weak,readonly) __TVAnimatedImageView * currentMarqueeView;              //@synthesize currentMarqueeView=_currentMarqueeView - In the implementation block
@property (nonatomic,__weak,readonly) __TVAnimatedImageView * nextMarqueeView;                 //@synthesize nextMarqueeView=_nextMarqueeView - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                //@synthesize animating=_animating - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                      //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) double marqueeDelay;                                              //@synthesize marqueeDelay=_marqueeDelay - In the implementation block
@property (assign,nonatomic) double replicationPadding;                                        //@synthesize replicationPadding=_replicationPadding - In the implementation block
@property (assign,nonatomic) double maskCapWidth;                                              //@synthesize maskCapWidth=_maskCapWidth - In the implementation block
@property (assign,nonatomic) float scrollRate;                                                 //@synthesize scrollRate=_scrollRate - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;                                         //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (nonatomic,copy) NSArray * attributedStrings;                                        //@synthesize attributedStrings=_attributedStrings - In the implementation block
@property (nonatomic,readonly) unsigned long long currentAttributedStringIndex;                //@synthesize currentAttributedStringIndex=_currentAttributedStringIndex - In the implementation block
@property (assign,nonatomic) double underPosterOutset;                                         //@synthesize underPosterOutset=_underPosterOutset - In the implementation block
-(double)crossfadeDuration;
-(void)setCrossfadeDuration:(double)arg1 ;
-(void)_clearAnimations;
-(__TVAnimatedImageView *)currentMarqueeView;
-(__TVAnimatedImageView *)nextMarqueeView;
-(id)_rasterizedTextWithMarquee:(BOOL)arg1 ;
-(void)_startMarqueeIfNeeded;
-(double)replicationPadding;
-(unsigned long long)currentAttributedStringIndex;
-(NSArray *)attributedStrings;
-(BOOL)_shouldCycle;
-(float)scrollRate;
-(double)marqueeDelay;
-(void)_prepareNextMarqueeWithDelay:(double)arg1 ;
-(void)_clearAttributedStrings;
-(void)stopAnimatingWithoutResetWithDuration:(double)arg1 ;
-(void)stopAndResetScrollWithDuration:(double)arg1 ;
-(void)setMarqueeDelay:(double)arg1 ;
-(void)setReplicationPadding:(double)arg1 ;
-(double)maskCapWidth;
-(void)setMaskCapWidth:(double)arg1 ;
-(void)setScrollRate:(float)arg1 ;
-(double)underPosterOutset;
-(void)setUnderPosterOutset:(double)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setNeedsDisplay;
-(BOOL)_isRTL;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)stopAnimating;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)setAttributedStrings:(NSArray *)arg1 ;
@end

