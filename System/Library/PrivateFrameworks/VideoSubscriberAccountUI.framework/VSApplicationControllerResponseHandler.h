/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSApplicationControllerResponseHandler : NSObject
-(void)handleJavascriptResponse:(id)arg1 requestType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_accountAuthenticationWithJavascriptResponse:(id)arg1 error:(id*)arg2 ;
-(void)_handleJavascriptResponseInternal:(id)arg1 requestType:(long long)arg2 accountAuthentication:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_parseSAMLResponseString:(id)arg1 error:(id*)arg2 ;
-(void)_setSubscriptionDataWithResponse:(id)arg1 forJavascriptResponse:(id)arg2 ;
@end

