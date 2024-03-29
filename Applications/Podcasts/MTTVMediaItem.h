//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVPMediaItem.h"

@class MTPlayerItem, NSString;

@interface MTTVMediaItem : NSObject <TVPMediaItem>
{
    MTPlayerItem *_playerItem;	// 8 = 0x8
}

@property(retain, nonatomic) MTPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void).cxx_destruct;	// IMP=0x000000010002cfb4
- (id)reportingDelegate;	// IMP=0x000000010002cf88
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x000000010002cf84
- (void)performMediaItemMetadataTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002cf78
- (void)removeMediaItemMetadataForProperty:(id)arg1;	// IMP=0x000000010002cf74
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000010002cf70
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x000000010002c38c
- (_Bool)hasTrait:(id)arg1;	// IMP=0x000000010002c314
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x000000010002c228
- (id)mediaItemURL;	// IMP=0x000000010002c1d4
- (id)initWithMediaItem:(id)arg1;	// IMP=0x000000010002c160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

