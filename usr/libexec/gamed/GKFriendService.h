//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKFriendService-Protocol.h"

@class NSString;

@interface GKFriendService : GKService <GKFriendService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001000941e8
+ (Class)interfaceClass;	// IMP=0x00000001000941d4
- (void)getFriendsForPlayer:(id)arg1 commonFriends:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100095548
- (void)getFriendIDsForPlayer:(id)arg1 commonFriends:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010009427c
- (void)updateFriendsOfLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100094204
- (oneway void)getFriendsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000941f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

