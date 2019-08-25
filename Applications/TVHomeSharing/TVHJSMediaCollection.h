//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHJSMediaEntity.h"

#import "TVHJSMediaCollection.h"

@class NSDate, NSNumber, NSString, TVHJSMediaEntityType, TVHKMediaCollection;

@interface TVHJSMediaCollection : TVHJSMediaEntity <TVHJSMediaCollection>
{
    NSString *_imageLoadParams;	// 8 = 0x8
    NSString *_playlistType;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_artistTitle;	// 32 = 0x20
    TVHKMediaCollection *_mediaCollection;	// 40 = 0x28
}

@property(retain, nonatomic) TVHKMediaCollection *mediaCollection; // @synthesize mediaCollection=_mediaCollection;
- (void).cxx_destruct;	// IMP=0x0000000100038640
- (id)_unknownNoMediaCategoryMediaCollectionTitle;	// IMP=0x00000001000384a0
- (id)_unknownPhotosMediaCollectionTitle;	// IMP=0x00000001000383ec
- (id)_unknownHomeVideosMediaCollectionTitle;	// IMP=0x0000000100038274
- (id)_unknownAudiobooksMediaCollectionTitle;	// IMP=0x00000001000380a8
- (id)_unknownITunesUMediaCollectionTitle;	// IMP=0x0000000100037edc
- (id)_unknownPodcastsMediaCollectionTitle;	// IMP=0x0000000100037d10
- (id)_unknownShowsMediaCollectionTitle;	// IMP=0x0000000100037ae8
- (id)_unknownMoviesMediaCollectionTitle;	// IMP=0x0000000100037970
- (id)_unknownMusicMediaCollectionTitle;	// IMP=0x0000000100037704
@property(readonly, copy, nonatomic) NSString *playlistType; // @synthesize playlistType=_playlistType;
@property(readonly, copy, nonatomic) NSDate *addedToDate;
@property(readonly, copy, nonatomic) NSString *selectedMediaCollectionIdentifier;
@property(readonly, copy, nonatomic) NSNumber *mediaItemCount;
@property(readonly, copy, nonatomic) NSString *artistIdentifier;
@property(readonly, copy, nonatomic) NSString *artistTitle; // @synthesize artistTitle=_artistTitle;
@property(readonly, copy, nonatomic) NSString *imageLoadParams; // @synthesize imageLoadParams=_imageLoadParams;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithMediaCollection:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100037020
- (id)initWithMediaEntity:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100036f98

// Remaining properties
@property(readonly, copy, nonatomic) NSDate *addedDate;
@property(readonly, copy, nonatomic) NSString *albumIdentifier;
@property(readonly, copy, nonatomic) NSString *albumTitle;
@property(readonly, copy, nonatomic) NSString *contentDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSNumber *duration;
@property(readonly, copy, nonatomic) NSString *genreTitle;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *mediaServerIdentifier;
@property(readonly, copy, nonatomic) NSString *metadataHash;
@property(copy, nonatomic) NSString *playedState;
@property(readonly, copy, nonatomic) NSString *playedStateResourceName;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSNumber *releaseYear;
@property(readonly, copy, nonatomic) NSNumber *seasonNumber;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TVHJSMediaEntityType *type;

@end

