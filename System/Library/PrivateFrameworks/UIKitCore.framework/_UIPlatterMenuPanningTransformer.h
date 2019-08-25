/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPlatterMenuPanningTransformerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSDate, _UIVelocityIntegrator;

@interface _UIPlatterMenuPanningTransformer : NSObject {

	int _axisLock;
	int _overrideLockAxis;
	id<_UIPlatterMenuPanningTransformerDelegate> _delegate;
	double _minimumXVelocityForAxisLock;
	double _lastAxisLockTime;
	NSDate* _timeForLastDirectionalChange;
	NSDate* _panBeginTime;
	_UIVelocityIntegrator* _velocityIntegrator;
	CGPoint _transitionZonePosition;
	CGSize _transitionZoneSize;
	CGPoint _lastTouchPosition;
	CGVector _lastOffset;
	CGPoint _lastTransformedPoint;
	CGPoint _panBeginTouchPosition;
	CGPoint _lastDirectionChangeTouchPosition;
	CGRect _transitionZoneRect;

}

@property (assign,nonatomic) CGPoint transitionZonePosition;                                            //@synthesize transitionZonePosition=_transitionZonePosition - In the implementation block
@property (assign,nonatomic) CGSize transitionZoneSize;                                                 //@synthesize transitionZoneSize=_transitionZoneSize - In the implementation block
@property (assign,nonatomic) CGPoint lastTouchPosition;                                                 //@synthesize lastTouchPosition=_lastTouchPosition - In the implementation block
@property (assign,nonatomic) CGRect transitionZoneRect;                                                 //@synthesize transitionZoneRect=_transitionZoneRect - In the implementation block
@property (assign,nonatomic) int axisLock;                                                              //@synthesize axisLock=_axisLock - In the implementation block
@property (assign,nonatomic) int overrideLockAxis;                                                      //@synthesize overrideLockAxis=_overrideLockAxis - In the implementation block
@property (assign,nonatomic) double lastAxisLockTime;                                                   //@synthesize lastAxisLockTime=_lastAxisLockTime - In the implementation block
@property (assign,nonatomic) CGVector lastOffset;                                                       //@synthesize lastOffset=_lastOffset - In the implementation block
@property (nonatomic,retain) NSDate * timeForLastDirectionalChange;                                     //@synthesize timeForLastDirectionalChange=_timeForLastDirectionalChange - In the implementation block
@property (assign,nonatomic) CGPoint lastTransformedPoint;                                              //@synthesize lastTransformedPoint=_lastTransformedPoint - In the implementation block
@property (assign,nonatomic) CGPoint panBeginTouchPosition;                                             //@synthesize panBeginTouchPosition=_panBeginTouchPosition - In the implementation block
@property (assign,nonatomic) CGPoint lastDirectionChangeTouchPosition;                                  //@synthesize lastDirectionChangeTouchPosition=_lastDirectionChangeTouchPosition - In the implementation block
@property (nonatomic,retain) NSDate * panBeginTime;                                                     //@synthesize panBeginTime=_panBeginTime - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * velocityIntegrator;                                //@synthesize velocityIntegrator=_velocityIntegrator - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPlatterMenuPanningTransformerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGVector offset; 
@property (nonatomic,readonly) CGVector velocity; 
@property (assign,nonatomic) double minimumXVelocityForAxisLock;                                        //@synthesize minimumXVelocityForAxisLock=_minimumXVelocityForAxisLock - In the implementation block
+(id)transformerWithAxisTransitionZonePosition:(CGPoint)arg1 axisTransitionZoneSize:(CGSize)arg2 ;
-(void)setDelegate:(id<_UIPlatterMenuPanningTransformerDelegate>)arg1 ;
-(id<_UIPlatterMenuPanningTransformerDelegate>)delegate;
-(CGVector)velocity;
-(CGVector)offset;
-(void)didBeginPanningWithTouchPosition:(CGPoint)arg1 currentTransformedPosition:(CGPoint)arg2 ;
-(void)didPanWithTouchPosition:(CGPoint)arg1 currentTransformedPosition:(CGPoint)arg2 ;
-(void)didEndPanningWithTouchPosition:(CGPoint)arg1 currentTransformedPosition:(CGPoint)arg2 ;
-(void)lockIntoYAxis;
-(void)_enterYLockedState;
-(void)setMinimumXVelocityForAxisLock:(double)arg1 ;
-(id)initWithAxisTransitionZonePosition:(CGPoint)arg1 axisTransitionZoneSize:(CGSize)arg2 ;
-(NSDate *)timeForLastDirectionalChange;
-(void)setOverrideLockAxis:(int)arg1 ;
-(void)setAxisLock:(int)arg1 ;
-(CGPoint)transitionZonePosition;
-(CGPoint)lastTransformedPoint;
-(_UIVelocityIntegrator *)velocityIntegrator;
-(void)setLastDirectionChangeTouchPosition:(CGPoint)arg1 ;
-(void)setPanBeginTouchPosition:(CGPoint)arg1 ;
-(void)setPanBeginTime:(NSDate *)arg1 ;
-(int)overrideLockAxis;
-(void)setTimeForLastDirectionalChange:(NSDate *)arg1 ;
-(void)setLastTransformedPoint:(CGPoint)arg1 ;
-(void)setLastTouchPosition:(CGPoint)arg1 ;
-(void)setLastOffset:(CGVector)arg1 ;
-(CGPoint)lastTouchPosition;
-(int)axisLock;
-(CGRect)transitionZoneRect;
-(CGPoint)panBeginTouchPosition;
-(CGPoint)lastDirectionChangeTouchPosition;
-(double)lastAxisLockTime;
-(double)minimumXVelocityForAxisLock;
-(void)setLastAxisLockTime:(double)arg1 ;
-(CGVector)lastOffset;
-(double)timeIntervalSinceLastDirectionChange;
-(void)setTransitionZonePosition:(CGPoint)arg1 ;
-(CGSize)transitionZoneSize;
-(void)setTransitionZoneSize:(CGSize)arg1 ;
-(void)setTransitionZoneRect:(CGRect)arg1 ;
-(NSDate *)panBeginTime;
-(void)setVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
@end

