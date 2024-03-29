/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProvider.h>

@protocol OS_dispatch_queue, PKPaymentDataProviderDelegate;
@class NSString, PKOSVersionRequirement, PKPaymentService, PKSecureElement, NSHashTable, NSLock, NSObject;

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider> {

	PKPaymentService* _paymentService;
	PKSecureElement* _secureElement;
	NSHashTable* _delegates;
	NSLock* _delegateLock;
	NSObject*<OS_dispatch_queue> _replyQueue;
	id<PKPaymentDataProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isDeviceInRestrictedMode; 
@property (nonatomic,readonly) NSString * secureElementIdentifier; 
@property (nonatomic,readonly) BOOL secureElementIsProductionSigned; 
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (nonatomic,readonly) BOOL isPaymentHandoffDisabled; 
@property (assign,nonatomic,__weak) id<PKPaymentDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * deviceClass; 
@property (nonatomic,readonly) PKOSVersionRequirement * deviceVersion; 
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)deviceClass;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 ;
-(NSString *)secureElementIdentifier;
-(id)initWithPaymentService:(id)arg1 secureElement:(id)arg2 ;
-(void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)cashbackByPeriodFromPassUniqueIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withMapsIdentifier:(unsigned long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 matchingMapsMerchantIdentifier:(unsigned long long)arg2 orMapsBrandIdentifier:(unsigned long long)arg3 orMerchantCleanName:(id)arg4 withTransactionSource:(unsigned long long)arg5 withBackingData:(unsigned long long)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)transactionsForPaymentPassWithuniqueIdentifier:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)transactionWithServiceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionWithReferenceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mapsMerchantsWithCompletion:(/*^block*/id)arg1 ;
-(id)expressPassesInformationWithCardType:(long long)arg1 ;
-(void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeExpressPassesWithCardType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(unsigned long long)arg2 answer:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)balanceReminderThresholdForBalance:(id)arg1 pass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 ;
-(void)archiveMessageWithIdentifier:(id)arg1 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(id)expressPassesInformation;
-(void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_accessDelegatesWithHandler:(/*^block*/id)arg1 ;
-(void)setPaymentHandoffDisabled:(BOOL)arg1 ;
-(BOOL)isDeviceInRestrictedMode;
-(BOOL)secureElementIsProductionSigned;
-(NSString *)defaultPaymentPassIdentifier;
-(void)setDefaultPaymentPassIdentifier:(NSString *)arg1 ;
-(BOOL)isPaymentHandoffDisabled;
-(long long)apiVersion;
-(void)passUpgradeWithRequest:(id)arg1 pass:(id)arg2 visibleViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)approvedTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)pendingTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionCountByPeriodForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 includePurchaseTotal:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)commutePlanReminderIntervalForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setCommutePlanReminderInterval:(double)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)supportsTransactionsForPass:(id)arg1 ;
-(BOOL)supportsMessagesForPass:(id)arg1 ;
-(BOOL)supportsNotificationsForPass:(id)arg1 ;
-(BOOL)supportsInAppPaymentsForPass:(id)arg1 ;
-(PKOSVersionRequirement *)deviceVersion;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PKPaymentDataProviderDelegate>)arg1 ;
-(id<PKPaymentDataProviderDelegate>)delegate;
@end

