/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDecimalNumber, NSDate, PKCreditAccountBalanceSummary, PKCreditAccountStatement;

@interface PKCreditAccountSummary : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresDebtCollectionNotices;
	BOOL _inGrace;
	BOOL _autoPayEnabled;
	NSDecimalNumber* _creditLimit;
	NSDecimalNumber* _availableCredit;
	NSDecimalNumber* _currentBalance;
	NSDecimalNumber* _rewardsBalance;
	NSDecimalNumber* _remainingStatementBalance;
	NSDecimalNumber* _remainingMinimumPayment;
	NSDate* _paymentDueDate;
	NSDate* _lastPaymentDate;
	long long _cyclesPastDue;
	unsigned long long _balanceStatus;
	PKCreditAccountBalanceSummary* _balanceSummary;
	NSDecimalNumber* _unpostedInterest;
	NSDate* _unpostedInterestTimestamp;
	NSDecimalNumber* _chargeOffPreventionAmount;
	NSDecimalNumber* _pastDueAmount;
	PKCreditAccountStatement* _currentStatement;

}

@property (nonatomic,copy) NSDecimalNumber * creditLimit;                                 //@synthesize creditLimit=_creditLimit - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * availableCredit;                             //@synthesize availableCredit=_availableCredit - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * currentBalance;                              //@synthesize currentBalance=_currentBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsBalance;                              //@synthesize rewardsBalance=_rewardsBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * remainingStatementBalance;                   //@synthesize remainingStatementBalance=_remainingStatementBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * remainingMinimumPayment;                     //@synthesize remainingMinimumPayment=_remainingMinimumPayment - In the implementation block
@property (nonatomic,copy) NSDate * paymentDueDate;                                       //@synthesize paymentDueDate=_paymentDueDate - In the implementation block
@property (nonatomic,copy) NSDate * lastPaymentDate;                                      //@synthesize lastPaymentDate=_lastPaymentDate - In the implementation block
@property (assign,nonatomic) BOOL autoPayEnabled;                                         //@synthesize autoPayEnabled=_autoPayEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long balanceStatus;                            //@synthesize balanceStatus=_balanceStatus - In the implementation block
@property (nonatomic,retain) PKCreditAccountBalanceSummary * balanceSummary;              //@synthesize balanceSummary=_balanceSummary - In the implementation block
@property (assign,nonatomic) long long cyclesPastDue;                                     //@synthesize cyclesPastDue=_cyclesPastDue - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * unpostedInterest;                            //@synthesize unpostedInterest=_unpostedInterest - In the implementation block
@property (nonatomic,copy) NSDate * unpostedInterestTimestamp;                            //@synthesize unpostedInterestTimestamp=_unpostedInterestTimestamp - In the implementation block
@property (assign,nonatomic) BOOL requiresDebtCollectionNotices;                          //@synthesize requiresDebtCollectionNotices=_requiresDebtCollectionNotices - In the implementation block
@property (assign,nonatomic) BOOL inGrace;                                                //@synthesize inGrace=_inGrace - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * chargeOffPreventionAmount;                   //@synthesize chargeOffPreventionAmount=_chargeOffPreventionAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * pastDueAmount;                               //@synthesize pastDueAmount=_pastDueAmount - In the implementation block
@property (nonatomic,retain) PKCreditAccountStatement * currentStatement;                 //@synthesize currentStatement=_currentStatement - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)ingestExtendedAccountDetails:(id)arg1 ;
-(NSDecimalNumber *)creditLimit;
-(void)setCreditLimit:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)availableCredit;
-(void)setAvailableCredit:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)currentBalance;
-(void)setCurrentBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsBalance;
-(void)setRewardsBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)remainingStatementBalance;
-(void)setRemainingStatementBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)remainingMinimumPayment;
-(void)setRemainingMinimumPayment:(NSDecimalNumber *)arg1 ;
-(NSDate *)paymentDueDate;
-(void)setPaymentDueDate:(NSDate *)arg1 ;
-(NSDate *)lastPaymentDate;
-(void)setLastPaymentDate:(NSDate *)arg1 ;
-(long long)cyclesPastDue;
-(void)setCyclesPastDue:(long long)arg1 ;
-(unsigned long long)balanceStatus;
-(void)setBalanceStatus:(unsigned long long)arg1 ;
-(PKCreditAccountBalanceSummary *)balanceSummary;
-(void)setBalanceSummary:(PKCreditAccountBalanceSummary *)arg1 ;
-(BOOL)requiresDebtCollectionNotices;
-(void)setRequiresDebtCollectionNotices:(BOOL)arg1 ;
-(NSDecimalNumber *)unpostedInterest;
-(void)setUnpostedInterest:(NSDecimalNumber *)arg1 ;
-(NSDate *)unpostedInterestTimestamp;
-(void)setUnpostedInterestTimestamp:(NSDate *)arg1 ;
-(BOOL)inGrace;
-(void)setInGrace:(BOOL)arg1 ;
-(NSDecimalNumber *)chargeOffPreventionAmount;
-(void)setChargeOffPreventionAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)pastDueAmount;
-(void)setPastDueAmount:(NSDecimalNumber *)arg1 ;
-(BOOL)autoPayEnabled;
-(void)setAutoPayEnabled:(BOOL)arg1 ;
-(PKCreditAccountStatement *)currentStatement;
-(void)setCurrentStatement:(PKCreditAccountStatement *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

