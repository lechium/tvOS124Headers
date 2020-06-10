//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKSessionBulletin.h"

@class NSString;

@interface GKSessionMessageBulletin : GKSessionBulletin
{
    NSString *_sessionIdentifier;	// 104 = 0x68
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000be7d8
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;	// IMP=0x00000001000c110c
- (id)assembledMessage;	// IMP=0x00000001000c0eec
- (void)distributeData;	// IMP=0x00000001000c08e8
- (id)aggregateDictionaryKey;	// IMP=0x00000001000c08d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000c05f4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000c02f4
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000c0008
- (void)loadSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bf78c

@end
