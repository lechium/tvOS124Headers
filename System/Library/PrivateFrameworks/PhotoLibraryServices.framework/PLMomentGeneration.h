/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLMomentGenerationDataManagement;
@class NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSObject, PLMomentAnalyzer, NSSet;

@interface PLMomentGeneration : NSObject {

	BOOL _isGenerationPassInProgress;
	unsigned long long _inProgressCount;
	NSMutableOrderedSet* _pendingInsertsAndUpdates;
	NSMutableDictionary* _pendingDeletes;
	NSMutableArray* _pendingCompletionBlocks;
	NSObject*<OS_dispatch_queue> _incrementalGenerationStateQueue;
	PLMomentAnalyzer* _pairedAnalyzer;
	PLMomentAnalyzer* _analyzer;
	BOOL _isInStressTestMode;
	NSSet* _clusteringDeletedClusters;
	id<PLMomentGenerationDataManagement> _momentGenerationDataManager;

}

@property (nonatomic,retain) NSSet * clusteringDeletedClusters;                                               //@synthesize clusteringDeletedClusters=_clusteringDeletedClusters - In the implementation block
@property (nonatomic,readonly) id<PLMomentGenerationDataManagement> momentGenerationDataManager;              //@synthesize momentGenerationDataManager=_momentGenerationDataManager - In the implementation block
@property (assign,nonatomic) PLMomentAnalyzer * analyzer; 
+(id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2 ;
+(id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4 ;
+(BOOL)_rebuildAllMomentListsWithDataManager:(id)arg1 error:(id*)arg2 ;
+(void)_updateMoment:(id)arg1 fromCluster:(id)arg2 inManager:(id)arg3 ;
+(id)generateMergeCustomMomentUUID;
+(id)generateSplitCustomMomentUUID;
-(PLMomentAnalyzer *)analyzer;
-(void)saveChangesForAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 ;
-(void)generateWithIncrementalDataCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)rebuildAllMomentsWithManager:(id)arg1 error:(id*)arg2 ;
-(id)initWithMomentGenerationDataManager:(id)arg1 ;
-(void)setAnalyzer:(PLMomentAnalyzer *)arg1 ;
-(void)generateWithAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<PLMomentGenerationDataManagement>)momentGenerationDataManager;
-(void)_updateIncrementalMomentGeneration;
-(void)_runIncrementalGenerationPassWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_appendAssetsToReplayLog:(id)arg1 forBatchUpdate:(BOOL)arg2 ;
-(id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1 ;
-(BOOL)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2 ;
-(void)_processMomentsWithAssets:(id)arg1 hiddenAssets:(id)arg2 inManager:(id)arg3 affectedMoments:(id)arg4 updatedMoments:(id*)arg5 ;
-(id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2 ;
-(id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4 ;
-(void)_refreshObjects:(id)arg1 withDataManager:(id)arg2 ;
-(BOOL)_deleteAllMomentDataInManager:(id)arg1 incremental:(BOOL)arg2 error:(id*)arg3 ;
-(void)_clearReplayLog;
-(BOOL)_rebuildAllMomentsInManager:(id)arg1 shouldAnalyze:(BOOL)arg2 error:(id*)arg3 ;
-(id)_momentClustersForAssets:(id)arg1 inManager:(id)arg2 updateDeletedClusters:(BOOL)arg3 ;
-(id)_insertMomentsForMomentClusters:(id)arg1 inManager:(id)arg2 ;
-(id)_insertAndUpdateRemainingMomentsInManager:(id)arg1 withAffectedMoments:(id)arg2 ;
-(void)setClusteringDeletedClusters:(NSSet *)arg1 ;
-(void)_cleanUpMoment:(id)arg1 ;
-(NSSet *)clusteringDeletedClusters;
-(id)_logEntryForAssets:(id)arg1 isBatchUpdate:(BOOL)arg2 ;
-(id)_detailsForAsset:(id)arg1 simpleOnly:(BOOL)arg2 ;
-(BOOL)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3 ;
-(id)_nameForMomentGenerationType:(short)arg1 ;
-(id)_detailsForMoment:(id)arg1 ;
-(void)rebuildAllMomentsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)rebuildAllMomentLists:(/*^block*/id)arg1 ;
-(id)momentGenerationStatus;
-(id)allAssetMetadataWriteToFile:(id)arg1 ;
-(id)allMomentsMetadataWriteToFile:(id)arg1 ;
-(void)clearUserInfluencedMoments;
-(void)dealloc;
@end
