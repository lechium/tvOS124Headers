/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateFormatter, NSDecimalNumber, NSMutableDictionary, PKAccount, NSArray;

@interface PKBillPaymentSuggestedAmountController : NSObject {

	NSDateFormatter* _monthAndDayFormatter;
	NSDateFormatter* _monthFormatter;
	NSDecimalNumber* _currentStatementPaymentsSum;
	NSDecimalNumber* _previousStatementPaymentsSum;
	NSDecimalNumber* _statementPurchasesSum;
	NSMutableDictionary* _merchantCategoryTransactionSums;
	BOOL _currentStatementIsLastMonthsStatement;
	BOOL _isMonthZero;
	BOOL _isMonthOne;
	PKAccount* _account;
	NSArray* _currentStatementSelectedSuggestedAmountEvents;
	NSArray* _approvedTransactionsPurchasesSinceStatement;
	NSArray* _approvedTransactionsBillPaymentSinceStatement;
	NSArray* _approvedTransactionsPurchasesForPreviousStatement;
	NSArray* _approvedTransactionsBillPaymentForPreviousStatement;

}

@property (nonatomic,readonly) PKAccount * account;                                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSArray * currentStatementSelectedSuggestedAmountEvents;                    //@synthesize currentStatementSelectedSuggestedAmountEvents=_currentStatementSelectedSuggestedAmountEvents - In the implementation block
@property (nonatomic,readonly) NSArray * approvedTransactionsPurchasesSinceStatement;                      //@synthesize approvedTransactionsPurchasesSinceStatement=_approvedTransactionsPurchasesSinceStatement - In the implementation block
@property (nonatomic,readonly) NSArray * approvedTransactionsBillPaymentSinceStatement;                    //@synthesize approvedTransactionsBillPaymentSinceStatement=_approvedTransactionsBillPaymentSinceStatement - In the implementation block
@property (nonatomic,readonly) NSArray * approvedTransactionsPurchasesForPreviousStatement;                //@synthesize approvedTransactionsPurchasesForPreviousStatement=_approvedTransactionsPurchasesForPreviousStatement - In the implementation block
@property (nonatomic,readonly) NSArray * approvedTransactionsBillPaymentForPreviousStatement;              //@synthesize approvedTransactionsBillPaymentForPreviousStatement=_approvedTransactionsBillPaymentForPreviousStatement - In the implementation block
+(void)approvedTransactionsPurchasesForPreviousStatementForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)approvedTransactionsPurchasesSinceStatementForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)approvedTransactionsBillPaymentSinceStatementForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)approvedTransactionsBillPaymentForPreviousStatementForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)currentStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_approvedTransactionsSinceStatementForAccount:(id)arg1 transactionType:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(void)_approvedTransactionsForPreviousStatementForAccount:(id)arg1 transactionType:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(void)defaultControllerForAccount:(id)arg1 paymentPass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithAccount:(id)arg1 currentStatementSelectedSuggestedAmountEvents:(id)arg2 approvedTransactionsPurchasesSinceStatement:(id)arg3 approvedTransactionsPurchasesForPreviousStatement:(id)arg4 approvedTransactionsBillPaymentSinceStatement:(id)arg5 approvedTransactionsBillPaymentForPreviousStatement:(id)arg6 ;
-(BOOL)_calculateCurrentStatementIsLastMonthsStatement;
-(void)_populateStringValuesForList:(id)arg1 ;
-(id)_createDefaultAmountSuggestionListFromAccount;
-(void)_generateAmountSuggestionListUsingTransactionHistoryForList:(id)arg1 ;
-(BOOL)_suggestedAmountListIsValidAfterPurgeIfNecessary:(id)arg1 ;
-(void)_zerothOrFirstMonthBillPaymentSuggestionsForList:(id)arg1 ;
-(BOOL)_allMandatoryValuesAreSameAmount;
-(void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)arg1 minMerchantCategory1:(long long*)arg2 minMerchantCategory2:(long long*)arg3 minMerchantCategorySum1:(id*)arg4 minMerchantCategorySum2:(id*)arg5 ;
-(id)_filterSuggestions:(id)arg1 belowThreshold:(id)arg2 ;
-(BOOL)_categoryIsCurrentBalanceType:(unsigned long long)arg1 ;
-(id)_titleForSuggestion:(id)arg1 ;
-(id)_messageForSuggestion:(id)arg1 ;
-(id)_remainingStatementBalanceGapTitleText;
-(id)_remainingStatementBalanceGapDescriptionText;
-(id)_remainingStatementBalanceTitleString;
-(id)_remainingStatementBalanceMessageString;
-(id)generateAmountSuggestionList;
-(BOOL)_categoryIsPaymentPlan:(unsigned long long)arg1 ;
-(NSArray *)currentStatementSelectedSuggestedAmountEvents;
-(NSArray *)approvedTransactionsPurchasesSinceStatement;
-(NSArray *)approvedTransactionsBillPaymentSinceStatement;
-(NSArray *)approvedTransactionsPurchasesForPreviousStatement;
-(NSArray *)approvedTransactionsBillPaymentForPreviousStatement;
-(PKAccount *)account;
@end
