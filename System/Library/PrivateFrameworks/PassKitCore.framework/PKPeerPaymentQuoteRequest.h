/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, PKPeerPaymentRequestToken, PKPeerPaymentQuoteCertificatesResponse;

@interface PKPeerPaymentQuoteRequest : PKPeerPaymentWebServiceRequest <NSSecureCoding> {

	NSString* _orderIdentifier;
	NSDecimalNumber* _amount;
	NSString* _currency;
	unsigned long long _externalFundingSource;
	unsigned long long _destination;
	unsigned long long _context;
	PKPeerPaymentRequestToken* _requestToken;
	NSString* _dpanIdentifier;
	NSString* _fpanIdentifier;
	long long _paymentNetwork;
	unsigned long long _paymentMethodType;
	NSString* _recipientIdentifier;
	NSString* _senderAddress;
	NSString* _bankName;
	NSString* _routingNumber;
	NSString* _accountNumber;
	PKPeerPaymentQuoteCertificatesResponse* _quoteCertificatesResponse;

}

@property (nonatomic,copy,readonly) NSString * orderIdentifier;                                               //@synthesize orderIdentifier=_orderIdentifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                                          //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currency;                                                               //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) unsigned long long externalFundingSource;                                        //@synthesize externalFundingSource=_externalFundingSource - In the implementation block
@property (assign,nonatomic) unsigned long long destination;                                                  //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) unsigned long long context;                                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PKPeerPaymentRequestToken * requestToken;                                        //@synthesize requestToken=_requestToken - In the implementation block
@property (setter=setDPANIdentifier:,nonatomic,copy) NSString * dpanIdentifier;                               //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
@property (setter=setFPANIdentifier:,nonatomic,copy) NSString * fpanIdentifier;                               //@synthesize fpanIdentifier=_fpanIdentifier - In the implementation block
@property (assign,nonatomic) long long paymentNetwork;                                                        //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (assign,nonatomic) unsigned long long paymentMethodType;                                            //@synthesize paymentMethodType=_paymentMethodType - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                                    //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                                                          //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,copy) NSString * bankName;                                                               //@synthesize bankName=_bankName - In the implementation block
@property (nonatomic,copy) NSString * routingNumber;                                                          //@synthesize routingNumber=_routingNumber - In the implementation block
@property (nonatomic,copy) NSString * accountNumber;                                                          //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,retain) PKPeerPaymentQuoteCertificatesResponse * quoteCertificatesResponse;              //@synthesize quoteCertificatesResponse=_quoteCertificatesResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPaymentNetwork:(long long)arg1 ;
-(long long)paymentNetwork;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(void)setSenderAddress:(NSString *)arg1 ;
-(void)setRequestToken:(PKPeerPaymentRequestToken *)arg1 ;
-(NSString *)senderAddress;
-(PKPeerPaymentRequestToken *)requestToken;
-(NSString *)dpanIdentifier;
-(NSString *)bankName;
-(NSString *)accountNumber;
-(void)setDPANIdentifier:(id)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)updateWithPaymentPass:(id)arg1 externalFundingSource:(unsigned long long)arg2 ;
-(void)setBankName:(NSString *)arg1 ;
-(void)setAccountNumber:(NSString *)arg1 ;
-(void)setRoutingNumber:(NSString *)arg1 ;
-(void)setQuoteCertificatesResponse:(PKPeerPaymentQuoteCertificatesResponse *)arg1 ;
-(unsigned long long)externalFundingSource;
-(void)updateWithPaymentPass:(id)arg1 ;
-(unsigned long long)paymentMethodType;
-(PKPeerPaymentQuoteCertificatesResponse *)quoteCertificatesResponse;
-(NSString *)routingNumber;
-(NSString *)recipientIdentifier;
-(void)setFPANIdentifier:(id)arg1 ;
-(BOOL)isEqualToPeerPaymentQuoteRequest:(id)arg1 ;
-(NSString *)orderIdentifier;
-(void)setExternalFundingSource:(unsigned long long)arg1 ;
-(NSString *)fpanIdentifier;
-(void)setPaymentMethodType:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setContext:(unsigned long long)arg1 ;
-(unsigned long long)context;
-(void)setDestination:(unsigned long long)arg1 ;
-(unsigned long long)destination;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amount;
@end

