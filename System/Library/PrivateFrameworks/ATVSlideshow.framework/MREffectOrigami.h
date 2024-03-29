/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class NSArray, NSMutableDictionary, NSMutableArray, MRImage, MRCAMLBezierData, MROrigamiAnimationPath;

@interface MREffectOrigami : MREffect {

	NSArray* mPatchworkAtBeginning;
	NSArray* mPatchworkAtEnd;
	NSMutableDictionary* mSprites;
	NSMutableArray* mSpriteKeysWatcher;
	NSArray* mAnimationTimeBounds;
	NSMutableArray* mItemInfos;
	double mDurationStretchFactor;
	MRImage* mBackColorImage;
	float mBackColorForImage[3];
	float mDescriptionAspectRatio;
	float mPixelUnit;
	BOOL mIsOrigami2Effect;
	BOOL mIsHorizontal;
	BOOL mIsOriginallyHorizontal;
	MRCAMLBezierData* mBreakCurve;
	MROrigamiAnimationPath* mLittleSwing;
	MROrigamiAnimationPath* mBigSwing;
	MROrigamiAnimationPath* mSideSwing;
	MROrigamiAnimationPath* mThirdsSwingTop;
	MROrigamiAnimationPath* mThirdsSwingBottom;
	SCD_Struct_MR14* mBreakInfos;
	unsigned long long mTotalNumberOfFolds;

}
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
+(BOOL)hasCustomTiming;
+(void)initialize;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(void)_setupSwingTimings;
-(void)_cleanupSwingTimings;
-(BOOL)_checkPanoramaAbsoluteSizeForImage:(id)arg1 inRect:(CGRect*)arg2 ;
-(BOOL)_needsRenderingAtTime:(double)arg1 remainingStillDurationAfter:(double*)arg2 ;
-(void)renderFold4LeftAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderStillAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)_setupBreakInfos:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderFallAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFallBreakAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFall2AtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderBreakAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFlipLeftAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFlipDownAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFoldLeftAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFoldDownAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)render1To3LeftAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)render1To3DownAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFlipDiagonalAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderUnfoldingFlowerAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)_renderFallImage:(id)arg1 atProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 :(CGPoint*)arg7 :(CGPoint)arg8 ;
-(void)_renderFallBreakImage:(id)arg1 atProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 :(CGPoint*)arg7 :(CGPoint)arg8 ;
-(id)_retainedByUserBackColorImageInContext:(id)arg1 ;
-(void)_setTargetSizeOfImageProviders;
-(void)_cleanup;
@end

