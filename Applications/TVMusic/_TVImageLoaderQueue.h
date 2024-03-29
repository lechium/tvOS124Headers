//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface _TVImageLoaderQueue : NSObject
{
    _Bool _randomized;	// 8 = 0x8
    _Bool _pauseImageLoad;	// 9 = 0x9
    NSArray *_artworkCatalogs;	// 16 = 0x10
    long long _preloadCount;	// 24 = 0x18
    CDUnknownBlockType _preloadCompletionHandler;	// 32 = 0x20
    long long _queueSize;	// 40 = 0x28
    long long _concurrentDownloadCount;	// 48 = 0x30
    long long _nextIndex;	// 56 = 0x38
    NSMutableArray *_finishedImages;	// 64 = 0x40
    NSMutableArray *_pendingArtworkCatalogs;	// 72 = 0x48
    NSMutableArray *_loadingArtworkCatalogs;	// 80 = 0x50
}

@property(retain, nonatomic) NSMutableArray *loadingArtworkCatalogs; // @synthesize loadingArtworkCatalogs=_loadingArtworkCatalogs;
@property(retain, nonatomic) NSMutableArray *pendingArtworkCatalogs; // @synthesize pendingArtworkCatalogs=_pendingArtworkCatalogs;
@property(retain, nonatomic) NSMutableArray *finishedImages; // @synthesize finishedImages=_finishedImages;
@property(nonatomic) long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) long long concurrentDownloadCount; // @synthesize concurrentDownloadCount=_concurrentDownloadCount;
@property(nonatomic) long long queueSize; // @synthesize queueSize=_queueSize;
@property(copy, nonatomic) CDUnknownBlockType preloadCompletionHandler; // @synthesize preloadCompletionHandler=_preloadCompletionHandler;
@property(nonatomic) long long preloadCount; // @synthesize preloadCount=_preloadCount;
@property(nonatomic) _Bool pauseImageLoad; // @synthesize pauseImageLoad=_pauseImageLoad;
@property(nonatomic, getter=isRandomized) _Bool randomized; // @synthesize randomized=_randomized;
@property(copy, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
- (void).cxx_destruct;	// IMP=0x000000010007c54c
- (void)_checkForPreloadCompletion;	// IMP=0x000000010007c380
- (void)_artworkDidFail:(id)arg1;	// IMP=0x000000010007c260
- (void)_artworkDidLoad:(id)arg1 withImage:(id)arg2;	// IMP=0x000000010007c174
- (void)_loadPendingImages;	// IMP=0x000000010007bf10
- (id)_artworkCatalogToLoadNext;	// IMP=0x000000010007be34
- (void)_fillQueue;	// IMP=0x000000010007bd04
- (long long)_currentQueueSize;	// IMP=0x000000010007bc90
- (id)popNextImage;	// IMP=0x000000010007bbd4
- (void)preloadImageCount:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007bb68
- (id)init;	// IMP=0x000000010007b998

@end

