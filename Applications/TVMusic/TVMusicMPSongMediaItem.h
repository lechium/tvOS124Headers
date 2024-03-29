//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVMusicMPObjectMediaItem.h"

@class MPModelSong, NSString;

@interface TVMusicMPSongMediaItem : TVMusicMPObjectMediaItem
{
    _Bool _unknownItemType;	// 8 = 0x8
    NSString *_unknownItemDescription;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *unknownItemDescription; // @synthesize unknownItemDescription=_unknownItemDescription;
@property(nonatomic, getter=isUnknownItemType) _Bool unknownItemType; // @synthesize unknownItemType=_unknownItemType;
- (void).cxx_destruct;	// IMP=0x0000000100028e70
- (_Bool)hasTrait:(id)arg1;	// IMP=0x0000000100028d6c
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x0000000100028060
- (_Bool)useBookmarks;	// IMP=0x0000000100027fac
@property(readonly, nonatomic) MPModelSong *song;
- (id)initWithStorePlatformDictionary:(id)arg1;	// IMP=0x0000000100027f20
- (id)initWithSong:(id)arg1;	// IMP=0x0000000100027f10
- (id)initWithSong:(id)arg1 mediaItemMetadata:(id)arg2;	// IMP=0x0000000100027ea0

@end

