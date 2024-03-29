//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVPMediaItem.h"

@class MPModelObject, NSMutableDictionary, NSString, TVCKMutableBookmark, TVPBaseMediaItem;

@interface TVMusicMPObjectMediaItem : NSObject <TVPMediaItem>
{
    MPModelObject *_modelObject;	// 8 = 0x8
    NSMutableDictionary *_mediaItemMetadata;	// 16 = 0x10
    TVPBaseMediaItem *_dataItem;	// 24 = 0x18
    TVCKMutableBookmark *_bookmark;	// 32 = 0x20
}

+ (double)_playedThresholdTimeForDuration:(double)arg1;	// IMP=0x000000010008f1b4
@property(retain, nonatomic) TVCKMutableBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) TVPBaseMediaItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSMutableDictionary *mediaItemMetadata; // @synthesize mediaItemMetadata=_mediaItemMetadata;
@property(retain, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (void).cxx_destruct;	// IMP=0x000000010008f2d0
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x000000010008efdc
- (void)performMediaItemMetadataTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010008ef10
- (void)removeMediaItemMetadataForProperty:(id)arg1;	// IMP=0x000000010008eea4
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000010008edb4
- (id)reportingDelegate;	// IMP=0x000000010008edac
- (_Bool)hasTrait:(id)arg1;	// IMP=0x000000010008ecd4
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x000000010008ec1c
- (id)mediaItemURL;	// IMP=0x000000010008ec14
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x000000010008e71c
- (id)storeBrowseContentItemWithStorePlatformDictionary:(id)arg1;	// IMP=0x000000010008e530
- (_Bool)useBookmarks;	// IMP=0x000000010008e528
- (id)initWithMPModelObject:(id)arg1;	// IMP=0x000000010008e518
- (id)initWithMPModelObject:(id)arg1 mediaItemMetadata:(id)arg2;	// IMP=0x000000010008e260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

