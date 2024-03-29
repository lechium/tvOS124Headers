/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKeyboardKeyplaneTransition.h>

@class NSArray, CADisplayLink;

@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition {

	double _widthRatio;
	double _offsetX;
	BOOL _useInteractiveOpacity;
	BOOL _disableMeshOptimization;
	BOOL _opacityAnimationDirectionForward;
	unsigned long long _animationType;
	NSArray* _startGeometries;
	NSArray* _endGeometries;
	NSArray* _commonVisibleKeys;
	CADisplayLink* _opacityAnimationDisplayLink;
	double _opacityAnimationBeginTime;
	double _previousProgress;

}

@property (nonatomic,retain) NSArray * startGeometries;                                //@synthesize startGeometries=_startGeometries - In the implementation block
@property (nonatomic,retain) NSArray * endGeometries;                                  //@synthesize endGeometries=_endGeometries - In the implementation block
@property (nonatomic,retain) NSArray * commonVisibleKeys;                              //@synthesize commonVisibleKeys=_commonVisibleKeys - In the implementation block
@property (nonatomic,retain) CADisplayLink * opacityAnimationDisplayLink;              //@synthesize opacityAnimationDisplayLink=_opacityAnimationDisplayLink - In the implementation block
@property (assign,nonatomic) double opacityAnimationBeginTime;                         //@synthesize opacityAnimationBeginTime=_opacityAnimationBeginTime - In the implementation block
@property (assign,nonatomic) BOOL opacityAnimationDirectionForward;                    //@synthesize opacityAnimationDirectionForward=_opacityAnimationDirectionForward - In the implementation block
@property (assign,nonatomic) double previousProgress;                                  //@synthesize previousProgress=_previousProgress - In the implementation block
@property (assign,nonatomic) BOOL useInteractiveOpacity;                               //@synthesize useInteractiveOpacity=_useInteractiveOpacity - In the implementation block
@property (assign,nonatomic) unsigned long long animationType;                         //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) BOOL disableMeshOptimization;                             //@synthesize disableMeshOptimization=_disableMeshOptimization - In the implementation block
-(void)dealloc;
-(void)removeAllAnimations;
-(void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4 ;
-(void)setDisableMeshOptimization:(BOOL)arg1 ;
-(void)updateWithProgress:(double)arg1 ;
-(void)commitTransitionRebuild;
-(void)setAnimationType:(unsigned long long)arg1 ;
-(void)setStartGeometries:(NSArray *)arg1 ;
-(void)setPreviousProgress:(double)arg1 ;
-(NSArray *)startGeometries;
-(BOOL)disableMeshOptimization;
-(double)previousProgress;
-(void)setEndGeometries:(NSArray *)arg1 ;
-(id)sortedCommonVisibleKeys;
-(void)setCommonVisibleKeys:(NSArray *)arg1 ;
-(void)_updateTransition;
-(BOOL)useInteractiveOpacity;
-(unsigned long long)animationType;
-(id)meshTransformForKeyplane:(id)arg1 toKeyplane:(id)arg2 ;
-(id)_animationsForStart;
-(id)_animationsForEnd;
-(CADisplayLink *)opacityAnimationDisplayLink;
-(void)setOpacityAnimationDisplayLink:(CADisplayLink *)arg1 ;
-(void)setOpacityAnimationDirectionForward:(BOOL)arg1 ;
-(void)setOpacityAnimationBeginTime:(double)arg1 ;
-(void)updateOpacityAnimation:(id)arg1 ;
-(double)opacityAnimationBeginTime;
-(BOOL)opacityAnimationDirectionForward;
-(NSArray *)endGeometries;
-(NSArray *)commonVisibleKeys;
-(id)geometriesForKeyplane:(id)arg1 ;
-(BOOL)_allowFacesToAdjoinToAdjacentFaces;
-(id)symmetricMeshTransformForKeyplane:(id)arg1 ;
-(void)setUseInteractiveOpacity:(BOOL)arg1 ;
@end

