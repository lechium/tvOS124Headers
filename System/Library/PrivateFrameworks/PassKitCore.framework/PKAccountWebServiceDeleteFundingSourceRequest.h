/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceDeleteFundingSourceRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _fundingSourceIdentifier;

}

@property (nonatomic,copy) NSString * accountIdentifier;                      //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                 //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSString * fundingSourceIdentifier;              //@synthesize fundingSourceIdentifier=_fundingSourceIdentifier - In the implementation block
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSURL *)baseURL;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)fundingSourceIdentifier;
-(void)setFundingSourceIdentifier:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
@end

