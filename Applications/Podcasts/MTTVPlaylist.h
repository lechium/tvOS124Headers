//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPlaylist.h"

@class IMPlayerManifest, NSArray;

@interface MTTVPlaylist : TVPPlaylist
{
    _Bool _dummyTrackList;	// 8 = 0x8
    _Bool _dummyTrackCreatedButNotInList;	// 9 = 0x9
    NSArray *_trackList;	// 16 = 0x10
    IMPlayerManifest *_manifest;	// 24 = 0x18
}

@property(nonatomic) _Bool dummyTrackCreatedButNotInList; // @synthesize dummyTrackCreatedButNotInList=_dummyTrackCreatedButNotInList;
@property(nonatomic) _Bool dummyTrackList; // @synthesize dummyTrackList=_dummyTrackList;
@property(retain, nonatomic) IMPlayerManifest *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSArray *trackList; // @synthesize trackList=_trackList;
- (void).cxx_destruct;	// IMP=0x000000010001c750
- (unsigned long long)currentManifestIndex;	// IMP=0x000000010001c68c
- (void)_reloadManifest;	// IMP=0x000000010001c5d8
- (void)_currentItemDidChange;	// IMP=0x000000010001c5d4
- (long long)repeatMode;	// IMP=0x000000010001c5cc
- (_Bool)supportsRepeat;	// IMP=0x000000010001c5c4
- (_Bool)supportsShuffle;	// IMP=0x000000010001c5bc
- (_Bool)shuffleEnabled;	// IMP=0x000000010001c5b4
- (id)name;	// IMP=0x000000010001c560
- (id)upcomingItems;	// IMP=0x000000010001c18c
- (unsigned long long)activeListIndex;	// IMP=0x000000010001c164
@property(readonly, nonatomic) NSArray *activeList;
- (unsigned long long)count;	// IMP=0x000000010001c10c
- (unsigned long long)currentIndex;	// IMP=0x000000010001c0ec
- (id)previousMediaItem;	// IMP=0x000000010001c098
- (id)nextMediaItem;	// IMP=0x000000010001c044
- (id)currentMediaItem;	// IMP=0x000000010001bf80
- (_Bool)moreItemsAvailable:(long long)arg1;	// IMP=0x000000010001befc
- (void)dealloc;	// IMP=0x000000010001be84
- (id)initWithManifest:(id)arg1;	// IMP=0x000000010001bcd4

@end

