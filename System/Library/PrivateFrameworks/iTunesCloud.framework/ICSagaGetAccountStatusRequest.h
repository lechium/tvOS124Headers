/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext;

@interface ICSagaGetAccountStatusRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	BOOL _isEnabled;
	BOOL _canSubscribe;
	BOOL _isSubscriber;

}
-(id)initWithStoreRequestContext:(id)arg1 ;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)execute;
@end

