/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSDate, NSMutableSet, NSMutableDictionary, NSString, CPLPlatformObject;

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject> {

	unsigned long long _currentGeneration;
	NSDate* _transactionStartDate;
	NSMutableSet* _persistedScopedIdentifiers;
	NSMutableDictionary* _pendingTransientStatuses;
	NSMutableSet* _pendingDeletedTransientStatuses;
	NSMutableDictionary* _transientStatuses;

}

@property (nonatomic,readonly) BOOL hasStatusChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(void)resetAllTransientStatuses;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)resetTransientStatusesWithScopeIdentifier:(id)arg1 ;
-(BOOL)notifyStatusForRecordHasChanged:(id)arg1 persist:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)hasStatusChanges;
-(void)_fillStatus:(id)arg1 ;
-(id)_allScopedIdentifierInCollection:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)_removeStatusesInDictionary:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)_removeScopedIdentifiersFromSet:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(id)_statusFromCachesWithRecordScopedIdentifier:(id)arg1 ;
-(id)statusesForRecordsWithScopedIdentifiers:(id)arg1 ;
-(void)_fillStatus:(id)arg1 withClientCacheRecord:(id)arg2 cloudCacheRecord:(id)arg3 isConfirmed:(BOOL)arg4 isInIDMapping:(BOOL)arg5 ;
-(id)statusChanges;
-(id)statusesForRecordsWithIdentifiers:(id)arg1 ;
-(BOOL)acknowledgeChangedStatuses:(id)arg1 error:(id*)arg2 ;
-(id)recordForStatusWithScopedIdentifier:(id)arg1 ;
-(unsigned long long)scopeType;
-(id)status;
@end

