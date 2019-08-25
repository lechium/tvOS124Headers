/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>
#import <libobjc.A.dylib/MZEffectTiming.h>

@class NSMutableArray, NSMutableDictionary, MRContext;

@interface MREffectFloating : MREffect <MZEffectTiming> {

	long long mTotalImages;
	NSMutableArray* mFrontSlideOrder;
	NSMutableArray* mMiddleSlideOrder;
	NSMutableArray* mBackSlideOrder;
	BOOL mNeedsUpdate;
	BOOL mNeedsMoreSlides;
	long long mIterationOffset;
	NSMutableDictionary* mSlideTimes;
	float* mVBOData;
	unsigned mVBO;
	MRContext* mHackContext;

}

@property (assign,nonatomic) long long totalImages; 
@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
+(BOOL)hasCustomTiming;
+(BOOL)supportsDynamicExpansionForEffectID:(id)arg1 ;
+(unsigned long long)typicalSlideBatchSizeForEffectID:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(void)appendSlideInformation:(id)arg1 andTextInformation:(id)arg2 ;
-(void)setMultiImageSlideRange:(NSRange)arg1 ;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)supportsDynamicExpansion;
-(long long)typicalSlideBatchSize;
-(unsigned long long)firstSlideIndexStillNeededAtTime:(double)arg1 ;
-(BOOL)needsMoreSlidesAtTime:(double)arg1 ;
-(void)_applyTimingToSlideProviders;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1 ;
-(void)_applySizeScript;
-(void)_orderImages;
-(double)_mainDurationForImageCount:(long long)arg1 ;
-(void)setTotalImages:(long long)arg1 ;
-(double)_rotationForRelative:(double)arg1 directionFactor:(double)arg2 ;
-(double)_zTranslationForRelativeTime:(double)arg1 ;
-(void)_bestTimeInfoFor:(id)arg1 time:(double)arg2 start:(double*)arg3 end:(double*)arg4 ;
-(long long)totalImages;
-(BOOL)isOpaque;
-(void)_cleanup;
@end
