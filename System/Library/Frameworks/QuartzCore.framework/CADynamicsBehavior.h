/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABehavior.h>

@class NSArray;

@interface CADynamicsBehavior : CABehavior

@property (copy) NSArray * springs; 
@property (copy) NSArray * forceFields; 
@property (assign) double timeStep; 
@property (assign) double minimumTimeStep; 
@property (assign) double stoppedVelocity; 
@property (assign) double stoppedAngularVelocity; 
@property (assign) double springScale; 
@property (assign) double drag; 
@property (assign) double angularDrag; 
@property (assign) BOOL reactsToCollisions; 
@property (assign) double collisionInterval; 
+(id)defaultValueForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(NSArray *)springs;
-(NSArray *)forceFields;
-(void)setForceFields:(NSArray *)arg1 ;
-(double)minimumTimeStep;
-(void)setMinimumTimeStep:(double)arg1 ;
-(double)stoppedVelocity;
-(void)setStoppedVelocity:(double)arg1 ;
-(double)stoppedAngularVelocity;
-(void)setStoppedAngularVelocity:(double)arg1 ;
-(double)collisionInterval;
-(void)setCollisionInterval:(double)arg1 ;
-(double)springScale;
-(void)setSpringScale:(double)arg1 ;
-(double)drag;
-(void)setDrag:(double)arg1 ;
-(double)angularDrag;
-(void)setAngularDrag:(double)arg1 ;
-(BOOL)reactsToCollisions;
-(void)setTimeStep:(double)arg1 ;
-(double)timeStep;
-(void)setSprings:(NSArray *)arg1 ;
-(void)setReactsToCollisions:(BOOL)arg1 ;
@end

