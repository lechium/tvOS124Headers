//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKGameplayBulletin.h"

@class GKChallengeInternal, GKStoreItemInternal, NSString;

@interface GKChallengeBulletin : GKGameplayBulletin
{
    GKChallengeInternal *_challenge;	// 16 = 0x10
    NSString *_challengeID;	// 24 = 0x18
    GKStoreItemInternal *_storeItem;	// 32 = 0x20
}

+ (void)expireChallengeList;	// IMP=0x000000010000449c
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) GKChallengeInternal *challenge; // @synthesize challenge=_challenge;
- (void)handleAcceptAction;	// IMP=0x0000000100006890
- (unsigned long long)launchEventType;	// IMP=0x000000010000662c
- (id)customChallengeSoundPathForBundleID:(id)arg1;	// IMP=0x0000000100006414
- (void)assembleBulletin;	// IMP=0x000000010000618c
- (void)notifyClient:(id)arg1;	// IMP=0x0000000100005f68
- (void)notifyApp;	// IMP=0x0000000100005b58
- (_Bool)isAppRunning;	// IMP=0x0000000100005750
- (void)refreshData;	// IMP=0x00000001000054b4
- (void)setGameName:(id)arg1;	// IMP=0x0000000100005450
- (id)gameName;	// IMP=0x0000000100005420
- (void)setOriginatorPlayer:(id)arg1;	// IMP=0x00000001000053bc
- (id)originatorPlayer;	// IMP=0x0000000100005398
- (void)setOriginatorPlayerID:(id)arg1;	// IMP=0x0000000100005334
- (id)originatorPlayerID;	// IMP=0x0000000100005304
- (void)setReceiverPlayer:(id)arg1;	// IMP=0x00000001000052a0
- (id)receiverPlayer;	// IMP=0x000000010000527c
- (void)setReceiverPlayerID:(id)arg1;	// IMP=0x0000000100005218
- (id)receiverPlayerID;	// IMP=0x00000001000051e8
- (id)gameDescriptor;	// IMP=0x0000000100004f04
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004750
- (void)dealloc;	// IMP=0x0000000100004418
- (id)URLContext;	// IMP=0x0000000100004408
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100004398
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100004304
- (id)init;	// IMP=0x00000001000042d0

@end

