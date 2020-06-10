//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKAccountService.h"

#import "GKAccountServicePrivate-Protocol.h"

@class NSString;

@interface GKAccountServicePrivate : GKAccountService <GKAccountServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100131df0
+ (Class)interfaceClass;	// IMP=0x0000000100131ddc
- (void)updateClientSettings:(CDUnknownBlockType)arg1;	// IMP=0x0000000100141f30
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001419d4
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100141734
- (oneway void)authenticationCancelled;	// IMP=0x00000001001416e8
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010013fcd0
- (oneway void)signOutPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013e954
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010013e72c
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x000000010013dca4
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010013d238
- (void)_continueAuthenticationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013bf64
- (void)_notifyAllClientsPlayerAuthenticatedFromClient:(id)arg1 withCredential:(id)arg2 replyGroup:(id)arg3;	// IMP=0x000000010013bab0
- (void)_appInitWithGroup:(id)arg1;	// IMP=0x000000010013abc0
- (void)_loadProfileWithGroup:(id)arg1;	// IMP=0x000000010013a2dc
- (void)notifyClient:(id)arg1 authenticationDidChangeWithError:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100139ffc
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100138dd4
- (void)_preloadDataForGameCenterTabs;	// IMP=0x00000001001388ec
- (void)_fetchCredentialsForUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100137e00
- (void)_primeCacheWithGroup:(id)arg1;	// IMP=0x0000000100137418
- (id)_authenticatedLocalPlayerWithUsername:(id)arg1 inContext:(id)arg2 isValid:(_Bool *)arg3;	// IMP=0x00000001001368e0
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001368c4
- (void)_initGameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100135b78
- (void)renewAuthToken;	// IMP=0x0000000100134e00
- (void)_postLaunchEventsForGame:(id)arg1 moc:(id)arg2;	// IMP=0x00000001001346c0
- (void)_addAchievementPointsEntryForGame:(id)arg1 record:(id)arg2 profile:(id)arg3 moc:(id)arg4;	// IMP=0x0000000100134528
- (void)_addGameListEntryForGame:(id)arg1 profile:(id)arg2 moc:(id)arg3;	// IMP=0x00000001001343a8
- (void)_removeRecommendationForBundleID:(id)arg1 profile:(id)arg2 moc:(id)arg3;	// IMP=0x00000001001342d8
- (void)_constructAuthenticationResponseWithError:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100133ca4
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100133bf8
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 validateOnly:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100132834
- (void)updateGameInvitePreferenceSettingsForNewlyAuthenticatedPlayer;	// IMP=0x000000010013269c
- (void)updateBadgeCounts;	// IMP=0x00000001001320f0
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x0000000100132064
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100131df8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
