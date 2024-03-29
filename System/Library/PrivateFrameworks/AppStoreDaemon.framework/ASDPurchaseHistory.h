/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, NSString;

@interface ASDPurchaseHistory : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;
	int _databaseChangedNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updateWithContext:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)executeQuery:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)setHidden:(BOOL)arg1 forStoreItemID:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)showAllWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateForAccountID:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

