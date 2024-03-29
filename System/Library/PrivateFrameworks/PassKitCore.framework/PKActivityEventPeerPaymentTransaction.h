/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKActivityEventTransaction.h>

@class PKPaymentTransaction;

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction {

	PKPaymentTransaction* _relatedTopUpFundingSourceWithdrawlTransaction;
	PKPaymentTransaction* _relatedTopUpPeerPaymentAccountDepositTransaction;

}

@property (nonatomic,readonly) PKPaymentTransaction * relatedTopUpFundingSourceWithdrawlTransaction;                 //@synthesize relatedTopUpFundingSourceWithdrawlTransaction=_relatedTopUpFundingSourceWithdrawlTransaction - In the implementation block
@property (nonatomic,readonly) PKPaymentTransaction * relatedTopUpPeerPaymentAccountDepositTransaction;              //@synthesize relatedTopUpPeerPaymentAccountDepositTransaction=_relatedTopUpPeerPaymentAccountDepositTransaction - In the implementation block
-(id)eventType;
-(BOOL)isEqualToActivityEvent:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 relatedTopUpWithdrawlTransaction:(id)arg2 relatedTopUpDepositTransaction:(id)arg3 unread:(BOOL)arg4 ;
-(PKPaymentTransaction *)relatedTopUpFundingSourceWithdrawlTransaction;
-(PKPaymentTransaction *)relatedTopUpPeerPaymentAccountDepositTransaction;
-(unsigned long long)hash;
@end

