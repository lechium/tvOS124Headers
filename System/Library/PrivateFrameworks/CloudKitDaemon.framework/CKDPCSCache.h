/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CKDPCSSQLCache, CKDPCSMemoryCache, CKDClientContext, CKDPCSFetchAggregator, NSMutableDictionary, NSObject;

@interface CKDPCSCache : NSObject {

	CKDPCSSQLCache* _sqlCache;
	CKDPCSMemoryCache* _recordMemoryCache;
	CKDPCSMemoryCache* _zoneMemoryCache;
	CKDPCSMemoryCache* _shareMemoryCache;
	CKDClientContext* _context;
	CKDPCSFetchAggregator* _fetchAggregator;
	NSMutableDictionary* _outstandingFetches;
	NSObject*<OS_dispatch_queue> _fetchQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (assign,nonatomic,__weak) CKDClientContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CKDPCSSQLCache * sqlCache;                             //@synthesize sqlCache=_sqlCache - In the implementation block
@property (nonatomic,readonly) CKDPCSMemoryCache * recordMemoryCache;                 //@synthesize recordMemoryCache=_recordMemoryCache - In the implementation block
@property (nonatomic,readonly) CKDPCSMemoryCache * zoneMemoryCache;                   //@synthesize zoneMemoryCache=_zoneMemoryCache - In the implementation block
@property (nonatomic,readonly) CKDPCSMemoryCache * shareMemoryCache;                  //@synthesize shareMemoryCache=_shareMemoryCache - In the implementation block
@property (nonatomic,retain) CKDPCSFetchAggregator * fetchAggregator;                 //@synthesize fetchAggregator=_fetchAggregator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingFetches;                //@synthesize outstandingFetches=_outstandingFetches - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchQueue;                 //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(void)_setPCSData:(id)arg1 forFetchedShareID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_lockedGetSQLCacheWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lockedCreatePCSCacheFetchOfItem:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 fetchCreator:(/*^block*/id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(NSMutableDictionary *)outstandingFetches;
-(id)_lockedGetOutstandingFetchForOperation:(id)arg1 options:(unsigned long long)arg2 itemIDString:(id)arg3 ;
-(CKDPCSFetchAggregator *)fetchAggregator;
-(void)_lockedRemoveOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3 ;
-(void)_lockedAddOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3 ;
-(void)_lockedHandleMemoryFetchOfItem:(id)arg1 pcsData:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(/*^block*/id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(CKDPCSMemoryCache *)recordMemoryCache;
-(void)_lockedFetchPCSForItem:(id)arg1 memoryCache:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(/*^block*/id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(CKDPCSMemoryCache *)zoneMemoryCache;
-(CKDPCSMemoryCache *)shareMemoryCache;
-(void)_lockedInvalidateAllOutstandingPCSFetchesForItemIDString:(id)arg1 databaseScope:(long long)arg2 ;
-(void)getSQLCache:(/*^block*/id)arg1 ;
-(void)_updateMemoryCacheWithPCSData:(id)arg1 forItemWithID:(id)arg2 inMemoryCache:(id)arg3 databaseScope:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(BOOL)hasStatusToReport;
-(id)CKStatusReportArray;
-(id)initWithClientContext:(id)arg1 ;
-(void)fetchPCSForRecordWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)fetchPCSForZoneWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)fetchPCSForShareWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)updateMemoryCacheWithZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)updateMemoryCacheWithRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)updateMemoryCacheWithSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)removePCSDataForItemsInZoneWithID:(id)arg1 ;
-(void)removePCSDataForItemsInShareWithID:(id)arg1 ;
-(CKDPCSSQLCache *)sqlCache;
-(void)setFetchAggregator:(CKDPCSFetchAggregator *)arg1 ;
-(void)setOutstandingFetches:(NSMutableDictionary *)arg1 ;
-(void)setFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)clearPCSCaches;
-(void)clearPCSMemoryCaches;
-(void)clearInvalidatedPCSSQLCacheEntriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientContext *)context;
@end

