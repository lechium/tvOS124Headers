//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRealTimeMultiplayerBulletin.h"

@interface GKRealTimeMultiplayerInitiateBulletin : GKRealTimeMultiplayerBulletin
{
    _Bool _isReconnect;	// 104 = 0x68
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018b60
@property _Bool isReconnect; // @synthesize isReconnect=_isReconnect;
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b7e4
- (void)handleDeclineAction;	// IMP=0x000000010001b5f4
- (void)handleAcceptAction;	// IMP=0x000000010001b360
- (void)handleAction:(id)arg1;	// IMP=0x000000010001af18
- (void)assembleBulletin;	// IMP=0x000000010001a66c
- (void)parseClientData:(id)arg1;	// IMP=0x000000010001a370
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001a120
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100019ec4
- (id)initWithPushNotification:(id)arg1;	// IMP=0x0000000100019c7c

@end

