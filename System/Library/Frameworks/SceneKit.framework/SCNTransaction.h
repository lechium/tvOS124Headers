/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNTransaction : NSObject
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 applyBlock:(/*^block*/id)arg3 ;
+(BOOL)immediateMode;
+(void)setImmediateMode:(BOOL)arg1 ;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)commitImmediate;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 key:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)setImmediateModeRestrictedContext:(C3DSceneRef)arg1 ;
+(C3DSceneRef)immediateModeRestrictedContext;
+(void)checkUncommittedTransactions;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(id)valueForKey:(id)arg1 ;
+(double)animationDuration;
+(id)animationTimingFunction;
+(void)setAnimationDuration:(double)arg1 ;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(void)begin;
+(void)commit;
+(unsigned)currentState;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)lock;
+(void)unlock;
+(void)flush;
+(void)setDisableActions:(BOOL)arg1 ;
+(/*^block*/id)completionBlock;
+(BOOL)disableActions;
-(double)animationDuration;
-(id)animationTimingFunction;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setAnimationTimingFunction:(id)arg1 ;
-(void)begin;
-(void)commit;
-(void)lock;
-(void)unlock;
-(void)flush;
-(void)setDisableActions:(BOOL)arg1 ;
-(BOOL)disableActions;
@end

