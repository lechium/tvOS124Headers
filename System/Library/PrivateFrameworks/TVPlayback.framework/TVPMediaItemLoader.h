/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@protocol TVPMediaItem, OS_dispatch_queue;
@class NSObject, NSString, NSError, TVPMediaItemTimingData, AVURLAsset, TVPStateMachine, TVPContentKeySession, TVSCacheDeletePurgeID, NSTimer, NSNotification;

@interface TVPMediaItemLoader : NSObject <AVAssetResourceLoaderDelegate> {

	BOOL _cleanedUp;
	BOOL _AVAudioSessionConfiguredAfterMediaServicesReset;
	NSObject*<TVPMediaItem> _mediaItem;
	NSString* _state;
	NSError* _error;
	TVPMediaItemTimingData* _timingData;
	AVURLAsset* _existingAVAsset;
	NSObject* _reportingHierarchyToken;
	AVURLAsset* _AVAsset;
	TVPStateMachine* _stateMachine;
	AVURLAsset* _AVAssetInternal;
	TVPContentKeySession* _contentKeySession;
	NSObject*<OS_dispatch_queue> _assetInternalAccessQueue;
	NSObject*<OS_dispatch_queue> _assetLoadContextAccessQueue;
	unsigned long long _assetLoadContext;
	unsigned long long _refCount;
	NSString* _mediaItemLoaderGUID;
	unsigned long long _backgroundTaskIdentifier;
	TVSCacheDeletePurgeID* _cacheDeletePurgeID;
	NSTimer* _diskSpaceMonitorTimer;
	NSNotification* _savedMediaServerResetUserNotification;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                                     //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) NSString * state;                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) AVURLAsset * AVAsset;                                                  //@synthesize AVAsset=_AVAsset - In the implementation block
@property (nonatomic,retain) TVPMediaItemTimingData * timingData;                                   //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) TVPStateMachine * stateMachine;                                        //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) AVURLAsset * AVAssetInternal;                                          //@synthesize AVAssetInternal=_AVAssetInternal - In the implementation block
@property (nonatomic,retain) TVPContentKeySession * contentKeySession;                              //@synthesize contentKeySession=_contentKeySession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetInternalAccessQueue;                 //@synthesize assetInternalAccessQueue=_assetInternalAccessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetLoadContextAccessQueue;              //@synthesize assetLoadContextAccessQueue=_assetLoadContextAccessQueue - In the implementation block
@property (assign,nonatomic) unsigned long long assetLoadContext;                                   //@synthesize assetLoadContext=_assetLoadContext - In the implementation block
@property (assign,nonatomic) unsigned long long refCount;                                           //@synthesize refCount=_refCount - In the implementation block
@property (nonatomic,copy) NSString * mediaItemLoaderGUID;                                          //@synthesize mediaItemLoaderGUID=_mediaItemLoaderGUID - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskIdentifier;                           //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (nonatomic,retain) TVSCacheDeletePurgeID * cacheDeletePurgeID;                            //@synthesize cacheDeletePurgeID=_cacheDeletePurgeID - In the implementation block
@property (nonatomic,retain) NSTimer * diskSpaceMonitorTimer;                                       //@synthesize diskSpaceMonitorTimer=_diskSpaceMonitorTimer - In the implementation block
@property (assign,nonatomic) BOOL cleanedUp;                                                        //@synthesize cleanedUp=_cleanedUp - In the implementation block
@property (assign,nonatomic) BOOL AVAudioSessionConfiguredAfterMediaServicesReset;                  //@synthesize AVAudioSessionConfiguredAfterMediaServicesReset=_AVAudioSessionConfiguredAfterMediaServicesReset - In the implementation block
@property (nonatomic,retain) NSNotification * savedMediaServerResetUserNotification;                //@synthesize savedMediaServerResetUserNotification=_savedMediaServerResetUserNotification - In the implementation block
@property (nonatomic,retain) AVURLAsset * existingAVAsset;                                          //@synthesize existingAVAsset=_existingAVAsset - In the implementation block
@property (nonatomic,readonly) BOOL containsStreamingAVAsset; 
@property (nonatomic,retain) NSObject * reportingHierarchyToken;                                    //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loaderForMediaItem:(id)arg1 ;
+(id)tempDirURL;
+(void)removeTemporaryDownloadDirectory;
+(void)initialize;
-(NSObject*<TVPMediaItem>)mediaItem;
-(id)initWithMediaItem:(id)arg1 ;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2 ;
-(void)setReportingHierarchyToken:(NSObject *)arg1 ;
-(NSObject *)reportingHierarchyToken;
-(TVPMediaItemTimingData *)timingData;
-(void)setTimingData:(TVPMediaItemTimingData *)arg1 ;
-(unsigned long long)refCount;
-(void)setRefCount:(unsigned long long)arg1 ;
-(void)loadIfNecessary;
-(AVURLAsset *)AVAsset;
-(BOOL)containsStreamingAVAsset;
-(void)cleanupIfNecessary;
-(id)newPlayerItem;
-(void)_stopBackgroundCaching:(id)arg1 ;
-(void)_mediaItemPlaybackErrorDidOccur:(id)arg1 ;
-(void)_mediaItemStopPlayback:(id)arg1 ;
-(void)_cleanUp;
-(NSObject*<OS_dispatch_queue>)assetInternalAccessQueue;
-(AVURLAsset *)AVAssetInternal;
-(void)setCacheDeletePurgeID:(TVSCacheDeletePurgeID *)arg1 ;
-(id)_avAssetOptions;
-(NSTimer *)diskSpaceMonitorTimer;
-(void)_diskSpaceMonitorTimerFired:(id)arg1 ;
-(void)setDiskSpaceMonitorTimer:(NSTimer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)assetLoadContextAccessQueue;
-(unsigned long long)assetLoadContext;
-(AVURLAsset *)existingAVAsset;
-(void)_avAssetMediaServicesReset:(id)arg1 ;
-(void)_avAudioSessionMediaServicesReset:(id)arg1 ;
-(void)setAVAssetInternal:(AVURLAsset *)arg1 ;
-(void)setCleanedUp:(BOOL)arg1 ;
-(NSString *)mediaItemLoaderGUID;
-(BOOL)_needToLoadBlockingMetadataKeys;
-(void)_loadMediaItemMetadataAsynchronously;
-(BOOL)AVAudioSessionConfiguredAfterMediaServicesReset;
-(void)_postMediaServicesResetFailureWithNotification:(id)arg1 ;
-(void)setAVAudioSessionConfiguredAfterMediaServicesReset:(BOOL)arg1 ;
-(void)setSavedMediaServerResetUserNotification:(NSNotification *)arg1 ;
-(void)_avAudioSessionConfiguredAfterMediaServicesReset;
-(NSNotification *)savedMediaServerResetUserNotification;
-(id)_metadataKeysToLoad;
-(id)_rollKeyNameFromType:(unsigned long long)arg1 ;
-(id)_skipKeyNameFromType:(unsigned long long)arg1 ;
-(id)_numberValueForKey:(id)arg1 fromMetadata:(id)arg2 andKeyIdentifierMap:(id)arg3 ;
-(id)_stringValueForKey:(id)arg1 fromMetadata:(id)arg2 andKeyIdentifierMap:(id)arg3 ;
-(unsigned long long)_rollTypeFromMetadataItemKey:(id)arg1 ;
-(unsigned long long)_skipTypeFromMetadataItemKey:(id)arg1 ;
-(id)_rollKeyNamesForType:(unsigned long long)arg1 withCount:(unsigned long long)arg2 ;
-(id)_skipKeyNamesForType:(unsigned long long)arg1 withCount:(unsigned long long)arg2 ;
-(id)_advisoryKeyNamesWithCount:(unsigned long long)arg1 ;
-(id)_rollInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 forType:(unsigned long long)arg3 withTotalCount:(unsigned long long)arg4 ;
-(id)_skipInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 forType:(unsigned long long)arg3 withTotalCount:(unsigned long long)arg4 ;
-(id)_advisoryInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 withTotalCount:(unsigned long long)arg3 ;
-(id)_tomatoFreshnessFromString:(id)arg1 ;
-(id)_contentKeyRequestParamsFromBase64String:(id)arg1 ;
-(BOOL)cleanedUp;
-(TVSCacheDeletePurgeID *)cacheDeletePurgeID;
-(void)setAssetLoadContext:(unsigned long long)arg1 ;
-(void)prepareForPlaybackInitiation;
-(void)loadSHA1DigestWithCompletion:(/*^block*/id)arg1 ;
-(void)setExistingAVAsset:(AVURLAsset *)arg1 ;
-(void)setAVAsset:(AVURLAsset *)arg1 ;
-(void)setAssetInternalAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAssetLoadContextAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMediaItemLoaderGUID:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)backgroundTaskIdentifier;
-(TVPContentKeySession *)contentKeySession;
-(void)setContentKeySession:(TVPContentKeySession *)arg1 ;
-(void)_registerStateMachineHandlers;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
@end

