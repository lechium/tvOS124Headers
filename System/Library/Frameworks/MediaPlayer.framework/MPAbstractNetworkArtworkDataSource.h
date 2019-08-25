/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCache, NSMapTable, NSMutableDictionary, NSURLSession, NSURLSessionConfiguration, NSString;

@interface MPAbstractNetworkArtworkDataSource : NSObject <NSURLSessionDataDelegate, MPArtworkDataSource> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSCache* _fallbackArtworkRepresentationCache;
	NSMapTable* _catalogTaskMap;
	NSMutableDictionary* _pendingRequestToCompletionHandlers;
	NSURLSession* _URLSession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                            //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSCache * fallbackArtworkRepresentationCache;                          //@synthesize fallbackArtworkRepresentationCache=_fallbackArtworkRepresentationCache - In the implementation block
@property (nonatomic,retain) NSMapTable * catalogTaskMap;                                           //@synthesize catalogTaskMap=_catalogTaskMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingRequestToCompletionHandlers;              //@synthesize pendingRequestToCompletionHandlers=_pendingRequestToCompletionHandlers - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                                             //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) NSURLSessionConfiguration * URLSessionConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_applyURLCachePolicy:(unsigned long long)arg1 cacheDiskPath:(id)arg2 toConfiguration:(id)arg3 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)_performSyncBlock:(/*^block*/id)arg1 ;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)sortedSupportedSizesForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(NSURLSessionConfiguration *)URLSessionConfiguration;
-(NSCache *)fallbackArtworkRepresentationCache;
-(id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(BOOL)arg2 ;
-(NSMutableDictionary *)pendingRequestToCompletionHandlers;
-(id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(CGSize)arg3 immediateImageDecompressionAllowed:(BOOL)arg4 ;
-(NSMapTable *)catalogTaskMap;
-(void)_performAsyncBarrierBlock:(/*^block*/id)arg1 ;
-(BOOL)wantsBackgroundImageDecompression;
-(BOOL)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
-(BOOL)_isRepresentationSize:(CGSize)arg1 validForCatalog:(id)arg2 ;
-(void)updateURLSessionWithCachePolicy:(unsigned long long)arg1 cachePath:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFallbackArtworkRepresentationCache:(NSCache *)arg1 ;
-(void)setCatalogTaskMap:(NSMapTable *)arg1 ;
-(void)setPendingRequestToCompletionHandlers:(NSMutableDictionary *)arg1 ;
-(NSURLSession *)URLSession;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(id)init;
@end

