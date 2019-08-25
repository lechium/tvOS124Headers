/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileLoader : NSObject

@property (nonatomic,readonly) int memoryHits; 
@property (nonatomic,readonly) int diskHits; 
@property (nonatomic,readonly) int networkHits; 
+(void)setServerProxyClass:(Class)arg1 ;
+(void)setTrackUsage:(BOOL)arg1 ;
+(void)setMemoryCacheCountLimit:(unsigned long long)arg1 ;
+(id)diskCacheLocation;
+(void)setDiskCacheLocation:(id)arg1 ;
+(id)modernLoaderForResourceManifestConfiguration:(id)arg1 locale:(id)arg2 ;
+(id)modernLoader;
+(id)singletonConfiguration;
+(id)modernLoaderForTileGroupIdentifier:(unsigned)arg1 locale:(id)arg2 ;
+(id)tileLoaderWithConfiguration:(id)arg1 serverProxy:(id)arg2 ;
+(void)useRemoteLoader;
+(void)useLocalLoader;
+(void)setMemoryCacheTotalCostLimit:(unsigned long long)arg1 ;
+(void)setMemoryCacheMinCapacity:(unsigned long long)arg1 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedLoader;
-(void)cancelRequest:(id)arg1 ;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 callbackQ:(id)arg6 beginNetwork:(/*^block*/id)arg7 callback:(/*^block*/id)arg8 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned)arg6 callbackQ:(id)arg7 beginNetwork:(/*^block*/id)arg8 callback:(/*^block*/id)arg9 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const SCD_Struct_GE24*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 callbackQ:(id)arg7 beginNetwork:(/*^block*/id)arg8 callback:(/*^block*/id)arg9 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const SCD_Struct_GE24*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(/*^block*/id)arg9 callback:(/*^block*/id)arg10 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const SCD_Struct_GE24*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned)arg7 callbackQ:(id)arg8 beginNetwork:(/*^block*/id)arg9 callback:(/*^block*/id)arg10 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(/*^block*/id)arg9 callback:(/*^block*/id)arg10 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const SCD_Struct_GE24*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned)arg7 signpostID:(unsigned long long)arg8 callbackQ:(id)arg9 beginNetwork:(/*^block*/id)arg10 callback:(/*^block*/id)arg11 ;
-(BOOL)reprioritizeKey:(const GEOTileKey*)arg1 forClient:(id)arg2 newPriority:(unsigned)arg3 ;
-(void)cancelKey:(const GEOTileKey*)arg1 forClient:(id)arg2 ;
-(void)cancelAllForClient:(id)arg1 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(BOOL)arg3 ;
-(void)endPreloadSessionForClient:(id)arg1 ;
-(void)expireTilesWithPredicate:(/*^block*/id)arg1 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)setSortPoint:(const SCD_Struct_GE3*)arg1 ;
-(void)registerTileDecoder:(id)arg1 ;
-(int)memoryHits;
-(int)diskHits;
-(int)networkHits;
-(void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(/*^block*/id)arg2 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(/*^block*/id)arg3 ;
-(void)registerTileLoader:(Class)arg1 ;
-(void)setInternalDelegate:(id)arg1 ;
-(id)internalDelegate;
-(void)setInternalDelegateQ:(id)arg1 ;
-(id)internalDelegateQ;
-(id)cachedTileForKey:(const GEOTileKey*)arg1 ;
-(id)descriptionDictionaryRepresentation;
-(void)_loadTiles:(id)arg1 options:(unsigned long long)arg2 progress:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)closeDatabase;
-(void)openDatabase;
-(id)renderDataForKey:(GEOTileKey*)arg1 asyncHandler:(/*^block*/id)arg2 ;
-(void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(/*^block*/id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)loadTilesFromCache:(id)arg1 progress:(/*^block*/id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)clearAllCaches;
@end

