/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface UIAnimator : NSObject {

	NSMutableArray* _animations;
	double _lastUpdateTime;
	id _heartbeat[3];
	int _heartbeatClientCount[3];

}
+(id)sharedAnimator;
+(void)disableAnimation;
+(void)enableAnimation;
-(void)dealloc;
-(void)stopAnimation:(id)arg1 ;
-(void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3 startTime:(double)arg4 ;
-(void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2 ;
-(void)_startAnimation:(id)arg1 withStartTime:(double)arg2 ;
-(void)_advanceAnimationsOfType:(int)arg1 withTimestamp:(double)arg2 ;
-(void)_TimerHeartbeatCallback:(id)arg1 ;
-(void)_TVHeartbeatCallback:(id)arg1 ;
-(void)_LCDHeartbeatCallback:(id)arg1 ;
-(void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3 ;
-(void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3 ;
-(void)removeAnimationsForTarget:(id)arg1 ;
-(void)startAnimation:(id)arg1 ;
-(BOOL)_isRunningAnimation:(id)arg1 ;
@end

