/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNDistanceConstraint : SCNConstraint {

	SCNNode* _target;
	float _minimumDistance;
	float _maximumDistance;
	BOOL _keepTargetDirection;
	SCNVector3 _targetDirection;
	float _maximumDirectionAngle;

}

@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) double minimumDistance; 
@property (assign,nonatomic) double maximumDistance; 
+(id)distanceConstraint;
+(id)distanceConstraintWithTarget:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(double)maximumDistance;
-(void)setMaximumDistance:(double)arg1 ;
-(void)_customEncodingOfSCNDistanceConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNDistanceConstraint:(id)arg1 ;
-(BOOL)keepTargetDirection;
-(void)setKeepTargetDirection:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNNode *)target;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCNVector3)targetDirection;
-(void)setTargetDirection:(SCNVector3)arg1 ;
-(void)setMinimumDistance:(double)arg1 ;
-(double)minimumDistance;
@end

