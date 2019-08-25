/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkRegion.h>

@class NSMutableDictionary;

@interface VNFaceLandmarkRegion2D : VNFaceLandmarkRegion {

	NSMutableDictionary* _sizedPointsCache;
	const * _points;

}

@property (assign) const * points;                                 //@synthesize points=_points - In the implementation block
@property (readonly) const CGPoint* normalizedPoints; 
-(const *)points;
-(2)pointAtIndex:(unsigned long long)arg1 ;
-(void)setPoints:(const *)arg1 ;
-(const CGPoint*)normalizedPoints;
-(const CGPoint*)pointsInImageOfSize:(CGSize)arg1 ;
-(id)initWithFaceBoundingBox:(CGRect)arg1 points:(4*)arg2 pointCount:(unsigned long long)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

