/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, NSDictionary;

@interface ICInAppReportEventRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	NSString* _messageIdentifier;
	NSDictionary* _params;

}
-(id)initWithStoreRequestContext:(id)arg1 messageIdentifier:(id)arg2 params:(id)arg3 ;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)execute;
@end

