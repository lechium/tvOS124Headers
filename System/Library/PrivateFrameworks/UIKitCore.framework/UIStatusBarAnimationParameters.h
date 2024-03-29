/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIBasicAnimationFactory;
@interface UIStatusBarAnimationParameters : NSObject {

	double _duration;
	double _delay;
	long long _curve;
	id<_UIBasicAnimationFactory> _animationFactory;
	double _startTime;

}

@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                               //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) long long curve;                                            //@synthesize curve=_curve - In the implementation block
@property (nonatomic,retain) id<_UIBasicAnimationFactory> animationFactory;              //@synthesize animationFactory=_animationFactory - In the implementation block
@property (assign,nonatomic) double startTime;                                           //@synthesize startTime=_startTime - In the implementation block
+(void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 animations:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 frameInterval:(double)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(void)animateWithParameters:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)setDuration:(double)arg1 ;
-(long long)curve;
-(void)setCurve:(long long)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id<_UIBasicAnimationFactory>)animationFactory;
-(id)initWithDefaultParameters;
-(id)initWithEmptyParameters;
-(BOOL)shouldAnimate;
-(void)setAnimationFactory:(id<_UIBasicAnimationFactory>)arg1 ;
@end

