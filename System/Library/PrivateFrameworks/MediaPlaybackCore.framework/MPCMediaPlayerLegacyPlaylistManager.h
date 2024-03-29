/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPAVPlaylistManager.h>
#import <libobjc.A.dylib/MPCQueueBehaviorManaging.h>

@protocol OS_dispatch_queue;
@class NSMutableIndexSet, MSVMutableBidirectionalDictionary, NSObject, MPMusicPlayerControllerQueue, NSMapTable, MPQueueFeeder, NSMutableArray, MPAVItem, _MPCAVItemSourceContext, _MPCAVPlaylistIteration, NSString;

@interface MPCMediaPlayerLegacyPlaylistManager : MPAVPlaylistManager <MPCQueueBehaviorManaging> {

	BOOL _ignoreNextIndexChanges;
	BOOL _disableSoftQueueFaulting;
	BOOL _ignoreSoftQueueInvalidation;
	BOOL _ignoreHardQueueInvalidation;
	unsigned long long _maximumModifiedPlaylistIterationIndex;
	unsigned long long _minimumPlaylistIndex;
	unsigned long long _maximumPlaylistIndex;
	NSMutableIndexSet* _failedSoftQueueIndexes;
	MSVMutableBidirectionalDictionary* _identifiersToIndexes;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _musicPlayerControllerAccessQueue;
	MPMusicPlayerControllerQueue* _currentMusicPlayerControllerQueue;
	NSMapTable* _queueFeederLookup;
	BOOL _disableQueueModifications;
	MPQueueFeeder* _softQueueFeeder;
	NSMutableArray* _hardQueueSourceContexts;
	MPAVItem* _lastPlayedSoftQueueItem;
	long long _nextCurrentIndex;
	long long _hardQueueInsertionIndex;
	_MPCAVItemSourceContext* _repeatPlaylistIdentifer;
	_MPCAVPlaylistIteration* _softQueueModifications;

}

@property (nonatomic,retain) MPQueueFeeder * softQueueFeeder;                               //@synthesize softQueueFeeder=_softQueueFeeder - In the implementation block
@property (nonatomic,retain) NSMutableArray * hardQueueSourceContexts;                      //@synthesize hardQueueSourceContexts=_hardQueueSourceContexts - In the implementation block
@property (nonatomic,retain) MPAVItem * lastPlayedSoftQueueItem;                            //@synthesize lastPlayedSoftQueueItem=_lastPlayedSoftQueueItem - In the implementation block
@property (assign,nonatomic) long long nextCurrentIndex;                                    //@synthesize nextCurrentIndex=_nextCurrentIndex - In the implementation block
@property (assign,nonatomic) long long hardQueueInsertionIndex;                             //@synthesize hardQueueInsertionIndex=_hardQueueInsertionIndex - In the implementation block
@property (nonatomic,copy) _MPCAVItemSourceContext * repeatPlaylistIdentifer;               //@synthesize repeatPlaylistIdentifer=_repeatPlaylistIdentifer - In the implementation block
@property (nonatomic,retain) _MPCAVPlaylistIteration * softQueueModifications;              //@synthesize softQueueModifications=_softQueueModifications - In the implementation block
@property (assign,nonatomic) BOOL disableQueueModifications;                                //@synthesize disableQueueModifications=_disableQueueModifications - In the implementation block
@property (nonatomic,readonly) NSRange hardQueuePlaylistIndexRange; 
@property (nonatomic,readonly) NSRange softQueuePlaylistIndexRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsUserVisibleUpcomingItems; 
@property (nonatomic,readonly) BOOL canSeek; 
@property (nonatomic,readonly) BOOL canSkipToPreviousItem; 
@property (nonatomic,readonly) long long playbackMode; 
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
+(BOOL)supportsSecureCoding;
-(void)setRepeatMode:(long long)arg1 ;
-(BOOL)canSkipToPreviousItemForItem:(id)arg1 ;
-(void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2 error:(id)arg3 ;
-(void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2 ;
-(void)queueFeederDidInvalidateRealShuffleType:(id)arg1 ;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(BOOL)allowsQueueResetWhenReachingEnd;
-(void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2 ;
-(void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3 ;
-(id)playlistFeeder;
-(void)handlePlaybackFailureForItem:(id)arg1 ;
-(id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2 ;
-(long long)playlistIndexOfIndex:(long long)arg1 inPlaylistFeeder:(id)arg2 ;
-(BOOL)setPlaylistFeeder:(id)arg1 startIndex:(long long)arg2 keepPlaying:(BOOL)arg3 ;
-(long long)_prepareToQueuePlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2 ;
-(void)_notifyQueueFeederContentsChanged;
-(long long)playlistIndexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 didReachEnd:(BOOL*)arg4 ;
-(long long)playlistIndexOfItemIdentifier:(id)arg1 ;
-(id)itemForPlaylistIndex:(long long)arg1 ;
-(long long)playlistItemCount;
-(void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2 ;
-(unsigned long long)indexForContentItemID:(id)arg1 ;
-(unsigned long long)displayIndexForItem:(id)arg1 ;
-(unsigned long long)displayCountForItem:(id)arg1 ;
-(void)finalizeStateRestorationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForContentItemID:(id)arg1 ;
-(BOOL)isPlaceholderItemForContentItemID:(id)arg1 ;
-(void)updateLocationDependentPropertiesForItem:(id)arg1 ;
-(id)contentItemIDForPlaylistIndex:(long long)arg1 ;
-(long long)upNextItemCount;
-(id)metadataItemForPlaylistIndex:(long long)arg1 ;
-(id)playlistFeederForPlaylistIndex:(long long)arg1 ;
-(long long)playlistIndexOfItem:(id)arg1 ;
-(long long)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2 ;
-(BOOL)supportsAddToQueue;
-(BOOL)preventsHardQueueModificationsForItem:(id)arg1 ;
-(BOOL)disableQueueModifications;
-(void)addPlaybackContext:(id)arg1 toQueueWithInsertionType:(long long)arg2 atIndex:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addPlaybackContext:(id)arg1 toQueueWithInsertionType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)moveItemAtPlaybackIndex:(long long)arg1 toPlaybackIndex:(long long)arg2 intoHardQueue:(BOOL)arg3 ;
-(void)removeItemAtPlaybackIndex:(long long)arg1 ;
-(void)setDisableQueueModifications:(BOOL)arg1 ;
-(NSRange)hardQueuePlaylistIndexRange;
-(MPQueueFeeder *)softQueueFeeder;
-(NSRange)softQueuePlaylistIndexRange;
-(void)_handleConfiguredQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2 ;
-(id)identifierAtIndex:(unsigned long long)arg1 queueFeeder:(id)arg2 ;
-(NSRange)_softQueuePlaylistIndexRangeIncludingCurrentItem:(BOOL)arg1 ;
-(NSRange)_hardQueuePlaylistIndexRangeIncludingCurrentItem:(BOOL)arg1 ;
-(void)_insertSoftQueueSourceContext:(id)arg1 atIndex:(long long)arg2 ;
-(long long)_hardQueueIndexForIndex:(long long)arg1 ;
-(long long)_playlistIndexOfItemIdentifier:(id)arg1 ;
-(BOOL)_removeHardQueueItems;
-(BOOL)_itemIsSoftQueueItem:(id)arg1 ;
-(id)_playlistIterationForQueueFeeder:(id)arg1 withMaxQueueIndexToPreload:(unsigned long long)arg2 ;
-(BOOL)_itemIsHardQueueItem:(id)arg1 ;
-(id)_removeSoftQueueSourceContextAtIndex:(long long)arg1 ;
-(void)_removeSourceContextAtIndex:(unsigned long long)arg1 ;
-(id)_sourceContextForPlaylistIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 queueFeeder:(id)arg2 ;
-(id)_itemForPlaylistIndex:(long long)arg1 ;
-(id)_metadataItemForSourceContext:(id)arg1 ;
-(id)_softQueueSourceContextForIndex:(long long)arg1 ;
-(void)clearHardQueue;
-(long long)_softQueueIndexForIndex:(long long)arg1 ;
-(id)_itemForSourceContext:(id)arg1 ;
-(id)_queueFeeder:(id)arg1 itemForIdentifier:(id)arg2 ;
-(void)clearSoftQueue;
-(void)setSoftQueueFeeder:(MPQueueFeeder *)arg1 ;
-(NSMutableArray *)hardQueueSourceContexts;
-(void)setHardQueueSourceContexts:(NSMutableArray *)arg1 ;
-(MPAVItem *)lastPlayedSoftQueueItem;
-(void)setLastPlayedSoftQueueItem:(MPAVItem *)arg1 ;
-(long long)nextCurrentIndex;
-(void)setNextCurrentIndex:(long long)arg1 ;
-(long long)hardQueueInsertionIndex;
-(void)setHardQueueInsertionIndex:(long long)arg1 ;
-(_MPCAVItemSourceContext *)repeatPlaylistIdentifer;
-(void)setRepeatPlaylistIdentifer:(_MPCAVItemSourceContext *)arg1 ;
-(_MPCAVPlaylistIteration *)softQueueModifications;
-(void)setSoftQueueModifications:(_MPCAVPlaylistIteration *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(long long)currentIndex;
-(id)uniqueIdentifier;
@end

