/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class CALayer, NSString, NSArray;

@interface CAMatchMoveAnimation : CAAnimation

@property (__weak) CALayer * sourceLayer; 
@property (assign) unsigned long long sourceLayerRenderId; 
@property (assign) unsigned sourceContextId; 
@property (copy) NSString * keyPath; 
@property (assign) BOOL targetsSuperlayer; 
@property (copy) NSArray * sourcePoints; 
@property (assign) BOOL appliesX; 
@property (assign) BOOL appliesY; 
@property (assign) BOOL appliesScale; 
@property (assign) BOOL appliesRotation; 
@property (getter=isAdditive) BOOL additive; 
+(id)defaultValueForKey:(id)arg1 ;
-(unsigned long long)sourceLayerRenderId;
-(void)setSourceLayerRenderId:(unsigned long long)arg1 ;
-(unsigned)sourceContextId;
-(void)setSourceContextId:(unsigned)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(BOOL)targetsSuperlayer;
-(void)setTargetsSuperlayer:(BOOL)arg1 ;
-(BOOL)appliesX;
-(void)setAppliesX:(BOOL)arg1 ;
-(BOOL)appliesY;
-(void)setAppliesY:(BOOL)arg1 ;
-(BOOL)appliesScale;
-(void)setAppliesScale:(BOOL)arg1 ;
-(BOOL)appliesRotation;
-(void)setAppliesRotation:(BOOL)arg1 ;
-(NSArray *)sourcePoints;
-(BOOL)isAdditive;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(CALayer *)sourceLayer;
-(void)setSourcePoints:(NSArray *)arg1 ;
@end

