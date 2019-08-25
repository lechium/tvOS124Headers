/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject {

	ASDServiceBroker* _serviceBroker;
	int _cacheUpdatedNotificationToken;

}
+(id)sharedInstance;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultAndExpiryHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end
