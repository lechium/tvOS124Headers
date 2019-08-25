/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary, NSString;

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse {

	NSDictionary* _aps;
	NSString* _action;
	NSString* _requestID;

}

@property (nonatomic,copy,readonly) NSDictionary * aps;                //@synthesize aps=_aps - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestID;              //@synthesize requestID=_requestID - In the implementation block
-(NSDictionary *)aps;
-(NSString *)requestID;
-(NSString *)action;
-(id)initWithData:(id)arg1 ;
@end

