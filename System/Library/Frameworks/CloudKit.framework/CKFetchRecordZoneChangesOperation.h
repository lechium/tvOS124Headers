/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation {

	BOOL _fetchAllChanges;
	BOOL _shouldFetchAssetContents;
	BOOL _shouldReportAllPerItemFailures;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _perRecordChangeCompletionBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _fetchRecordZoneChangesCompletionBlock;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	NSMutableDictionary* _statusByZoneID;
	NSMutableSet* _zoneIDsWithPendingArchivedRecords;
	NSMutableDictionary* _perItemErrors;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,copy) NSDictionary * optionsByRecordZoneID; 
@property (nonatomic,retain) NSMutableDictionary * statusByZoneID;                               //@synthesize statusByZoneID=_statusByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableSet * zoneIDsWithPendingArchivedRecords;                   //@synthesize zoneIDsWithPendingArchivedRecords=_zoneIDsWithPendingArchivedRecords - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                      //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrors;                                //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,copy) id perRecordChangeCompletionBlock;                                    //@synthesize perRecordChangeCompletionBlock=_perRecordChangeCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAllPerItemFailures;                                //@synthesize shouldReportAllPerItemFailures=_shouldReportAllPerItemFailures - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                                              //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * configurationsByRecordZoneID;                          //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                               //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                                //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                                       //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                                //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                                    //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordZoneChangesCompletionBlock;                             //@synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)perItemErrors;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)statusByZoneID;
-(void)setStatusByZoneID:(NSMutableDictionary *)arg1 ;
-(long long)changeTypesFromSetCallbacks;
-(id)recordWithIDWasDeletedBlock;
-(NSMutableSet *)zoneIDsWithPendingArchivedRecords;
-(id)perRecordChangeCompletionBlock;
-(id)partialFailureForItemsInZone:(id)arg1 ;
-(void)setPerRecordChangeCompletionBlock:(id)arg1 ;
-(id)recordZoneChangesStatusByZoneID;
-(void)setZoneIDsWithPendingArchivedRecords:(NSMutableSet *)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2 ;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(NSDictionary *)optionsByRecordZoneID;
-(id)recordZoneChangeTokensUpdatedBlock;
-(id)recordZoneFetchCompletionBlock;
-(id)fetchRecordZoneChangesCompletionBlock;
-(id)recordZoneIDsWithPendingArchivedRecords;
-(void)setOptionsByRecordZoneID:(NSDictionary *)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(NSDictionary *)configurationsByRecordZoneID;
-(BOOL)shouldFetchAssetContents;
-(BOOL)fetchAllChanges;
-(BOOL)shouldReportAllPerItemFailures;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(void)setShouldReportAllPerItemFailures:(BOOL)arg1 ;
-(id)recordChangedBlock;
-(id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setFetchRecordZoneChangesCompletionBlock:(id)arg1 ;
-(id)init;
@end

