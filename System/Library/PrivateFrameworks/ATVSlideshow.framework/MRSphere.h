/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@interface MRSphere : NSObject {

	float* mVertices;
	float* mTextureCoordinates;
	float* mNormals;
	unsigned mLongitudeResolution;
	unsigned mLatitudeResolution;
	float mHalfLongitudeAngle;
	float mHalfLatitudeAngle;
	float mRadius;

}

@property (assign,nonatomic) unsigned longitudeResolution; 
@property (assign,nonatomic) unsigned latitudeResolution; 
@property (assign,nonatomic) float halfLongitudeAngle; 
@property (assign,nonatomic) float halfLatitudeAngle; 
@property (assign,nonatomic) float radius; 
-(void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 ;
-(unsigned)longitudeResolution;
-(void)setLongitudeResolution:(unsigned)arg1 ;
-(unsigned)latitudeResolution;
-(void)setLatitudeResolution:(unsigned)arg1 ;
-(float)halfLongitudeAngle;
-(void)setHalfLongitudeAngle:(float)arg1 ;
-(float)halfLatitudeAngle;
-(void)setHalfLatitudeAngle:(float)arg1 ;
-(id)init;
-(void)dealloc;
-(float)radius;
-(void)setRadius:(float)arg1 ;
@end
