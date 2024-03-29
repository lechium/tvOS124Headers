/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject <NSSecureCoding> {

	BOOL _inUse;
	BOOL _implicit;
	unsigned* _baseJoint : 2Joint;
	PKPhysicsBody* _bodyA;
	PKPhysicsBody* _bodyB;

}

@property (assign,nonatomic) unsigned* _joint : 2Joint; 
@property (nonatomic,readonly) unsigned* _jointDef : 2JointDef; 
@property (nonatomic,retain) PKPhysicsBody * bodyA;                          //@synthesize bodyA=_bodyA - In the implementation block
@property (nonatomic,retain) PKPhysicsBody * bodyB;                          //@synthesize bodyB=_bodyB - In the implementation block
@property (nonatomic,readonly) CGVector reactionForce; 
@property (nonatomic,readonly) double reactionTorque; 
+(BOOL)supportsSecureCoding;
-(BOOL)_inUse;
-(void)set_inUse:(BOOL)arg1 ;
-(BOOL)isEqualToJoint:(id)arg1 ;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(void)create;
-(BOOL)_implicit;
-(void)set_implicit:(BOOL)arg1 ;
-(void)setBodyA:(PKPhysicsBody *)arg1 ;
-(void)setBodyB:(PKPhysicsBody *)arg1 ;
-(CGVector)reactionForce;
-(double)reactionTorque;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPhysicsBody *)bodyA;
-(PKPhysicsBody *)bodyB;
@end

