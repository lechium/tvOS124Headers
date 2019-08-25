/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSApplicationDataStoreRepositoryClientObserver.h>

@protocol FBSApplicationDataStoreRepositoryClient;
@class NSHashTable, NSString;

@interface FBSApplicationDataStoreMonitor : NSObject <FBSApplicationDataStoreRepositoryClientObserver> {

	id<FBSApplicationDataStoreRepositoryClient> _client;
	BOOL _clientNeedsCheckin;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_hasObserver:(id)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(void)applicationDataStoreRepositoryClient:(id)arg1 application:(id)arg2 changedObject:(id)arg3 forKey:(id)arg4 ;
-(void)applicationDataStoreRepositoryClient:(id)arg1 storeInvalidatedForApplication:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end
