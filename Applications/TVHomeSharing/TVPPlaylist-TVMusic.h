//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPlaylist.h"

@interface TVPPlaylist (TVMusic)
- (void)insertAfterCurrentPlayingItem:(id)arg1;	// IMP=0x00000001000053f0
- (void)purgeHistory;	// IMP=0x000000010000532c
- (void)setMediaAsCurrentlyPlayingAppendTracklist:(id)arg1;	// IMP=0x00000001000051a4
- (void)playItemsNext:(id)arg1;	// IMP=0x00000001000050a8
- (void)moveItemAtIndexToPlayNext:(long long)arg1;	// IMP=0x0000000100004f7c
- (_Bool)canMoveItemAtIndexToPlayNext:(long long)arg1;	// IMP=0x0000000100004ef4
@end
