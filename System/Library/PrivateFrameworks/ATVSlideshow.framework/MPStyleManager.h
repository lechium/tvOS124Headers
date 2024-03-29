/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSMutableDictionary, NSArray, NSString;

@interface MPStyleManager : NSObject {

	NSMutableDictionary* mStyles;
	NSArray* mPaths;
	NSString* mCurrentLocale;

}
+(void)releaseSharedManager;
+(void)loadStyleManagerWithPaths:(id)arg1 ;
+(id)sharedManager;
-(id)initWithPaths:(id)arg1 ;
-(id)descriptionForStyleID:(id)arg1 ;
-(BOOL)isDynamicForStyleID:(id)arg1 ;
-(BOOL)canCancelAuthoringForStyleID:(id)arg1 ;
-(id)songPathsForStyleID:(id)arg1 ;
-(long long)indexOfMainLayerForStyleID:(id)arg1 ;
-(BOOL)hasImagesForLayerID:(id)arg1 forStyleID:(id)arg2 ;
-(id)titleEffectLayoutForStyleID:(id)arg1 ;
-(long long)indexOfTitleEffectLayerForStyleID:(id)arg1 ;
-(id)layerIDForLayerIndex:(long long)arg1 ofStyle:(id)arg2 ;
-(CGColorRef)backgroundCGColorForStyleID:(id)arg1 ;
-(id)effectIDsForStyleID:(id)arg1 ;
-(id)transitionsForStyleID:(id)arg1 ;
-(id)framesForStyleID:(id)arg1 ;
-(id)versionOfStyleID:(id)arg1 ;
-(BOOL)canUseClusteringForStyleID:(id)arg1 ;
-(id)titleEffectLayoutsForStyleID:(id)arg1 ;
-(double)allowUserDefinedDurationForStyleID:(id)arg1 ;
-(CGSize)defaultSizeForZIndex:(long long)arg1 ofStyle:(id)arg2 ;
-(double)defaultFilterLikelihoodForZIndex:(long long)arg1 ofStyle:(id)arg2 ;
-(BOOL)needsFaceDetectionForStyleID:(id)arg1 ;
-(long long)layerIndexForLayerID:(id)arg1 ofStyle:(id)arg2 ;
-(unsigned long long)reorderModeForStyleID:(id)arg1 ;
-(id)interstitialEffectLayoutsForStyleID:(id)arg1 ;
-(unsigned long long)subtitleOrderForStyleID:(id)arg1 ;
-(id)interstitialEffectLayoutForStyleID:(id)arg1 ;
-(unsigned long long)mediaPresentationOrderForStyleID:(id)arg1 ;
-(double)defaultAutoKenBurnsLikelihoodForZIndex:(long long)arg1 ofStyle:(id)arg2 ;
-(long long)defaultAutoKenBurnsLevelForZIndex:(long long)arg1 ofStyle:(id)arg2 ;
-(double)basePeriodForLayerIndex:(long long)arg1 ofStyle:(id)arg2 ;
-(double)defaultEffectDurationForLayer:(long long)arg1 ofStyle:(id)arg2 ;
-(double)defaultTransitionDurationForLayer:(long long)arg1 ofStyle:(id)arg2 withAspectRatio:(double)arg3 ;
-(id)effectPresetsForLayerIndex:(long long)arg1 ofStyleID:(id)arg2 ;
-(id)defaultColorSchemeForStyleID:(id)arg1 ;
-(unsigned long long)regionOfInterestPickModeForStyleID:(id)arg1 ;
-(double)defaultAutoKenBurnsLikelihoodForEffect:(id)arg1 withPreset:(id)arg2 ofStyle:(id)arg3 ;
-(long long)defaultAutoKenBurnsLevelForEffect:(id)arg1 withPreset:(id)arg2 ofStyle:(id)arg3 ;
-(long long)antialiasLevelForStyleID:(id)arg1 ;
-(BOOL)needsToBeLiveForStyleID:(id)arg1 ;
-(long long)dynamicBatchSizeForStyleID:(id)arg1 ;
-(id)backgroundColorLayersForStyleID:(id)arg1 ;
-(BOOL)needsStyleUpdateOnSlideChangeForStyleID:(id)arg1 ;
-(BOOL)needsTimingUpdateOnSlideChangeForStyleID:(id)arg1 ;
-(id)localizedNameForStyleID:(id)arg1 ;
-(void)reloadBundles;
-(id)effectPresetIDsForLayerIndex:(long long)arg1 ofStyleID:(id)arg2 ;
-(double)minimumEffectDurationForStyleID:(id)arg1 ;
-(id)allStyleIDs;
-(double)delayFaceDetectionForStyleID:(id)arg1 ;
-(id)localizedNameForStyleID:(id)arg1 withLanguage:(id)arg2 ;
-(id)thumbnailPathForStyleID:(id)arg1 ;
-(id)thumbnailPathForStyleID:(id)arg1 scaleFactor:(double)arg2 ;
-(id)previewPathForStyleID:(id)arg1 ;
-(id)resourcePathForStyleID:(id)arg1 ;
-(id)effectPresetIDsForStyleID:(id)arg1 ;
-(double)shortestEffectDurationForStyleID:(id)arg1 ;
-(double)shortestDurationForEffectID:(id)arg1 forStyleID:(id)arg2 ;
-(double)minimumDurationForEffectID:(id)arg1 forStyleID:(id)arg2 ;
-(BOOL)machineMeetsRequirementsForStyleID:(id)arg1 ;
-(BOOL)supportsRandomTransitionForStyleID:(id)arg1 ;
-(BOOL)authorOnAspectRatioChangeForStyleID:(id)arg1 ;
-(long long)numberOfSlidesToPreloadForStyleID:(id)arg1 ;
-(BOOL)needsReauthorOnAspectRatioChange:(id)arg1 ;
-(double)posterTimeForStyleID:(id)arg1 ;
-(id)demoDocumentWithImages:(id)arg1 properties:(id)arg2 count:(long long)arg3 options:(id)arg4 ;
-(double)displayDurationFactorForStyleID:(id)arg1 ;
-(double)displayDurationFactorForEffectID:(id)arg1 inStyleID:(id)arg2 ;
-(id)_containerDescriptionForLayerAtIndex:(long long)arg1 ofStyle:(id)arg2 ;
-(long long)kenBurnsOffsetTypeForStyleID:(id)arg1 ;
-(BOOL)easeKenBurnsForStyleID:(id)arg1 ;
-(id)defaultPositionForZIndex:(long long)arg1 ofStyle:(id)arg2 ;
-(double)navigationIncrementForStyleID:(id)arg1 ;
-(void)dealloc;
@end

