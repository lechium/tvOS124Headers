//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKMultiplayerBulletin.h"

@class NSDictionary;

@interface GKBulletinNearbyInvite : GKMultiplayerBulletin
{
    NSDictionary *_inviteDictionary;	// 16 = 0x10
}

@property(retain) NSDictionary *inviteDictionary; // @synthesize inviteDictionary=_inviteDictionary;
- (void)handleAction:(id)arg1;	// IMP=0x00000001000d1cb4
- (void)dealloc;	// IMP=0x00000001000d1c5c
- (id)initWithPlayer:(id)arg1 localizedGameName:(id)arg2 inviteDictionary:(id)arg3;	// IMP=0x00000001000d1470

@end

