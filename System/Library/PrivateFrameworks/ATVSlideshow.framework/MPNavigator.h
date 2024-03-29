/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MPNavigatorSupportInternal.h>
#import <libobjc.A.dylib/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPAnimationSupport.h>
#import <libobjc.A.dylib/MPNavigatorSupport.h>
#import <libobjc.A.dylib/MPActionSupport.h>
#import <libobjc.A.dylib/MPLayerableSupport.h>
#import <libobjc.A.dylib/MPActionableSupport.h>
#import <libobjc.A.dylib/MPGeometrySupport.h>
#import <libobjc.A.dylib/MPTimingSupport.h>

@class MPNavigatorInternal, NSMutableDictionary, MCPlug, MCContainerNavigator, NSString;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport> {

	MPNavigatorInternal* _internal;
	NSMutableDictionary* _layers;
	NSMutableDictionary* _actions;
	MCPlug* _plug;
	MCContainerNavigator* _navigator;
	id _parent;
	NSMutableDictionary* _animationPaths;

}

@property (nonatomic,copy) NSString * initialLayer; 
-(void)finalize;
-(id)objectID;
-(double)zPosition;
-(void)removeActionForKey:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)parentDocument;
-(id)actionableObjectForID:(id)arg1 ;
-(void)configureActions;
-(id)plugID;
-(void)copyActions:(id)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1 ;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(void)copyStruct:(id)arg1 ;
-(void)setPlug:(id)arg1 ;
-(void)removeAllLayers;
-(id)navigatorKey;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(void)reconnectAll;
-(double)numberOfLoops;
-(void)setNumberOfLoops:(double)arg1 ;
-(id)allSlides:(BOOL)arg1 ;
-(void)removeLayerForKey:(id)arg1 ;
-(id)layerForKey:(id)arg1 ;
-(id)plug;
-(id)allSongs;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(double)timeIn;
-(BOOL)startsPaused;
-(id)layerKeyDictionary;
-(id)layerKey;
-(void)copyLayers:(id)arg1 ;
-(void)setInitialLayer:(NSString *)arg1 ;
-(NSString *)initialLayer;
-(CGSize)size;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)scale;
-(id)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)actions;
-(void)setZPosition:(double)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setContainer:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(void)setScale:(double)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setSize:(CGSize)arg1 ;
-(id)layers;
-(void)setZIndex:(long long)arg1 ;
-(long long)zIndex;
-(void)cleanup;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(id)parent;
-(id)actionForKey:(id)arg1 ;
@end

