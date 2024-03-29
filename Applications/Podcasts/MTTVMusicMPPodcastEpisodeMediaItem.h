//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPBaseMediaItem.h"

@class MPCPlayerResponseItem, MPModelPodcastEpisode, NSDictionary, NSString;

@interface MTTVMusicMPPodcastEpisodeMediaItem : TVPBaseMediaItem
{
    _Bool _unknownItemType;	// 8 = 0x8
    MPModelPodcastEpisode *_podcastEpisode;	// 16 = 0x10
    NSString *_unknownItemDescription;	// 24 = 0x18
    MPCPlayerResponseItem *_responseItem;	// 32 = 0x20
    NSDictionary *_mediaItemMetadata;	// 40 = 0x28
    TVPBaseMediaItem *_mediaItem;	// 48 = 0x30
}

+ (double)_playedThresholdTimeForDuration:(double)arg1;	// IMP=0x0000000100089fb4
@property(retain, nonatomic) TVPBaseMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSDictionary *mediaItemMetadata; // @synthesize mediaItemMetadata=_mediaItemMetadata;
@property(retain, nonatomic) MPCPlayerResponseItem *responseItem; // @synthesize responseItem=_responseItem;
@property(copy, nonatomic) NSString *unknownItemDescription; // @synthesize unknownItemDescription=_unknownItemDescription;
@property(nonatomic, getter=isUnknownItemType) _Bool unknownItemType; // @synthesize unknownItemType=_unknownItemType;
@property(retain, nonatomic) MPModelPodcastEpisode *podcastEpisode; // @synthesize podcastEpisode=_podcastEpisode;
- (void).cxx_destruct;	// IMP=0x000000010008a10c
- (void)performMediaItemMetadataTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100089f9c
- (void)removeMediaItemMetadataForProperty:(id)arg1;	// IMP=0x0000000100089f84
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000100089f2c
- (id)reportingDelegate;	// IMP=0x0000000100089f24
- (_Bool)hasTrait:(id)arg1;	// IMP=0x0000000100089eac
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x0000000100089db8
- (id)mediaItemURL;	// IMP=0x0000000100089db0
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x0000000100089668
- (id)initWithPlayerResponseItem:(id)arg1;	// IMP=0x0000000100089658
- (id)initWithPlayerResponseItem:(id)arg1 mediaItemMetadata:(id)arg2;	// IMP=0x000000010008951c

@end

