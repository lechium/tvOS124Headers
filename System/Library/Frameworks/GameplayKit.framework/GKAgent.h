/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKComponent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GKAgentDelegate;
@class GKBehavior;

@interface GKAgent : GKComponent <NSSecureCoding> {

	GKSimpleVehicle* _vehicle;
	id<GKAgentDelegate> _delegate;
	GKBehavior* _behavior;

}

@property (assign,nonatomic,__weak) id<GKAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKBehavior * behavior;                            //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) float mass; 
@property (assign,nonatomic) float radius; 
@property (assign,nonatomic) float speed; 
@property (assign,nonatomic) float maxAcceleration; 
@property (assign,nonatomic) float maxSpeed; 
+(BOOL)supportsSecureCoding;
-(float)maxSpeed;
-(void)setMaxSpeed:(float)arg1 ;
-(GKSimpleVehicle*)vehicle;
-(void)setMaxAcceleration:(float)arg1 ;
-(float)maxAcceleration;
-(1)position3;
-(1)velocity3;
-(3)steerForSeek:;
-(3)steerForFlee:;
-(3)steerToAvoidObstacles:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2 ;
-(3)steerToAvoidAgents:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2 ;
-(3)steerForSeparation:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(3)steerForAlignment:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(3)steerForCohesion:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(2)steerForTargetSpeed:(float)arg1 ;
-(2)steerForWander:(double)arg1 speed:(float)arg2 ;
-(3)steerForIntercept:(id)arg1 maxPredictionTime:(double)arg2 ;
-(3)steerToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(BOOL)arg3 ;
-(3)steerToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GKAgentDelegate>)arg1 ;
-(id<GKAgentDelegate>)delegate;
-(float)mass;
-(void)setMass:(float)arg1 ;
-(void)setSpeed:(float)arg1 ;
-(float)radius;
-(float)speed;
-(void)setRadius:(float)arg1 ;
-(GKBehavior *)behavior;
-(void)setBehavior:(GKBehavior *)arg1 ;
@end

