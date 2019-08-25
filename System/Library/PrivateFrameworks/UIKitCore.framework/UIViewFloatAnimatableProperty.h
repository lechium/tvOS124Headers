/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, UIAnimatablePropertyState, _UIViewAnimatablePropertyTransformer;

@interface UIViewFloatAnimatableProperty : NSObject {

	NSObject*<OS_dispatch_queue> _animatablePropertyStateLockingQueue;
	NSObject*<OS_dispatch_queue> _presentationValueLockingQueue;
	NSObject*<OS_dispatch_queue> _invalidationLockingQueue;
	double _presentationValue;
	BOOL _invalidated;
	UIAnimatablePropertyState* _animatablePropertyState;
	BOOL _performingInterpolationBetweenTwoStates;
	double _value;
	_UIViewAnimatablePropertyTransformer* _transformer;

}

@property (assign,nonatomic) double presentationValue; 
@property (nonatomic,retain) UIAnimatablePropertyState * animatablePropertyState; 
@property (nonatomic,retain) _UIViewAnimatablePropertyTransformer * transformer;               //@synthesize transformer=_transformer - In the implementation block
@property (assign,nonatomic) BOOL performingInterpolationBetweenTwoStates;                     //@synthesize performingInterpolationBetweenTwoStates=_performingInterpolationBetweenTwoStates - In the implementation block
@property (assign,nonatomic) double value;                                                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double velocity; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(double)value;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(void)setValue:(double)arg1 ;
-(BOOL)isInvalidated;
-(_UIViewAnimatablePropertyTransformer *)transformer;
-(BOOL)_performAnimation;
-(void)setPresentationValue:(double)arg1 ;
-(double)presentationValue;
-(UIAnimatablePropertyState *)animatablePropertyState;
-(void)invalidateAndStopImmediately:(BOOL)arg1 ;
-(void)setAnimatablePropertyState:(UIAnimatablePropertyState *)arg1 ;
-(void)setTransformer:(_UIViewAnimatablePropertyTransformer *)arg1 ;
-(BOOL)performingInterpolationBetweenTwoStates;
-(void)setPerformingInterpolationBetweenTwoStates:(BOOL)arg1 ;
@end
