/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKPeerPaymentRecipient, PKPeerPaymentRequestToken, PKPeerPaymentQuote, PKPeerPaymentPerformResponse, PKPeerPaymentQuoteCertificatesResponse, PKPeerPaymentQuoteRequest;

@interface PKPeerPaymentControllerInternalState : NSObject <NSSecureCoding> {

	unsigned long long state;
	unsigned long long mode;
	NSString* senderPhoneOrEmail;
	NSString* recipientPhoneOrEmail;
	PKPeerPaymentRecipient* recipient;
	NSString* recipientDisplayName;
	PKPeerPaymentRequestToken* requestToken;
	PKPeerPaymentQuote* quote;
	PKPeerPaymentPerformResponse* performQuoteResponse;
	PKPeerPaymentQuoteCertificatesResponse* quoteCertificatesResponse;
	NSString* accountName;
	NSString* accountNumber;
	NSString* routingNumber;
	PKPeerPaymentQuoteRequest* quoteRequest;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToPeerPaymentControllerInternalState:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
