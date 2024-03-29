/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, NSUUID;

@interface PKPeerPaymentSubmitDeviceScoreIdentifiersRequest : PKPeerPaymentWebServiceRequest {

	NSString* _paymentIdentifier;
	NSUUID* _requestDeviceScoreIdentifier;
	NSUUID* _sendDeviceScoreIdentifier;

}

@property (nonatomic,copy) NSString * paymentIdentifier;                       //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * requestDeviceScoreIdentifier;              //@synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * sendDeviceScoreIdentifier;                 //@synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier - In the implementation block
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(void)setRequestDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(NSString *)paymentIdentifier;
-(NSUUID *)requestDeviceScoreIdentifier;
-(NSUUID *)sendDeviceScoreIdentifier;
-(void)setSendDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
@end

