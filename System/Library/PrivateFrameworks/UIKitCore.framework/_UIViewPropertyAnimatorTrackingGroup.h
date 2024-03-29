/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewImplicitlyAnimating.h>

@class NSArray, NSString;

@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating> {

	NSArray* _trackingAnimators;

}

@property (nonatomic,readonly) NSArray * trackingAnimators;                //@synthesize trackingAnimators=_trackingAnimators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long state; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,getter=isReversed,nonatomic) BOOL reversed; 
@property (assign,nonatomic) double fractionComplete; 
-(long long)state;
-(void)stopAnimation:(BOOL)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)startAnimationAfterDelay:(double)arg1 ;
-(id)initWithAnimators:(id)arg1 ;
-(void)startAnimation;
-(void)pauseAnimation;
-(double)fractionComplete;
-(void)setFractionComplete:(double)arg1 ;
-(BOOL)isRunning;
-(BOOL)isReversed;
-(void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2 ;
-(void)setReversed:(BOOL)arg1 ;
-(void)finishAnimationAtPosition:(long long)arg1 ;
-(NSArray *)trackingAnimators;
@end

