//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKExpiringCacheObject.h"

@class NSData, NSDate, NSOrderedSet, NSString;

@interface GKTurnBasedSessionCacheObject : GKExpiringCacheObject
{
}

+ (id)sessionsWithSessionIDs:(id)arg1 inContext:(id)arg2;	// IMP=0x00000001000415c0
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x00000001000415b4
+ (id)uniqueAttributeName;	// IMP=0x00000001000415a8
+ (id)sessionWithID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x0000000100041510
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x000000010003fd84
+ (id)entityName;	// IMP=0x000000010003fd78
- (id)internalRepresentation;	// IMP=0x0000000100041b20
- (id)participantAtIndex:(long long)arg1;	// IMP=0x00000001000419b4
- (void)expire;	// IMP=0x0000000100041950
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00000001000408a8
- (id)participantWithPlayerID:(id)arg1;	// IMP=0x00000001000406ac
- (void)saveGameData:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000010004045c
- (void)expireGameData;	// IMP=0x0000000100040324
- (void)deleteGameData;	// IMP=0x000000010003fff8
- (id)gameData;	// IMP=0x000000010003fe8c
- (void)prepareForDeletion;	// IMP=0x000000010003fe40
- (_Bool)isActive;	// IMP=0x000000010003fdc4

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSString *currentGuestID; // @dynamic currentGuestID;
@property(nonatomic) int currentParticipant; // @dynamic currentParticipant;
@property(retain, nonatomic) NSString *currentPlayerID; // @dynamic currentPlayerID;
@property(retain, nonatomic) NSDate *dataExpirationDate; // @dynamic dataExpirationDate;
@property(retain, nonatomic) NSDate *deletionDate; // @dynamic deletionDate;
@property(retain, nonatomic) NSOrderedSet *exchanges; // @dynamic exchanges;
@property(retain, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(retain, nonatomic) NSString *lastTurnPlayerID; // @dynamic lastTurnPlayerID;
@property(retain, nonatomic) NSData *localizableMessage; // @dynamic localizableMessage;
@property(retain, nonatomic) NSString *matchDataVersion; // @dynamic matchDataVersion;
@property(nonatomic) int maxPlayers; // @dynamic maxPlayers;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) int minPlayers; // @dynamic minPlayers;
@property(retain, nonatomic) NSOrderedSet *participants; // @dynamic participants;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) NSString *sessionID; // @dynamic sessionID;
@property(retain, nonatomic) NSString *shortBundleVersion; // @dynamic shortBundleVersion;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(nonatomic) int turnNumber; // @dynamic turnNumber;
@property(retain, nonatomic) NSString *unusedID; // @dynamic unusedID;

@end
