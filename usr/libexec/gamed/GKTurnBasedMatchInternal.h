//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKGameInternal, GKPlayerInternal, NSArray, NSData, NSDate, NSDictionary, NSString;

@interface GKTurnBasedMatchInternal : GKInternalRepresentation
{
    NSString *_matchID;	// 8 = 0x8
    NSString *_status;	// 16 = 0x10
    unsigned int _state;	// 24 = 0x18
    NSString *_message;	// 32 = 0x20
    NSDictionary *_localizableMessage;	// 40 = 0x28
    NSString *_reason;	// 48 = 0x30
    NSDate *_creationDate;	// 56 = 0x38
    NSDate *_lastTurnDate;	// 64 = 0x40
    NSDate *_deletionDate;	// 72 = 0x48
    GKPlayerInternal *_currentPlayer;	// 80 = 0x50
    NSString *_lastTurnPlayerID;	// 88 = 0x58
    NSData *_matchData;	// 96 = 0x60
    NSString *_matchDataVersion;	// 104 = 0x68
    NSArray *_participants;	// 112 = 0x70
    NSString *_bundleID;	// 120 = 0x78
    NSString *_bundleVersion;	// 128 = 0x80
    NSString *_shortBundleVersion;	// 136 = 0x88
    GKGameInternal *_game;	// 144 = 0x90
    NSArray *_exchanges;	// 152 = 0x98
    unsigned int _turnNumber;	// 160 = 0xa0
    unsigned char _minPlayers;	// 164 = 0xa4
    unsigned char _maxPlayers;	// 165 = 0xa5
    BOOL _currentParticipant;	// 166 = 0xa6
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100111a74
@property(retain, nonatomic) GKGameInternal *game; // @synthesize game=_game;
@property(retain, nonatomic) NSArray *exchanges; // @synthesize exchanges=_exchanges;
@property(retain, nonatomic) NSString *shortBundleVersion; // @synthesize shortBundleVersion=_shortBundleVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *matchDataVersion; // @synthesize matchDataVersion=_matchDataVersion;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) NSData *matchData; // @synthesize matchData=_matchData;
@property(retain, nonatomic) NSString *lastTurnPlayerID; // @synthesize lastTurnPlayerID=_lastTurnPlayerID;
@property(nonatomic) unsigned int turnNumber; // @synthesize turnNumber=_turnNumber;
@property(nonatomic) BOOL currentParticipant; // @synthesize currentParticipant=_currentParticipant;
@property(retain, nonatomic) NSDate *deletionDate; // @synthesize deletionDate=_deletionDate;
@property(nonatomic) unsigned char maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) unsigned char minPlayers; // @synthesize minPlayers=_minPlayers;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *lastTurnDate; // @synthesize lastTurnDate=_lastTurnDate;
@property(retain, nonatomic) GKPlayerInternal *currentPlayer; // @synthesize currentPlayer=_currentPlayer;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *matchID; // @synthesize matchID=_matchID;
- (id)descriptionSubstitutionMap;	// IMP=0x0000000100112924
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (long long)activeExchangeCount;	// IMP=0x0000000100112208
- (long long)previousParticipantIndex;	// IMP=0x000000010011207c
- (long long)localPlayerParticipantIndex;	// IMP=0x0000000100112028
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100111f04
- (unsigned long long)hash;	// IMP=0x0000000100111ee0
- (void)dealloc;	// IMP=0x00000001001118c4
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100119988

@end

