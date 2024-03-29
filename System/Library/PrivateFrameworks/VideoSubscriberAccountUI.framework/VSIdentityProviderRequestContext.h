/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSIdentityProviderRequest;

@interface VSIdentityProviderRequestContext : NSObject {

	BOOL _attemptedVerificationStateReset;
	VSIdentityProviderRequest* _request;

}

@property (nonatomic,retain) VSIdentityProviderRequest * request;               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL attemptedVerificationStateReset;              //@synthesize attemptedVerificationStateReset=_attemptedVerificationStateReset - In the implementation block
-(void)setRequest:(VSIdentityProviderRequest *)arg1 ;
-(BOOL)attemptedVerificationStateReset;
-(void)setAttemptedVerificationStateReset:(BOOL)arg1 ;
-(VSIdentityProviderRequest *)request;
@end

