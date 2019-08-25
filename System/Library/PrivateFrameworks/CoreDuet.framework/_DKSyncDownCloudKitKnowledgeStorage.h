/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKSyncRemoteKnowledgeStorage.h>

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;
@class _DKSyncCloudKitKnowledgeStorage;

@interface _DKSyncDownCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage> {

	_DKSyncCloudKitKnowledgeStorage* _common;
	id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;

}

@property (retain) _DKSyncCloudKitKnowledgeStorage * common;                             //@synthesize common=_common - In the implementation block
@property (retain) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAvailable) BOOL available; 
@property (readonly) BOOL isAvailable; 
+(id)sharedInstance;
-(long long)transportType;
-(void)setFetchDelegate:(id)arg1 ;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)fetchEventsFromPeer:(id)arg1 creationDateBetweenDate:(id)arg2 andDate:(id)arg3 streamNames:(id)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 highPriority:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(void)cancelOutstandingOperations;
-(BOOL)hasAdditionsFlagForPeer:(id)arg1 ;
-(BOOL)hasDeletionsFlagForPeer:(id)arg1 ;
-(void)clearPrewarmedFlag;
-(void)prewarmFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(_DKSyncCloudKitKnowledgeStorage *)common;
-(void)setCommon:(_DKSyncCloudKitKnowledgeStorage *)arg1 ;
-(BOOL)isAvailable;
-(void)setAvailable:(BOOL)arg1 ;
-(id)init;
-(id)name;
-(void)setDelegate:(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)arg1 ;
-(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)delegate;
-(void)start;
@end

