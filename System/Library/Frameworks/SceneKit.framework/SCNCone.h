/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNCone : SCNGeometry {

	double _conetopRadius;
	double _conebottomRadius;
	double _coneheight;
	long long _coneheightSegmentCount;
	long long _coneradialSegmentCount;
	long long _coneprimitiveType;

}

@property (assign,nonatomic) double topRadius; 
@property (assign,nonatomic) double bottomRadius; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) long long radialSegmentCount; 
@property (assign,nonatomic) long long heightSegmentCount; 
+(id)coneWithTopRadius:(double)arg1 bottomRadius:(double)arg2 height:(double)arg3 ;
+(BOOL)supportsSecureCoding;
-(long long)primitiveType;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)heightSegmentCount;
-(void)setHeightSegmentCount:(long long)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)radialSegmentCount;
-(void)setRadialSegmentCount:(long long)arg1 ;
-(id)presentationCone;
-(double)topRadius;
-(double)bottomRadius;
-(void)setTopRadius:(double)arg1 ;
-(void)setBottomRadius:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)height;
@end

