/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAUIQuotaRequest : AARequest {

	ACAccount* _account;
	BOOL _isDetailedRequest;

}
+(Class)responseClass;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 ;
-(id)urlString;
-(id)initDetailedRequestWithAccount:(id)arg1 ;
@end

