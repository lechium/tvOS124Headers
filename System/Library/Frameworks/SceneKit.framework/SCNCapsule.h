/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNCapsule : SCNGeometry {

	double _capsulecapRadius;
	double _capsuleheight;
	long long _capsuleheightSegmentCount;
	long long _capsuleradialSegmentCount;
	long long _capsulecapSegmentCount;
	long long _capsuleprimitiveType;

}

@property (assign,nonatomic) double capRadius; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) long long radialSegmentCount; 
@property (assign,nonatomic) long long heightSegmentCount; 
@property (assign,nonatomic) long long capSegmentCount; 
+(id)capsuleWithCapRadius:(double)arg1 height:(double)arg2 ;
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
-(id)presentationCapsule;
-(double)capRadius;
-(void)setCapRadius:(double)arg1 ;
-(long long)capSegmentCount;
-(void)setCapSegmentCount:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)height;
@end

