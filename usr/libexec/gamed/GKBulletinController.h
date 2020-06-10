//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKAcceptedInviteManager, NSMutableDictionary, NSString;

@interface GKBulletinController : NSObject
{
    NSMutableDictionary *_bulletins;	// 8 = 0x8
    GKAcceptedInviteManager *_acceptedInviteManager;	// 16 = 0x10
    NSString *_defaultSoundPath;	// 24 = 0x18
}

+ (id)sharedController;	// IMP=0x0000000100022304
+ (void)startBulletinController;	// IMP=0x0000000100021f18
+ (id)bulletinQueue;	// IMP=0x0000000100053fa0
@property(retain) NSString *defaultSoundPath; // @synthesize defaultSoundPath=_defaultSoundPath;
@property(retain) GKAcceptedInviteManager *acceptedInviteManager; // @synthesize acceptedInviteManager=_acceptedInviteManager;
@property(retain, nonatomic) NSMutableDictionary *bulletins; // @synthesize bulletins=_bulletins;
- (void)clearBulletin:(id)arg1;	// IMP=0x0000000100022c18
- (void)removeAllBulletins;	// IMP=0x0000000100022b44
- (void)expireBulletin:(id)arg1;	// IMP=0x0000000100022a70
- (void)withdrawBulletin:(id)arg1;	// IMP=0x000000010002299c
- (void)presentBulletin:(id)arg1;	// IMP=0x00000001000228c8
- (void)dealloc;	// IMP=0x0000000100022844
- (id)init;	// IMP=0x000000010002270c
- (void)clearChallengeBulletinsForChallengeID:(id)arg1;	// IMP=0x000000010005664c
- (void)clearTurnBasedBulletinsForMatchID:(id)arg1;	// IMP=0x000000010005639c
- (void)loadBulletins;	// IMP=0x0000000100055530
- (void)updateSavedBulletins;	// IMP=0x0000000100054be0
- (void)clearSavedBulletins;	// IMP=0x00000001000543d4
- (id)bulletinStorageFilePathForEnvironment:(long long)arg1;	// IMP=0x00000001000541d0
- (id)getBulletinsOfType:(Class)arg1;	// IMP=0x0000000100053c80

@end

