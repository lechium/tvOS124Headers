//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKFamiliarPlayerInternal.h"

@class GKGameInternal, NSDate, NSString;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal
{
    NSString *_status;	// 112 = 0x70
    NSDate *_lastPlayedDate;	// 120 = 0x78
    GKGameInternal *_lastPlayedGame;	// 128 = 0x80
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100105e2c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100105da0
+ (int)familiarity;	// IMP=0x0000000100118ed4
+ (id)propertiesToFetch;	// IMP=0x0000000100118d84
- (void)setLastPlayedGame:(id)arg1;	// IMP=0x0000000100106018
- (id)lastPlayedGame;	// IMP=0x0000000100106008
- (void)setLastPlayedDate:(id)arg1;	// IMP=0x0000000100105ffc
- (id)lastPlayedDate;	// IMP=0x0000000100105fec
- (void)setStatus:(id)arg1;	// IMP=0x0000000100105fe0
- (id)status;	// IMP=0x0000000100105fd0
- (int)defaultFamiliarity;	// IMP=0x0000000100105fc8
- (_Bool)isFriend;	// IMP=0x0000000100105fc0
- (void)dealloc;	// IMP=0x0000000100105da8
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100118edc
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100118cf8

@end

