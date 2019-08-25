/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCloudGroupChange, HMDCloudShareGroup, NSMutableSet, NSArray;

@interface HMDCloudShareGroupChange : HMFObject {

	HMDCloudGroupChange* _cloudGroupChange;
	HMDCloudShareGroup* _cloudShareGroup;
	NSMutableSet* _changedObjectIDs;
	NSMutableSet* _changedRecordNames;

}

@property (nonatomic,__weak,readonly) HMDCloudGroupChange * cloudGroupChange;              //@synthesize cloudGroupChange=_cloudGroupChange - In the implementation block
@property (nonatomic,__weak,readonly) HMDCloudShareGroup * cloudShareGroup;                //@synthesize cloudShareGroup=_cloudShareGroup - In the implementation block
@property (nonatomic,retain) NSMutableSet * changedObjectIDs;                              //@synthesize changedObjectIDs=_changedObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * changedRecordNames;                            //@synthesize changedRecordNames=_changedRecordNames - In the implementation block
@property (nonatomic,readonly) NSArray * allTransactionStoreRowIDs; 
@property (nonatomic,readonly) NSArray * processedTransactionStoreRowIDs; 
@property (nonatomic,readonly) BOOL hasValidChanges; 
@property (nonatomic,readonly) NSArray * objectChanges; 
+(id)shortDescription;
-(NSArray *)allTransactionStoreRowIDs;
-(BOOL)hasValidChanges;
-(id)changeWithObjectID:(id)arg1 ;
-(id)cloudRecordWithObjectID:(id)arg1 ;
-(id)changeWithRecordName:(id)arg1 ;
-(id)cloudRecordWithName:(id)arg1 ;
-(BOOL)isRootRecord:(id)arg1 ;
-(void)loadCloudRecordsFromCache:(/*^block*/id)arg1 ;
-(void)loadCloudChangeTreeFromCache:(/*^block*/id)arg1 ;
-(id)rootRecordModelObject;
-(void)addChange:(id)arg1 setAsProcessing:(BOOL)arg2 ;
-(BOOL)isRootRecordRequired;
-(void)addRootRecordChange;
-(void)collectRecordsForBatch;
-(BOOL)isRootRecordName:(id)arg1 ;
-(NSArray *)processedTransactionStoreRowIDs;
-(void)addChangeWithObjectChange:(id)arg1 ;
-(void)addChangeWithRecord:(id)arg1 ;
-(void)addChangeWithDeletedRecordID:(id)arg1 ;
-(void)loadCloudRecordsAndDetermineDeletesFromCache:(/*^block*/id)arg1 ;
-(BOOL)moreChangesToProcess;
-(void)removeChangeWithObjectID:(id)arg1 ;
-(void)fetchBatchToUpload:(/*^block*/id)arg1 ;
-(void)setSaveAsProcessedWithRecord:(id)arg1 ;
-(void)resetRecordWithRecordID:(id)arg1 ;
-(void)setDeleteAsProcessedWithRecordID:(id)arg1 ;
-(void)flushAllChangesToCache;
-(NSArray *)objectChanges;
-(HMDCloudShareGroup *)cloudShareGroup;
-(NSMutableSet *)changedObjectIDs;
-(HMDCloudGroupChange *)cloudGroupChange;
-(NSMutableSet *)changedRecordNames;
-(void)_addChange:(id)arg1 ;
-(id)initWithShareGroup:(id)arg1 groupChange:(id)arg2 ;
-(void)setChangedObjectIDs:(NSMutableSet *)arg1 ;
-(void)setChangedRecordNames:(NSMutableSet *)arg1 ;
-(id)init;
-(id)description;
-(id)shortDescription;
@end

