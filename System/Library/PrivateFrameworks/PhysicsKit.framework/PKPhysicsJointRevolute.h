/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointRevolute : PKPhysicsJoint {

	unsigned* _jointDef : 2RevoluteJointDef;
	unsigned* _joint : 2RevoluteJoint;
	CGPoint _anchor;

}

@property (assign,nonatomic) BOOL shouldEnableLimits; 
@property (assign,nonatomic) double lowerAngleLimit; 
@property (assign,nonatomic) double upperAngleLimit; 
@property (assign,nonatomic) double frictionTorque; 
@property (assign,nonatomic) double rotationSpeed; 
@property (readonly) CGPoint anchor;                               //@synthesize anchor=_anchor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
-(BOOL)isEqualToRevoluteJoint:(id)arg1 ;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
-(void)create;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(BOOL)shouldEnableLimits;
-(double)rotationSpeed;
-(void)setRotationSpeed:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(void)setFrictionTorque:(double)arg1 ;
-(double)frictionTorque;
-(CGPoint)anchor;
@end

