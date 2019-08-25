/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRImageProvider;

@interface MREffectHangingPicturesBackgroundStars : MREffect {

	SCD_Struct_MR13* mStars;
	float* mStarsVertices;
	float* mStarsTexCoords;
	float* mStarsAttributes;
	MRImageProvider* mBackgroundImageProvider;
	MRImageProvider* mStarImageProvider;

}
+(void)initialize;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_initStars;
-(void)_cleanup;
@end

