/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCPlayerResponseBuilder.h>
#import <libobjc.A.dylib/MPMiddleware.h>

@protocol MPCSupportedCommands;
@class NSArray, MPCMediaRemoteController, MPSectionedCollection, NSIndexPath, NSString;

@interface MPCMediaRemoteMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware> {

	NSArray* _invalidationObservers;
	MPCMediaRemoteController* _controller;
	MPSectionedCollection* _queueContentItems;
	MPSectionedCollection* _queueModelObjects;
	id<MPCSupportedCommands> _supportedCommands;
	NSIndexPath* _playingIndexPath;
	NSString* _queueIdentifier;
	long long _playerState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPCMediaRemoteController * controller;                   //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * queueContentItems;               //@synthesize queueContentItems=_queueContentItems - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * queueModelObjects;               //@synthesize queueModelObjects=_queueModelObjects - In the implementation block
@property (nonatomic,retain) id<MPCSupportedCommands> supportedCommands;              //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,copy) NSIndexPath * playingIndexPath;                            //@synthesize playingIndexPath=_playingIndexPath - In the implementation block
@property (nonatomic,copy) NSString * queueIdentifier;                                //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (assign,nonatomic) long long playerState;                                   //@synthesize playerState=_playerState - In the implementation block
@property (nonatomic,retain) NSArray * invalidationObservers;                         //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(id<MPCSupportedCommands>)supportedCommands;
-(void)setSupportedCommands:(id<MPCSupportedCommands>)arg1 ;
-(NSArray *)invalidationObservers;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(NSString *)queueIdentifier;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(id)operationsForRequest:(id)arg1 ;
-(NSIndexPath *)playingIndexPath;
-(void)setPlayingIndexPath:(NSIndexPath *)arg1 ;
-(void)setQueueContentItems:(MPSectionedCollection *)arg1 ;
-(void)setQueueModelObjects:(MPSectionedCollection *)arg1 ;
-(MPSectionedCollection *)queueModelObjects;
-(MPSectionedCollection *)queueContentItems;
-(void)setPlayerState:(long long)arg1 ;
-(id)controller:(id)arg1 chain:(id)arg2 ;
-(long long)playerState:(long long)arg1 chain:(id)arg2 ;
-(id)tracklistUniqueIdentifier:(id)arg1 chain:(id)arg2 ;
-(long long)playerRepeatType:(long long)arg1 chain:(id)arg2 ;
-(long long)playerShuffleType:(long long)arg1 chain:(id)arg2 ;
-(long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2 ;
-(long long)playerUpNextItemCount:(long long)arg1 chain:(id)arg2 ;
-(unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2 ;
-(unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3 ;
-(SCD_Struct_MP7)playerItemDuration:(SCD_Struct_MP7)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(BOOL)playerItemIsPlaceholder:(BOOL)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4 ;
-(id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2 ;
-(long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2 ;
-(long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2 ;
-(id)playerItemLanguageOptionGroups:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)playerItemCurrentLanguageOptions:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(BOOL)playerCommandSupported:(BOOL)arg1 command:(unsigned)arg2 chain:(id)arg3 ;
-(BOOL)playerCommandEnabled:(BOOL)arg1 command:(unsigned)arg2 chain:(id)arg3 ;
-(id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned)arg3 chain:(id)arg4 ;
-(id)playerVideoView:(id)arg1 chain:(id)arg2 ;
-(id)operationsForPlayerRequest:(id)arg1 ;
-(long long)playerState;
-(id)_supportedCommands:(unsigned)arg1 infoValueForKey:(id)arg2 ;
-(float)_playbackRateForContentItem:(id)arg1 ;
-(id)init;
-(MPCMediaRemoteController *)controller;
-(void)setController:(MPCMediaRemoteController *)arg1 ;
@end

