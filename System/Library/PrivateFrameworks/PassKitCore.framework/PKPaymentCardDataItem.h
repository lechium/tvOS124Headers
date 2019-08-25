/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKCurrencyAmount, PKPaymentPass, PKPaymentApplication, CNContact;

@interface PKPaymentCardDataItem : PKPaymentDataItem {

	BOOL _showPeerPaymentBalance;
	PKCurrencyAmount* _peerPaymentBalance;

}

@property (assign,nonatomic) BOOL showPeerPaymentBalance;                              //@synthesize showPeerPaymentBalance=_showPeerPaymentBalance - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalance;                    //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass; 
@property (nonatomic,readonly) PKPaymentApplication * paymentApplication; 
@property (nonatomic,readonly) BOOL requiresBillingAddress; 
@property (nonatomic,readonly) CNContact * billingAddress; 
@property (nonatomic,readonly) BOOL shouldShowCardArt; 
+(long long)dataType;
-(id)errors;
-(PKPaymentPass *)pass;
-(PKCurrencyAmount *)peerPaymentBalance;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setShowPeerPaymentBalance:(BOOL)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(CNContact *)billingAddress;
-(BOOL)requiresBillingAddress;
-(BOOL)shouldShowCardArt;
-(BOOL)showPeerPaymentBalance;
-(long long)status;
@end

