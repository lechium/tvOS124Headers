//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface GKDashboardMultiplayerDataSource : GKCollectionDataSource
{
    _Bool _automatchAddedToMinInHeader;	// 8 = 0x8
    _Bool _addingEnabled;	// 9 = 0x9
    _Bool _removingEnabled;	// 10 = 0xa
    _Bool _autoMatching;	// 11 = 0xb
    long long _minPlayers;	// 16 = 0x10
    long long _maxPlayers;	// 24 = 0x18
    long long _automatchPlayers;	// 32 = 0x20
    CDUnknownBlockType _playersChangedHandler;	// 40 = 0x28
    NSArray *_participants;	// 48 = 0x30
    NSMutableDictionary *_playerStatus;	// 56 = 0x38
    NSMutableOrderedSet *_players;	// 64 = 0x40
    NSMutableOrderedSet *_orderedPlayerIDList;	// 72 = 0x48
}

@property(retain, nonatomic) NSMutableOrderedSet *orderedPlayerIDList; // @synthesize orderedPlayerIDList=_orderedPlayerIDList;
@property(retain, nonatomic) NSMutableOrderedSet *players; // @synthesize players=_players;
@property(retain, nonatomic) NSMutableDictionary *playerStatus; // @synthesize playerStatus=_playerStatus;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) CDUnknownBlockType playersChangedHandler; // @synthesize playersChangedHandler=_playersChangedHandler;
@property(nonatomic) _Bool autoMatching; // @synthesize autoMatching=_autoMatching;
@property(nonatomic) _Bool removingEnabled; // @synthesize removingEnabled=_removingEnabled;
@property(nonatomic) _Bool addingEnabled; // @synthesize addingEnabled=_addingEnabled;
@property(nonatomic) _Bool automatchAddedToMinInHeader; // @synthesize automatchAddedToMinInHeader=_automatchAddedToMinInHeader;
@property(nonatomic) long long automatchPlayers; // @synthesize automatchPlayers=_automatchPlayers;
@property(nonatomic) long long maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) long long minPlayers; // @synthesize minPlayers=_minPlayers;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100006890
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010000687c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100006750
- (void)setAutoMatching:(_Bool)arg1 withVisibleCells:(id)arg2;	// IMP=0x0000000100006474
- (_Bool)participantShouldBeRemovable:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001000063a0
- (void)setParticipantsWithPlayers:(id)arg1 automatchPlayerCount:(long long)arg2 andStatuses:(id)arg3;	// IMP=0x0000000100005e80
- (id)participantAtIndex:(long long)arg1;	// IMP=0x0000000100005e68
- (id)participantForAutoMatchNumber:(long long)arg1;	// IMP=0x0000000100005d24
- (id)participantForPlayer:(id)arg1;	// IMP=0x0000000100005bd8
- (void)failedToInvitePlayers;	// IMP=0x0000000100005a24
- (id)playersInvited;	// IMP=0x0000000100005a14
- (id)playersToBeInvited;	// IMP=0x0000000100005a04
- (id)readyPlayers;	// IMP=0x00000001000059f4
- (id)playersWithStatus:(long long)arg1;	// IMP=0x0000000100005890
- (id)guestPlayers;	// IMP=0x000000010000586c
- (id)currentPlayers;	// IMP=0x0000000100005854
- (void)finishRevertingPlayers;	// IMP=0x000000010000563c
- (void)setStatus:(long long)arg1 forPlayers:(id)arg2;	// IMP=0x000000010000506c
- (_Bool)shouldRevertStatus:(long long)arg1;	// IMP=0x000000010000505c
- (void)removePlayers:(id)arg1;	// IMP=0x0000000100004ee8
- (void)addPlayers:(id)arg1 withStatus:(long long)arg2 replaceAutomatches:(_Bool)arg3;	// IMP=0x0000000100004ca4
- (void)addPlayers:(id)arg1 withStatus:(long long)arg2;	// IMP=0x0000000100004c94
- (long long)maxAvailablePlayers;	// IMP=0x0000000100004c54
- (struct _NSRange)playerRange;	// IMP=0x0000000100004ad4
- (_Bool)havePendingPlayers;	// IMP=0x0000000100004970
- (long long)statusForPlayer:(id)arg1;	// IMP=0x0000000100004914
- (long long)itemCount;	// IMP=0x00000001000048fc
- (void)_updateParticipantsAnimated:(_Bool)arg1;	// IMP=0x0000000100004090
- (void)restoreOrderOfPlayers;	// IMP=0x0000000100003eac
- (void)updateParticipantsAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003d9c
- (void)updateParticipantsAnimated:(_Bool)arg1;	// IMP=0x0000000100003d8c
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100003d14
- (void)setupCollectionView:(id)arg1;	// IMP=0x0000000100003c64
- (void)dealloc;	// IMP=0x0000000100003bb8
- (id)init;	// IMP=0x0000000100003a00

@end

