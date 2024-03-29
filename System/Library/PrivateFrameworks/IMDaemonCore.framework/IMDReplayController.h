/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMDReplayStorageController, NSDictionary, IMDReplayStorageIterationContext;

@interface IMDReplayController : NSObject {

	IMDReplayStorageController* _storageController;
	IMDReplayStorageController* _suspendedStorageController;
	BOOL _isRecordingReplayDB;
	NSDictionary* _syncTaskByServiceName;
	IMDReplayStorageIterationContext* _heldDeletionContext;
	/*^block*/id _automationCompletionBlock;

}

@property (nonatomic,retain) NSDictionary * syncTaskByServiceName;                                //@synthesize syncTaskByServiceName=_syncTaskByServiceName - In the implementation block
@property (nonatomic,retain) IMDReplayStorageIterationContext * heldDeletionContext;              //@synthesize heldDeletionContext=_heldDeletionContext - In the implementation block
@property (nonatomic,copy) id automationCompletionBlock;                                          //@synthesize automationCompletionBlock=_automationCompletionBlock - In the implementation block
@property (nonatomic,readonly) BOOL isRecordingReplayDB;                                          //@synthesize isRecordingReplayDB=_isRecordingReplayDB - In the implementation block
+(long long)batchSize;
+(id)sharedInstance;
-(void)scheduleSyncTaskForServices:(id)arg1 ;
-(void)replayMessages;
-(void)_fetchNexBatchOfMessagesAndReplay;
-(void)setHeldDeletionContext:(IMDReplayStorageIterationContext *)arg1 ;
-(void)setSyncTaskByServiceName:(NSDictionary *)arg1 ;
-(IMDReplayStorageIterationContext *)heldDeletionContext;
-(id)automationCompletionBlock;
-(void)setAutomationCompletionBlock:(id)arg1 ;
-(void)_processBatch:(id)arg1 ;
-(void)endRecordingReplayDatabase;
-(id)initWithStorageController:(id)arg1 ;
-(BOOL)storeMessage:(id)arg1 type:(unsigned char)arg2 error:(id*)arg3 ;
-(void)deleteReplayDBIfNotUnderFirstUnlock;
-(void)overrideStorageControllerWithDatabaseFromPath:(id)arg1 ;
-(void)restoreDefaultStoreControllerInstance;
-(void)startRecordingReplayDatabase;
-(void)replayMessagesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRecordingReplayDB;
-(NSDictionary *)syncTaskByServiceName;
-(id)init;
-(void)dealloc;
@end

