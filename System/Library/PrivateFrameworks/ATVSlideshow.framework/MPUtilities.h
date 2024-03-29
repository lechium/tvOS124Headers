/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@interface MPUtilities : NSObject
+(CGColorRef)CGColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)slideForPath:(id)arg1 inDocument:(id)arg2 ;
+(CGColorRef)CGColorFromString:(id)arg1 ;
+(id)idOfCombinedID:(id)arg1 ;
+(id)presetIDOfCombinedID:(id)arg1 ;
+(id)executeScript:(id)arg1 withHeader:(id)arg2 andAttributes:(id)arg3 ;
+(CGColorRef)blackCGColor;
+(id)stringWithNewUUID;
+(id)stringFromCGColor:(CGColorRef)arg1 ;
+(CGColorSpaceRef)newColorSpaceForDevice;
+(void)collectAllActionableLayers:(id)arg1 inDictionary:(id)arg2 ;
+(id)createPlugInContainer:(id)arg1 forLayer:(id)arg2 key:(id)arg3 inDocument:(id)arg4 ;
+(BOOL)pathIsRelative:(id)arg1 ;
+(id)defaultAttributesForMPFilter:(id)arg1 ;
+(id)createMCAction:(id)arg1 forPlug:(id)arg2 withKey:(id)arg3 ;
+(id)layerForPlug:(id)arg1 inDocument:(id)arg2 ;
+(id)effectForMCContainerEffect:(id)arg1 inDocument:(id)arg2 ;
+(id)effectContainersForTime:(double)arg1 inDocument:(id)arg2 ;
+(id)slideForSlide:(id)arg1 inDocument:(id)arg2 ;
+(id)createPlugInSlide:(id)arg1 forLayer:(id)arg2 inDocument:(id)arg3 ;
+(id)defaultAttributesForMPTransition:(id)arg1 ;
+(double)transformTime:(double)arg1 forAnimationPath:(id)arg2 ;
+(id)attributesFromAnimationPathsInFilter:(id)arg1 atTime:(double)arg2 ;
+(id)animationsPathsFromFilterID:(id)arg1 andPresetID:(id)arg2 ;
+(double)computeScalarValueForAnimationPath:(id)arg1 atTime:(double)arg2 defaultsTo:(double)arg3 context:(id)arg4 ;
+(CGPoint)computePointValueForAnimationPath:(id)arg1 atTime:(double)arg2 defaultsTo:(CGPoint)arg3 ;
+(id)computeVectorValueForAnimationPath:(id)arg1 atTime:(double)arg2 defaultsTo:(id)arg3 ;
+(double)scaledFilterPresetScalarValue:(double)arg1 withKey:(id)arg2 forFilterID:(id)arg3 andPresetID:(id)arg4 ;
+(unsigned long long)timeOffSetFromString:(id)arg1 ;
+(CGPoint)scaledFilterPresetPointValue:(CGPoint)arg1 withKey:(id)arg2 forFilterID:(id)arg3 andPresetID:(id)arg4 ;
+(SCD_Struct_MP3)scaledFilterPresetVectorValue:(SCD_Struct_MP3)arg1 withKey:(id)arg2 forFilterID:(id)arg3 andPresetID:(id)arg4 ;
+(id)createPlugPathToContainer:(id)arg1 inDocument:(id)arg2 ;
+(id)parentsOfObject:(id)arg1 ;
+(id)attributesFormMPFilter:(id)arg1 atTime:(double)arg2 ;
+(void)syncAnimationPaths:(id)arg1 ;
+(id)textForIndex:(long long)arg1 inMCContainerWithObjectID:(id)arg2 inDocument:(id)arg3 ;
+(id)effectForMCContainerWithObjectID:(id)arg1 inDocument:(id)arg2 ;
+(id)textsDisplayedAtTime:(double)arg1 inDocument:(id)arg2 ;
+(id)textForElementID:(id)arg1 withMCContainerEffect:(id)arg2 inDocument:(id)arg3 ;
+(id)slideForElementID:(id)arg1 withMCContainerEffect:(id)arg2 inDocument:(id)arg3 ;
+(id)placesPinLabelForSlideAssetPath:(id)arg1 inDocument:(id)arg2 ;
+(double)aspectRatioOfLayerable:(id)arg1 relativeToAspectRatio:(double)arg2 ;
+(double)displayTimeForText:(id)arg1 ;
+(void)registerUndoForDocument:(id)arg1 toReceiver:(id)arg2 withSelector:(SEL)arg3 object:(id)arg4 ;
+(id)createPlugPathToObject:(id)arg1 inDocument:(id)arg2 ;
@end

