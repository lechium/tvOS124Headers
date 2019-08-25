//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZUniversalPlaybackPositionDataSource.h"

@class NSString;

@interface MTUniversalPlaybackPositionDataSource : NSObject <MZUniversalPlaybackPositionDataSource>
{
}

+ (double)uppLastSyncTime;	// IMP=0x000000010008d314
+ (void)setUppLastSyncTime:(double)arg1;	// IMP=0x000000010008d280
+ (void)resetUppLastSyncTimeAndDomainVersion;	// IMP=0x000000010008d1e4
+ (void)updateEpisode:(id)arg1 withUPPMetadata:(id)arg2;	// IMP=0x000000010008d098
+ (id)mediaItemIdentifierForEpisode:(id)arg1;	// IMP=0x000000010008bae4
- (void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010008c234
- (void)cancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x000000010008c230
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010008bc20
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000010008bb84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
