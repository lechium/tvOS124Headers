/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSString;

@interface PLQuotaRequest : AARequest {

	NSString* _authToken;
	NSString* _personID;

}
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 authToken:(id)arg2 personID:(id)arg3 ;
@end

