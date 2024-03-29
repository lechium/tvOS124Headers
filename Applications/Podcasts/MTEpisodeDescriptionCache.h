//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

#import "NSCacheDelegate.h"

@class NSCache, NSString;

@interface MTEpisodeDescriptionCache : MTSingleton <NSCacheDelegate>
{
    NSCache *_descriptionCache;	// 8 = 0x8
    NSCache *_episodeCache;	// 16 = 0x10
}

@property(retain, nonatomic) NSCache *episodeCache; // @synthesize episodeCache=_episodeCache;
@property(retain, nonatomic) NSCache *descriptionCache; // @synthesize descriptionCache=_descriptionCache;
- (void).cxx_destruct;	// IMP=0x0000000100182c5c
- (id)descriptionPrefixTextForPlayerItem:(id)arg1 options:(unsigned long long)arg2 trailingNewline:(_Bool)arg3;	// IMP=0x0000000100182450
- (id)metadataHeaderForPlayerItem:(id)arg1;	// IMP=0x000000010018243c
- (id)descriptionBodyTextForEpisode:(id)arg1 html:(_Bool)arg2 withAttributes:(id)arg3;	// IMP=0x0000000100182220
- (id)createVideoGlyphAttributedString;	// IMP=0x0000000100182178
- (id)descriptionFooterTextForEpisode:(id)arg1 includesSeasonEpisodeType:(_Bool)arg2 includesDuration:(_Bool)arg3 includesPlayedIfPlayed:(_Bool)arg4 hasBodyText:(_Bool)arg5 unavailableReason:(unsigned long long)arg6;	// IMP=0x00000001001810ac
- (id)descriptionPrefixTextForEpisode:(id)arg1 options:(unsigned long long)arg2 trailingNewline:(_Bool)arg3;	// IMP=0x0000000100180914
- (id)descriptionTextForEpisode:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000010018067c
- (void)updateCacheForEpisode:(id)arg1;	// IMP=0x00000001001804ac
- (id)descriptionKeyForOptions:(unsigned long long)arg1 unavailableReason:(unsigned long long)arg2;	// IMP=0x0000000100180450
- (id)descriptionCacheForEpisodeUuid:(id)arg1;	// IMP=0x0000000100180350
- (id)dependantPropertyKeys;	// IMP=0x00000001001801ec
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x000000010017ff00
- (void)invalidate;	// IMP=0x000000010017fe84
- (id)metadataFooterForEpisode:(id)arg1 includingSeasonEpisodeType:(_Bool)arg2 includingDuration:(_Bool)arg3 includingPlayedIfPlayed:(_Bool)arg4;	// IMP=0x000000010017fe50
- (id)metadataFooterForEpisode:(id)arg1 includingDuration:(_Bool)arg2;	// IMP=0x000000010017fe38
- (id)metadataFooterForEpisode:(id)arg1;	// IMP=0x000000010017fe28
- (id)metadataHeaderForEpisode:(id)arg1;	// IMP=0x000000010017fe18
- (id)descriptionForEpisode:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000010017fc90
- (id)episodeDescription:(id)arg1;	// IMP=0x000000010017fc84
- (id)descriptionForEpisode:(id)arg1;	// IMP=0x000000010017fb78
- (void)dealloc;	// IMP=0x000000010017fb00
- (id)init;	// IMP=0x000000010017fa68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

