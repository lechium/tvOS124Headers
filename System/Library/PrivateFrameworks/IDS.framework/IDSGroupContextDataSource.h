/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ENGroupContextDataSource.h>
#import <libobjc.A.dylib/ENGroupContextCacheMiddleware.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface IDSGroupContextDataSource : NSObject <ENGroupContextDataSource, ENGroupContextCacheMiddleware> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)participantsForCypher:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_groupContextDataSource;
-(id)_groupContextCacheMiddleware;
-(void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)middlewareCacheCostForContext:(id)arg1 ;
-(void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 fetchAllKnownGroups:(/*^block*/id)arg2 ;
-(void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

