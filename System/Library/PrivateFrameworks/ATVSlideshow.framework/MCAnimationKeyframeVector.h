/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MCAnimationKeyframe.h>

@interface MCAnimationKeyframeVector : MCAnimationKeyframe {

	SCD_Struct_MC23 mVector;

}

@property (assign,nonatomic) SCD_Struct_MC23 vector; 
+(id)keyframeWithVector:(SCD_Struct_MC23)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
+(id)keyframeWithVector:(SCD_Struct_MC23)arg1 atTime:(double)arg2 ;
-(void)setVector:(SCD_Struct_MC23)arg1 ;
-(SCD_Struct_MC23)vector;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

