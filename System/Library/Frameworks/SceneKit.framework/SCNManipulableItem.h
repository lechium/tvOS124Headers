/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNManipulableItem : NSObject {

	double _screenSize;
	SCNNode* node;
	id component;
	unsigned long long elementIndex;

}

@property (nonatomic,retain) SCNNode * node; 
@property (nonatomic,retain) id component; 
@property (assign,nonatomic) unsigned long long elementIndex; 
@property (assign,nonatomic) SCNMatrix4 transform; 
@property (assign,nonatomic) SCNMatrix4 worldTransform; 
@property (nonatomic,readonly) SCNVector3 elementPosition; 
+(void)removeItemsFromScene:(id)arg1 ;
+(void)addItems:(id)arg1 toScene:(id)arg2 ;
-(id)component;
-(void)setComponent:(id)arg1 ;
-(double)screenSize;
-(id)parentItem;
-(SCNMatrix4)worldTransform;
-(void)setWorldTransform:(SCNMatrix4)arg1 ;
-(void)validateClone;
-(id)cloneForManipulators;
-(unsigned long long)elementIndex;
-(BOOL)isNodeManipulator;
-(SCNVector3)elementPosition;
-(void)setElementIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(SCNVector3)scale;
-(unsigned long long)hash;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(SCNMatrix4)transform;
-(void)setPosition:(SCNVector3)arg1 ;
-(SCNNode *)node;
-(void)setNode:(SCNNode *)arg1 ;
-(void)setScreenSize:(double)arg1 ;
@end

