/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSOperationQueue, ICUserIdentityStore;

@interface ICRadioPlaybackHistoryStore : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSURL* _containerURL;
	NSOperationQueue* _identityResolutionQueue;
	ICUserIdentityStore* _identityStore;

}

@property (nonatomic,copy,readonly) NSURL * containerDirectoryURL;                   //@synthesize containerURL=_containerURL - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * userIdentityStore;              //@synthesize identityStore=_identityStore - In the implementation block
+(id)_defaultContainerURL;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithContainerDirectoryURL:(id)arg1 ;
-(id)initWithContainerDirectoryURL:(id)arg1 identityStore:(id)arg2 ;
-(id)_playbackHistoryOfClass:(Class)arg1 forStationWithIdentifier:(id)arg2 identityKey:(id)arg3 error:(id*)arg4 ;
-(void)_getCacheKeyForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fileURLForStationWithIdentifier:(id)arg1 identityKey:(id)arg2 ;
-(void)removeHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSURL *)containerDirectoryURL;
-(ICUserIdentityStore *)userIdentityStore;
-(id)initWithIdentityStore:(id)arg1 ;
-(void)updateHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 usingBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
@end

