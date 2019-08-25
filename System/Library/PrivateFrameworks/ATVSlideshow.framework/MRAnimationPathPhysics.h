/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAnimationPathPhysics.h>

@interface MRAnimationPathPhysics : MCAnimationPathPhysics {

	float mBaseValue;
	float mDeltaValue;
	float mVelocity;
	double mTime;

}

@property (assign,nonatomic) float baseValue; 
@property (assign,nonatomic) float velocity; 
-(id)initWithMCAnimationPath:(id)arg1 ;
-(void)setBaseValue:(float)arg1 ;
-(float)computeValueForTime:(double)arg1 withContext:(id)arg2 ;
-(float)baseValue;
-(float)velocity;
-(void)setVelocity:(float)arg1 ;
@end
