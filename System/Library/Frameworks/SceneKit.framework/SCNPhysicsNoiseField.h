/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsField.h>

@interface SCNPhysicsNoiseField : SCNPhysicsField {

	double _smoothness;
	double _animationSpeed;

}

@property (assign,nonatomic) double smoothness; 
@property (assign,nonatomic) double animationSpeed; 
+(BOOL)supportsSecureCoding;
-(c3dPhysicsField*)_createField;
-(BOOL)supportsDirection;
-(BOOL)supportsOffset;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setSmoothness:(double)arg1 ;
-(void)setAnimationSpeed:(double)arg1 ;
-(double)smoothness;
-(double)animationSpeed;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

