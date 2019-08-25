/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray, NSError, NSHashTable, SSURLBag;

@interface ISURLBagLoadingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	BOOL _hasSuccessfullyLoadedBag;
	NSDictionary* _bagDictionary;
	NSMutableArray* _bagAccessRequestBlocks;
	NSError* _bagLoadingError;
	NSHashTable* _bagObservers;
	SSURLBag* _URLBag;
	BOOL _loadingBag;

}

@property (nonatomic,readonly) NSDictionary * bagDictionary; 
@property (getter=isLoadingBag,nonatomic,readonly) BOOL loadingBag;              //@synthesize loadingBag=_loadingBag - In the implementation block
+(id)sharedBagLoadingController;
-(void)_reloadURLBagAllowingUpdateUsingExistingBagDictionary:(BOOL)arg1 ;
-(void)_handleNetworkReachabilityFlagsDidChangeNotification:(id)arg1 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(void)_handleStoreFrontDidChangeNotification:(id)arg1 ;
-(void)_updateBagWithDictionary:(id)arg1 error:(id)arg2 ;
-(void)_didCompleteLoadingBagDictionary:(id)arg1 withError:(id)arg2 ;
-(void)reloadBag;
-(BOOL)isLoadingBag;
-(void)requestAccessToBagUsingBlock:(/*^block*/id)arg1 ;
-(void)removeBagObserver:(id)arg1 ;
-(void)addBagObserver:(id)arg1 ;
-(NSDictionary *)bagDictionary;
-(id)init;
-(void)dealloc;
@end

