//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (GKAdditions)
+ (_Bool)_gkMainBundleIsGameCenterSystemProcess;	// IMP=0x000000010009410c
+ (id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0000000100093dc8
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0000000100093ca0
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;	// IMP=0x0000000100093bf4
+ (id)_gkBundleIdentifierOrProcessNameForPID:(int)arg1;	// IMP=0x0000000100092aec
+ (id)_gkBundleWithPID:(int)arg1;	// IMP=0x0000000100092984
+ (id)_gkBundleWithIdentifier:(id)arg1;	// IMP=0x000000010009293c
- (_Bool)_gkIsDaemon;	// IMP=0x00000001000940dc
- (_Bool)_gkIsPreferences;	// IMP=0x0000000100094004
- (_Bool)_gkIsGameCenterExtension;	// IMP=0x0000000100093ef0
- (_Bool)_gkIsGameCenter;	// IMP=0x0000000100093ec0
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;	// IMP=0x0000000100093a94
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;	// IMP=0x0000000100093758
- (id)_gkPreferredLanguage;	// IMP=0x0000000100093710
- (id)_gkLocalizedName;	// IMP=0x0000000100093698
- (id)_gkBundleShortVersion;	// IMP=0x000000010009366c
- (id)_gkBundleVersion;	// IMP=0x000000010009363c
- (id)_gkPathForChallengeSound;	// IMP=0x0000000100093628
- (id)_gkPathForInviteSound;	// IMP=0x0000000100093614
- (id)_gkPathForMessageImage;	// IMP=0x0000000100093600
- (id)_gkPathForImageWithName:(id)arg1;	// IMP=0x00000001000935ec
- (id)_gkPathForSoundWithName:(id)arg1;	// IMP=0x0000000100093568
- (_Bool)_gkIsBadgingEnabled;	// IMP=0x000000010009351c
- (_Bool)_gkIsGameCenterEnabled;	// IMP=0x0000000100092a98
@end
