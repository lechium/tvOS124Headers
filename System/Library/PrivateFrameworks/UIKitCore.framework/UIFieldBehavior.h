/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class PKPhysicsField, UIRegion, NSArray;

@interface UIFieldBehavior : UIDynamicBehavior {

	PKPhysicsField* _field;
	SCD_Struct_UI20 _fieldFlags;
	UIRegion* _region;

}

@property (nonatomic,readonly) PKPhysicsField * _field; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,retain) UIRegion * region;                      //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) double strength; 
@property (assign,nonatomic) double falloff; 
@property (assign,nonatomic) double minimumRadius; 
@property (assign,nonatomic) CGVector direction; 
@property (assign,nonatomic) double smoothness; 
@property (assign,nonatomic) double animationSpeed; 
+(BOOL)_isPrimitiveBehavior;
+(id)dragField;
+(id)vortexField;
+(id)radialGravityFieldWithPosition:(CGPoint)arg1 ;
+(id)linearGravityFieldWithVector:(CGVector)arg1 ;
+(id)velocityFieldWithVector:(CGVector)arg1 ;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)springField;
+(id)electricField;
+(id)magneticField;
+(id)fieldWithEvaluationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSArray *)items;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)addItem:(id)arg1 ;
-(CGVector)direction;
-(void)_changedParameter;
-(void)_associate;
-(void)_dissociate;
-(void)removeItem:(id)arg1 ;
-(PKPhysicsField *)_field;
-(id)_initWithField:(id)arg1 ;
-(void)setDirection:(CGVector)arg1 ;
-(void)setSmoothness:(double)arg1 ;
-(void)setAnimationSpeed:(double)arg1 ;
-(void)_addFieldItem:(id)arg1 ;
-(void)setRegion:(UIRegion *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)setFalloff:(double)arg1 ;
-(double)falloff;
-(void)setMinimumRadius:(double)arg1 ;
-(double)minimumRadius;
-(double)smoothness;
-(double)animationSpeed;
-(UIRegion *)region;
@end

