/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKRemotePaymentRequest;

@interface PKPaymentAuthorizationContinuitySendParam : PKPaymentAuthorizationStateParam {

	PKRemotePaymentRequest* _remotePaymentRequest;

}

@property (nonatomic,retain) PKRemotePaymentRequest * remotePaymentRequest;              //@synthesize remotePaymentRequest=_remotePaymentRequest - In the implementation block
+(id)paramWithRemotePaymentRequest:(id)arg1 ;
-(void)setRemotePaymentRequest:(PKRemotePaymentRequest *)arg1 ;
-(PKRemotePaymentRequest *)remotePaymentRequest;
@end

