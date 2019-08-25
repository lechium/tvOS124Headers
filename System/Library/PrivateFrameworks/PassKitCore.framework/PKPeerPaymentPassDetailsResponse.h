/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL, PKPaymentRemoteCredential;

@interface PKPeerPaymentPassDetailsResponse : PKPeerPaymentWebServiceResponse {

	NSString* _provisioningIdentifier;
	long long _cardType;
	long long _status;
	NSURL* _passURL;
	NSString* _passTypeIdentifier;
	NSString* _passSerialNumber;
	NSString* _ownershipTokenIdentifier;
	PKPaymentRemoteCredential* _remoteCredential;

}

@property (nonatomic,copy,readonly) NSString * provisioningIdentifier;                    //@synthesize provisioningIdentifier=_provisioningIdentifier - In the implementation block
@property (nonatomic,readonly) long long cardType;                                        //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) long long status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSURL * passURL;                                      //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * passTypeIdentifier;                        //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * passSerialNumber;                          //@synthesize passSerialNumber=_passSerialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;                  //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
@property (nonatomic,readonly) PKPaymentRemoteCredential * remoteCredential;              //@synthesize remoteCredential=_remoteCredential - In the implementation block
-(NSString *)passTypeIdentifier;
-(PKPaymentRemoteCredential *)remoteCredential;
-(long long)cardType;
-(NSURL *)passURL;
-(NSString *)ownershipTokenIdentifier;
-(NSString *)provisioningIdentifier;
-(NSString *)passSerialNumber;
-(long long)status;
-(id)initWithData:(id)arg1 ;
@end

