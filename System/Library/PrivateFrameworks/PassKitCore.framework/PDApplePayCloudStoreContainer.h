/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PDCloudStoreContainer.h>
#import <libobjc.A.dylib/PDAccountManagerObserver.h>

@class NSMutableSet, PKPaymentTransactionProcessor, PKPeerPaymentAccount, PDPaymentWebServiceCoordinator, PDAccountManager, NSString;

@interface PDApplePayCloudStoreContainer : PDCloudStoreContainer <PDAccountManagerObserver> {

	os_unfair_lock_s _fetchLock;
	BOOL _proactiveFetchInProgress;
	NSMutableSet* _fetchingTransactionsForUniqueIDs;
	PKPaymentTransactionProcessor* _transactionProcessor;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PDPaymentWebServiceCoordinator* _paymentWebServiceCoordinator;
	PDAccountManager* _accountManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)invalidateServerChangeTokens;
-(void)_handlePeerPaymentAccountChanged:(id)arg1 ;
-(void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 ;
-(id)_strippedRecordName:(id)arg1 ;
-(id)allRecordNamesAssociatedWithRecordName:(id)arg1 inZone:(id)arg2 ;
-(id)_cloudStoreSpecificKeysForItem:(id)arg1 paymentPass:(id)arg2 ;
-(void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)createZones:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_canSyncTransactionToCloudKit:(id)arg1 ;
-(id)cloudStoreSpecificKeysForItem:(id)arg1 ;
-(BOOL)_isTransactionItemFromRecordType:(id)arg1 ;
-(id)_insertOrUpdatePaymentTransaction:(id)arg1 withOriginDeviceID:(id)arg2 forPassUniqueIdentifier:(id)arg3 paymentApplication:(id)arg4 withInsertionMode:(unsigned long long)arg5 performTruncation:(BOOL)arg6 ;
-(BOOL)_isAccountEventFromRecordType:(id)arg1 ;
-(id)_serviceIdentfierToRecordDictionaryFromArray:(id)arg1 ;
-(id)_parseTransactionRecords:(id)arg1 counterpartRecords:(id)arg2 shouldUpdateLocalDatabase:(BOOL)arg3 userInfo:(id)arg4 updateReasons:(unsigned long long)arg5 ;
-(void)_fetchMissingRecordsFromModifiedRecords:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 userInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_accountEventRecordsFromArray:(id)arg1 ;
-(void)_fetchAndParseAccountEventRecordsForRecords:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 shouldUpdateLocalDatabase:(BOOL)arg4 userInfo:(id)arg5 updateReasons:(unsigned long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)saveCachedContainerValues;
-(void)readCachedContainerValues;
-(void)createZones:(id)arg1 operationGroupNameSuffix:(id)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldFetchTransactionsForPassUniqueIdentifier:(id)arg1 ;
-(void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchTransactionsFailedForPassUniqueIdentifier:(id)arg1 ;
-(void)_resetFetchTransactionsForPassUniqueIdentifier:(id)arg1 ;
-(void)uploadTransaction:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 shouldUpdateLocalDatabase:(BOOL)arg5 userInfo:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)_recordsFromAccountEvent:(id)arg1 ;
-(id)_serviceIdentifierForRecordType:(id)arg1 recordID:(id)arg2 ;
-(BOOL)canSyncTransactionToCloudKitWithBackingData:(BOOL)arg1 passUniqueIdentifier:(id)arg2 serviceIdentifier:(id)arg3 ;
-(BOOL)_canFormTransactionFromCloudStoreRecord:(id)arg1 ;
-(id)_passUniqueIdentifierForCloudStoreRecord:(id)arg1 ;
-(id)_originDeviceIDForCloudStoreRecord:(id)arg1 ;
-(id)_paymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(id)_serviceIdentifierForRecord:(id)arg1 ;
-(id)_transactionFetchRetries;
-(void)_saveTransactionFetchRetries:(id)arg1 ;
-(BOOL)_isAccountEventAssociatedObjectFromRecordType:(id)arg1 ;
-(id)_recordTypeForAssociatedRecordForAccountEvent:(id)arg1 ;
-(void)_parseAccountEventsFromRecords:(id)arg1 shouldUpdateLocalDatabase:(BOOL)arg2 updateReasons:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)accountManager:(id)arg1 didAddAccount:(id)arg2 ;
-(void)accountManager:(id)arg1 didRemoveAccount:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2 paymentWebServiceCoordinator:(id)arg3 accountManager:(id)arg4 ;
-(id)recordTypeForRecordID:(id)arg1 ;
-(BOOL)canInitializeContainer;
-(void)cloudStoreAccountChanged:(id)arg1 ;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestUpdatesForPassUniqueIdentifier:(id)arg1 ;
-(BOOL)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1 ;
-(void)passWithUniqueIdentifierDidDisappear:(id)arg1 ;
-(void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_recordTypesForAccountEvents;
@end

