/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFPhotosFaceUtilities : NSObject
+(BOOL)getCropRectForPortraitImage:(CGRect*)arg1 size:(double)arg2 imgWidth:(double)arg3 imgHeight:(double)arg4 centerX:(double)arg5 centerY:(double)arg6 ;
+(CGSize)faceTileSizeAdjustingForImageAspectRatio:(CGSize)arg1 imgWidth:(double)arg2 imgHeight:(double)arg3 ;
+(id)bestMergeCandidateFaceFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3 ;
+(id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 ;
+(id)sortedViableMergeCandidateFacesFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3 matchScores:(id*)arg4 ;
+(long long)qualityMeasureForFace:(id)arg1 countOfFacesOnAsset:(unsigned long long)arg2 ;
+(id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 candidateFaces:(id)arg4 ;
@end

