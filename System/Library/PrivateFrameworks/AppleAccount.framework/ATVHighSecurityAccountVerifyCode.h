/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/ATVHighSecurityAccountSendCode.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode {

	NSString* _hsaCode;

}
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 device:(id)arg2 hsaCode:(id)arg3 ;
-(id)urlRequest;
-(id)urlString;
@end
