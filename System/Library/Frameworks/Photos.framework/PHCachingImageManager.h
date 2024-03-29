/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImageManager.h>

@interface PHCachingImageManager : PHImageManager {

	BOOL _allowsCachingHighQualityImages;

}

@property (assign,nonatomic) BOOL allowsCachingHighQualityImages;              //@synthesize allowsCachingHighQualityImages=_allowsCachingHighQualityImages - In the implementation block
-(id)_highPriorityRequestWaitGroup;
-(id)_modernCachingImageManager;
-(BOOL)canAvoidTouchingAssetsWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 options:(id)arg3 outBestFormat:(int*)arg4 outBestFormatIsTable:(BOOL*)arg5 outDegradedFormat:(int*)arg6 outDegradedFormatIsTable:(BOOL*)arg7 ;
-(id)_fireCloudDownloadOfImageForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setAllowsCachingHighQualityImages:(BOOL)arg1 ;
-(BOOL)allowsCachingHighQualityImages;
-(void)startCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAllAssets;
-(id)init;
-(id)description;
@end

