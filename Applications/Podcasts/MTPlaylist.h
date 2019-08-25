//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "IMMetricsDataSource.h"

@class MTPodcastPlaylistSettings, NSOrderedSet, NSSet, NSString;

@interface MTPlaylist : NSManagedObject <IMMetricsDataSource>
{
}

+ (id)topLevelPlaylistsPredicate;	// IMP=0x0000000100039a00
+ (id)predicateForVisiblePlaylistWithUUID:(id)arg1;	// IMP=0x00000001000d4e4c
+ (id)predicateForFlag:(int)arg1 isTrue:(_Bool)arg2;	// IMP=0x00000001000d4dd4
+ (id)topLevelPlaylistsExcludingFoldersPredicate;	// IMP=0x00000001000d4d40
+ (id)sortDescriptors;	// IMP=0x00000001000d4c4c
+ (id)containerOrderOptionValues;	// IMP=0x00000001000d4aec
+ (id)containerOrderOptionArray:(_Bool)arg1;	// IMP=0x00000001000d49a8
+ (id)stringForContainerOrder:(int)arg1 short:(_Bool)arg2;	// IMP=0x00000001000d47f8
+ (long long)getITunesPlaylistsCount;	// IMP=0x00000001000d45dc
+ (id)insertNewPlaylistInManagedObjectContext:(id)arg1 uuid:(id)arg2 defaultSettings:(id)arg3;	// IMP=0x00000001000d2840
+ (id)insertNewPlaylistInManagedObjectContext:(id)arg1;	// IMP=0x00000001000d2780
- (_Bool)needsUpdate;	// IMP=0x00000001000399e0
- (void)setNeedsUpdate:(_Bool)arg1;	// IMP=0x000000010003997c
- (id)metricsAdditionalData;	// IMP=0x00000001000d4efc
- (id)metricsContentIdentifier;	// IMP=0x00000001000d4ea0
- (long long)getFolderSubPlaylistsCount;	// IMP=0x00000001000d43a0
- (id)nextEpisode;	// IMP=0x00000001000d432c
- (double)totalDuration;	// IMP=0x00000001000d41f0
- (void)removeEpisode:(id)arg1 inBulkTransaction:(_Bool)arg2;	// IMP=0x00000001000d4048
- (void)removeEpisode:(id)arg1;	// IMP=0x00000001000d4038
- (void)removeEpisodes:(id)arg1;	// IMP=0x00000001000d3e74
- (void)removePodcastEpisodes:(id)arg1 shouldSave:(_Bool)arg2;	// IMP=0x00000001000d3ab0
- (void)removePodcast:(id)arg1;	// IMP=0x00000001000d37d8
- (void)recalculateEpisodeCounts;	// IMP=0x00000001000d3684
- (_Bool)hasBeenSynced;	// IMP=0x00000001000d3664
- (void)setHasBeenSynced:(_Bool)arg1;	// IMP=0x00000001000d3600
- (_Bool)updateUnplayedCount;	// IMP=0x00000001000d3428
- (_Bool)isEditable;	// IMP=0x00000001000d33d0
- (void)forceUpdate;	// IMP=0x00000001000d33c0
- (void)setUngroupedList:(_Bool)arg1;	// IMP=0x00000001000d335c
- (_Bool)isUngroupedList;	// IMP=0x00000001000d333c
- (void)setIsItunesSmartPlaylist:(_Bool)arg1;	// IMP=0x00000001000d32d8
- (_Bool)isItunesSmartPlaylist;	// IMP=0x00000001000d32b8
- (_Bool)includesAllPodcasts;	// IMP=0x00000001000d3298
- (void)setIncludesAllPodcasts:(_Bool)arg1;	// IMP=0x00000001000d3234
- (_Bool)isBuiltIn;	// IMP=0x00000001000d3214
- (void)setIsBuiltIn:(_Bool)arg1;	// IMP=0x00000001000d31b0
- (_Bool)isAutomatic;	// IMP=0x00000001000d3190
- (void)setAutomatic:(_Bool)arg1;	// IMP=0x00000001000d312c
- (_Bool)isItunesPlaylist;	// IMP=0x00000001000d310c
- (void)setIsItunesPlaylist:(_Bool)arg1;	// IMP=0x00000001000d30a8
- (_Bool)isFolder;	// IMP=0x00000001000d3088
- (void)setIsFolder:(_Bool)arg1;	// IMP=0x00000001000d3024
@property(retain, nonatomic) NSOrderedSet *podcasts; // @dynamic podcasts;
@property(retain, nonatomic) NSOrderedSet *episodes; // @dynamic episodes;

// Remaining properties
@property(retain, nonatomic) NSSet *addedEpisodes; // @dynamic addedEpisodes;
@property(nonatomic) int containerOrder; // @dynamic containerOrder;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) MTPodcastPlaylistSettings *defaultSettings; // @dynamic defaultSettings;
@property(retain, nonatomic) NSSet *deletedEpisodes; // @dynamic deletedEpisodes;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long downloadedCount; // @dynamic downloadedCount;
@property(nonatomic) long long flags; // @dynamic flags;
@property(nonatomic) double generatedDate; // @dynamic generatedDate;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(nonatomic) long long mediaLibraryId; // @dynamic mediaLibraryId;
@property(nonatomic) long long parentMediaLibraryId; // @dynamic parentMediaLibraryId;
@property(retain, nonatomic) NSOrderedSet *settings; // @dynamic settings;
@property(nonatomic) long long sortOrder; // @dynamic sortOrder;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long unplayedCount; // @dynamic unplayedCount;
@property(nonatomic) double updatedDate; // @dynamic updatedDate;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end
