/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKSQLite.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface CKDOperationInfoCache : CKSQLite {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSObject*<OS_dispatch_queue> _cacheDelegateQueue;
	NSMapTable* _delegatesByOperationID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;                      //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheDelegateQueue;              //@synthesize cacheDelegateQueue=_cacheDelegateQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * delegatesByOperationID;                          //@synthesize delegatesByOperationID=_delegatesByOperationID - In the implementation block
+(id)dbFileName;
+(id)sharedCache;
-(id)resumableOperationInfosByAppContainerTuplesWithProgressPurged:(BOOL)arg1 ;
-(void)deleteAllInfoForOperationWithID:(id)arg1 ;
-(void)setOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 ;
-(id)outstandingOperationInfosForIDs:(id)arg1 ;
-(id)allOutstandingOperationIDsForAppContainerTuple:(id)arg1 ;
-(void)registerAttemptForOperationWithID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)operationInfoMetadataForOperationWithID:(id)arg1 ;
-(void)registerOperationAndSetResult:(id)arg1 forOperationInfo:(id)arg2 appContainerTuple:(id)arg3 ;
-(void)expungeWithCurrentAccountIdentifier:(id)arg1 forceRemove:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)cacheDelegateQueue;
-(NSMapTable *)delegatesByOperationID;
-(void)_locked_enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_lockedResultForOperationWithID:(id)arg1 ;
-(void)_lockedSetOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 ;
-(void)_lockedSetOperationResult:(id)arg1 forOperationID:(id)arg2 ;
-(id)_locked_operationInfoForID:(id)arg1 ;
-(void)registerDelegate:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)unregisterDelegate:(id)arg1 forOperationWithID:(id)arg2 ;
-(id)resultForOperationWithID:(id)arg1 ;
-(void)enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setProgressCallbackArguments:(id)arg1 forOperationID:(id)arg2 ;
-(void)setOperationResult:(id)arg1 forOperationID:(id)arg2 ;
-(void)registerCacheEvictionActivity;
-(void)setCacheDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegatesByOperationID:(NSMapTable *)arg1 ;
-(id)init;
@end

