/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPInterAssetAnalyzer : NSObject
+(CGSize)thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2 ;
+(BOOL)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2 ;
-(int)generateFeatureLastFrame:(id)arg1 feature:(id*)arg2 ;
-(CVBufferRef)getThumbnailForAsset:(id)arg1 withResouces:(id)arg2 ;
-(int)distanceFromFeatureArray:(id)arg1 toFeatureArray:(id)arg2 distance:(float*)arg3 ;
-(int)generateFeatureForAsset:(id)arg1 withResources:(id)arg2 lastFrame:(BOOL)arg3 feature:(id*)arg4 ;
-(int)distanceFromAsset:(id)arg1 toAsset:(id)arg2 distance:(float*)arg3 ;
-(id)init;
@end
