/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, NSData, NSDictionary, PKContact;

@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest {

	NSString* _quoteIdentifier;
	NSData* _paymentData;
	NSDictionary* _certificates;
	NSString* _recipientPhoneOrEmail;
	PKContact* _contact;
	NSString* _pushToken;
	NSData* _signedEnrollmentDataSignature;

}

@property (nonatomic,copy) NSString * quoteIdentifier;                          //@synthesize quoteIdentifier=_quoteIdentifier - In the implementation block
@property (nonatomic,copy) NSData * paymentData;                                //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,copy) NSDictionary * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy) NSString * recipientPhoneOrEmail;                    //@synthesize recipientPhoneOrEmail=_recipientPhoneOrEmail - In the implementation block
@property (nonatomic,retain) PKContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSString * pushToken;                                //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSData * signedEnrollmentDataSignature;              //@synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature - In the implementation block
+(id)requestWithAuthorizedPeerPaymentQuote:(id)arg1 ;
-(NSDictionary *)certificates;
-(void)setCertificates:(NSDictionary *)arg1 ;
-(NSData *)signedEnrollmentDataSignature;
-(void)setSignedEnrollmentDataSignature:(NSData *)arg1 ;
-(NSData *)paymentData;
-(void)setPaymentData:(NSData *)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
-(NSString *)recipientPhoneOrEmail;
-(void)setRecipientPhoneOrEmail:(NSString *)arg1 ;
-(void)setQuoteIdentifier:(NSString *)arg1 ;
-(NSString *)quoteIdentifier;
-(PKContact *)contact;
-(void)setContact:(PKContact *)arg1 ;
-(NSString *)pushToken;
@end

