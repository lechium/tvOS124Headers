/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPQueueFeederDelegate.h>
#import <libobjc.A.dylib/MPAVQueueCoordinatorDataSource.h>
#import <libobjc.A.dylib/MPAVQueueController.h>
#import <libobjc.A.dylib/MPQueueBehaviorManaging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPAVItemQueueIdentifier, MPAVPlaylistManagerDelegate;
@class NSString, MPAVItem, MPAVController, MPQueueFeeder, MPAVQueueCoordinator;

@interface MPAVPlaylistManager : NSObject <MPQueueFeederDelegate, MPAVQueueCoordinatorDataSource, MPAVQueueController, MPQueueBehaviorManaging, NSSecureCoding> {

	MPAVItem* _currentItem;
	BOOL _goToTargetIndex;
	long long _lastSelectionDirection;
	MPQueueFeeder* _playlistFeeder;
	long long _repeatMode;
	long long _targetIndex;
	BOOL _updatedAudioSessionMode;
	MPQueueFeeder* _currentQueueFeeder;
	id<MPAVItemQueueIdentifier> _currentItemQueueIdentifier;
	long long _playbackMode;
	MPAVController* _avController;
	MPAVQueueCoordinator* _queueCoordinator;
	id<MPAVPlaylistManagerDelegate> _delegate;

}

@property (retain) MPAVItem * currentItem;                                                 //@synthesize currentItem=_currentItem - In the implementation block
@property (readonly) MPAVQueueCoordinator * queueCoordinator;                              //@synthesize queueCoordinator=_queueCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVPlaylistManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MPQueueFeeder * playlistFeeder;                             //@synthesize playlistFeeder=_playlistFeeder - In the implementation block
@property (readonly) long long currentIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL canSkipToPreviousItem; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) BOOL shouldDeferItemLoading; 
@property (nonatomic,readonly) long long playlistItemCount; 
@property (nonatomic,readonly) long long upNextItemCount; 
@property (nonatomic,readonly) BOOL allowsQueueResetWhenReachingEnd; 
@property (assign,nonatomic,__weak) MPAVController * avController;                         //@synthesize avController=_avController - In the implementation block
@property (nonatomic,readonly) BOOL allowsUserVisibleUpcomingItems; 
@property (nonatomic,readonly) BOOL canSeek; 
@property (nonatomic,readonly) long long playbackMode;                                     //@synthesize playbackMode=_playbackMode - In the implementation block
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
+(BOOL)supportsSecureCoding;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(long long)playbackMode;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canSkipToPreviousItemForItem:(id)arg1 ;
-(void)queueFeederDidReplaceItem:(id)arg1 ;
-(void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2 error:(id)arg3 ;
-(void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2 ;
-(void)queueFeederDidInvalidateAssets:(id)arg1 ;
-(void)queueFeederDidInvalidateRealRepeatType:(id)arg1 ;
-(void)queueFeederDidInvalidateRealShuffleType:(id)arg1 ;
-(BOOL)canSkipItem:(id)arg1 ;
-(BOOL)allowsUserVisibleUpcomingItems;
-(BOOL)canSeek;
-(BOOL)canSkipToPreviousItem;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(BOOL)allowsQueueResetWhenReachingEnd;
-(BOOL)hasQueueContents;
-(BOOL)canSeekItem:(id)arg1 ;
-(void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2 ;
-(long long)indexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 didReachEnd:(BOOL*)arg4 ;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1 ;
-(void)setShouldDeferItemLoading:(BOOL)arg1 ;
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(void)connectQueueCoordinator:(id)arg1 ;
-(void)disconnectQueueCoordinator;
-(void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3 ;
-(MPQueueFeeder *)playlistFeeder;
-(void)setAvController:(MPAVController *)arg1 ;
-(void)handlePlaybackFailureForItem:(id)arg1 ;
-(MPAVQueueCoordinator *)queueCoordinator;
-(void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2 ;
-(id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2 ;
-(void)queueCoordinator:(id)arg1 willInsertItem:(id)arg2 afterItem:(id)arg3 ;
-(void)queueCoordinatorDidChangeItems:(id)arg1 ;
-(BOOL)shouldDeferItemLoading;
-(void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1 ;
-(long long)playlistIndexOfIndex:(long long)arg1 inPlaylistFeeder:(id)arg2 ;
-(void)_applyVolumeNormalizationForQueuedItems;
-(BOOL)setPlaylistFeeder:(id)arg1 startIndex:(long long)arg2 keepPlaying:(BOOL)arg3 ;
-(void)clearQueueFeeder;
-(void)_reloadQueuedItemsIfPathBecameAvailable;
-(long long)_prepareToQueuePlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2 ;
-(void)_notifyQueueFeederContentsChanged;
-(MPAVController *)avController;
-(long long)playlistIndexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 didReachEnd:(BOOL*)arg4 ;
-(unsigned long long)_playbackIndexForDelta:(long long)arg1 fromIndex:(unsigned long long)arg2 ignoreElapsedTime:(BOOL)arg3 totalItemCount:(unsigned long long)arg4 didReachEnd:(BOOL*)arg5 ;
-(long long)playlistIndexOfItemIdentifier:(id)arg1 ;
-(id)itemForPlaylistIndex:(long long)arg1 ;
-(void)_updateAudioSessionModeWithIndex:(unsigned long long)arg1 ;
-(long long)playlistItemCount;
-(void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2 ;
-(id)_queuePlayerFeederItemForIndex:(long long)arg1 ;
-(long long)_nextItemIndex:(long long)arg1 repeatMode:(long long)arg2 ;
-(id)_itemToFollowItemIndex:(long long)arg1 skipUnavailableContent:(BOOL)arg2 ;
-(unsigned long long)indexForContentItemID:(id)arg1 ;
-(unsigned long long)displayIndexForItem:(id)arg1 ;
-(unsigned long long)displayCountForItem:(id)arg1 ;
-(void)finalizeStateRestorationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForContentItemID:(id)arg1 ;
-(BOOL)isPlaceholderItemForContentItemID:(id)arg1 ;
-(void)updateLocationDependentPropertiesForItem:(id)arg1 ;
-(void)updateForSoundCheckDefaultsChange;
-(id)contentItemIDForPlaylistIndex:(long long)arg1 ;
-(long long)_indexForStringIdentifier:(id)arg1 ;
-(long long)upNextItemCount;
-(id)metadataItemForPlaylistIndex:(long long)arg1 ;
-(id)playlistFeederForPlaylistIndex:(long long)arg1 ;
-(long long)playlistIndexOfItem:(id)arg1 ;
-(long long)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2 ;
-(id)currentQueueUUID;
-(id)musicPlayerControllerQueueForUUID:(id)arg1 ;
-(void)requestMusicPlayerControllerQueueWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)setMusicPlayerControllerQueue:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_nowplayingContentItemIdentifierForIndex:(long long)arg1 ;
-(id)_nowplayingContentItemForIndex:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPAVItem *)currentItem;
-(void)setCurrentItem:(MPAVItem *)arg1 ;
-(void)setDelegate:(id<MPAVPlaylistManagerDelegate>)arg1 ;
-(id<MPAVPlaylistManagerDelegate>)delegate;
-(void)reset;
-(long long)currentIndex;
-(NSString *)uniqueIdentifier;
@end

