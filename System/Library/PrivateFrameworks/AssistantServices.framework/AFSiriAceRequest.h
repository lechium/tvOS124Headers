/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriExternalRequest.h>

@protocol OS_xpc_object;
@class NSObject;

@interface AFSiriAceRequest : NSObject <AFSiriExternalRequest> {

	NSObject*<OS_xpc_object> _startRequestData;
	unsigned long long _requestOptions;

}
-(void)performRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStartRequest:(id)arg1 requestOptions:(unsigned long long)arg2 ;
-(id)initWithStartRequest:(id)arg1 ;
@end

