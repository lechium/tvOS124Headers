/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAUpdateNameRequest : AAAppleIDSettingsRequest {

	NSString* _newFirstName;
	NSString* _newLastName;

}
+(Class)responseClass;
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
-(id)urlRequest;
-(id)urlString;
@end

