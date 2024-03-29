/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/PDCloudStoreServiceExportedInterface.h>

@class PKEntitlementWhitelist, PDCloudStoreNotificationCoordinator, NSString;

@interface PDCloudStoreService : PDXPCService <PDCloudStoreServiceExportedInterface> {

	PKEntitlementWhitelist* _whitelist;
	PDCloudStoreNotificationCoordinator* _cloudStoreNotificationCoordinator;

}

@property (nonatomic,retain) PDCloudStoreNotificationCoordinator * cloudStoreNotificationCoordinator;              //@synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)noteAccountDeletedWithHandler:(/*^block*/id)arg1 ;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)uploadTransaction:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PDCloudStoreNotificationCoordinator *)cloudStoreNotificationCoordinator;
-(void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetContainerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupCloudDatabaseForContainerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cloudStoreStatusForContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)noteCloudSyncPassesSwitchChangedWithHandler:(/*^block*/id)arg1 ;
-(void)simulateCloudStorePushWithCompletion:(/*^block*/id)arg1 ;
-(void)resetContainerWithHandler:(/*^block*/id)arg1 ;
-(void)resetContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)setCloudStoreNotificationCoordinator:(PDCloudStoreNotificationCoordinator *)arg1 ;
@end

