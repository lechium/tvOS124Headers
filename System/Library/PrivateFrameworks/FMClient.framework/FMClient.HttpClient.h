/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@interface FMClient.HttpClient : NSObject <NSURLSessionDelegate> {

	 authenticationChallengeHandler;
	 httpSuccessCodeMin;
	 httpSuccessCodeMax;
	 endpoint;
	 statusCodeHandlers;
	 statusCodeHandlerQueue;
	 session.storage;

}
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
@end

