/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class NSOperationQueue, NSLock, NSMutableArray, MiroPosterGenerationStats, MiroPosterEffectPool;

@interface MiroMemoryPosterGenerator : NSObject {

	NSOperationQueue* _posterSchedulingManager;
	NSLock* _statsLock;
	NSMutableArray* _stats;
	MiroPosterGenerationStats* _runningAverage;
	NSMutableArray* _requests;
	NSLock* _requestsLock;
	MiroPosterEffectPool* _posterEffectPool;

}
+(id)localImageRequestOptions;
+(CGSize)defaultPosterSize;
+(id)networkImageRequestOptions;
+(id)stringForState:(int)arg1 ;
-(unsigned long long)requestsCount;
-(void)cancelPendingRequests;
-(void)memoryWarningNotification:(id)arg1 ;
-(void)didEnterBackgroundNotification:(id)arg1 ;
-(void)willEnterForegroundNotification:(id)arg1 ;
-(void)willTerminateNotification:(id)arg1 ;
-(id)_newprepInputImageForPoster:(id)arg1 keyAsset:(id)arg2 ;
-(id)_prepInputImageForPoster:(id)arg1 keyAsset:(id)arg2 ;
-(BOOL)_addNewRequestToQueue:(id)arg1 ;
-(void)_removeRequestFromQueue:(id)arg1 ;
-(void)_scheduleOverrideKeyAssetImageRender:(id)arg1 schedulingPriority:(long long)arg2 posterGenerationCompletionHandler:(/*^block*/id)arg3 ;
-(void)_scheduleLocalImageRequestAndRender:(id)arg1 schedulingPriority:(long long)arg2 posterGenerationCompletionHandler:(/*^block*/id)arg3 ;
-(void)_handlePosterGenerationWithImage:(id)arg1 posterRequest:(id)arg2 miroSchedulingRequest:(id)arg3 miroSchedulingCompletionHandler:(/*^block*/id)arg4 posterGenerationCompletionHandler:(/*^block*/id)arg5 posterGenerationInfo:(id)arg6 posterStats:(id)arg7 startPosterRequestTime:(unsigned long long)arg8 startGetQualityImageTime:(unsigned long long)arg9 ;
-(id)_titleEffectForPosterRequest:(id)arg1 stats:(id)arg2 ;
-(id)_encodePosterImageToJPEG:(id)arg1 timeToEncode:(double*)arg2 ;
-(void)_addCompletedStats:(id)arg1 ;
-(id)_titleEffectForTitleDefinition:(id)arg1 ;
-(id)_resizedAndNormalizedImage:(id)arg1 ;
-(id)_croppedSourceImage:(id)arg1 forKeyAsset:(id)arg2 ;
-(id)_scaleAndCropSourceImageForPosterTitle:(id)arg1 ;
-(void)_clearCaches;
-(void)suspendPosterGeneration;
-(void)resumePosterGeneration;
-(id)prepPosterInputForKeyAsset:(id)arg1 ;
-(void)generatePosterForMemory:(id)arg1 options:(id)arg2 priority:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_scheduleNetworkImageDownloadAndRender:(id)arg1 schedulingPriority:(long long)arg2 posterGenerationCompletionHandler:(/*^block*/id)arg3 localSchedulingRequest:(id)arg4 posterStats:(id)arg5 startPosterRequestTime:(double)arg6 ;
-(void)posterImageForTitle:(id)arg1 subtitle:(id)arg2 effectID:(id)arg3 parametersDictionary:(id)arg4 moodID:(id)arg5 inputImage:(id)arg6 outputSize:(CGSize)arg7 withCompletionHandler:(/*^block*/id)arg8 ;
-(void)preloadPooledEffects:(id)arg1 ;
-(id)encodePosterImageToJPEG:(id)arg1 ;
-(void)cleanCaches;
-(void)cancelMemoryPosterRequest:(id)arg1 forAllRequests:(BOOL)arg2 ;
-(void)printStatsAndClear:(BOOL)arg1 ;
-(void)suspendBackgroundTasksNotification:(id)arg1 ;
-(void)resumeBackgroundTasksNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

