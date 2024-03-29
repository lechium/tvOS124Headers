//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKScoreInternal, NSArray, NSDate, NSDictionary, NSString;

@interface GKLeaderboardInternal : GKInternalRepresentation
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_groupIdentifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_leaderboardSetIdentifier;	// 32 = 0x20
    NSDate *_lastSubmittedDate;	// 40 = 0x28
    NSDictionary *_icons;	// 48 = 0x30
    unsigned int _overallRank;	// 56 = 0x38
    unsigned int _overallRankCount;	// 60 = 0x3c
    unsigned short _friendRank;	// 64 = 0x40
    unsigned short _friendRankCount;	// 66 = 0x42
    unsigned int _maxRank;	// 68 = 0x44
    NSArray *_scores;	// 72 = 0x48
    GKScoreInternal *_playerScore;	// 80 = 0x50
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100108dec
@property(nonatomic) unsigned int maxRank; // @synthesize maxRank=_maxRank;
@property(nonatomic) unsigned short friendRankCount; // @synthesize friendRankCount=_friendRankCount;
@property(nonatomic) unsigned short friendRank; // @synthesize friendRank=_friendRank;
@property(nonatomic) unsigned int overallRankCount; // @synthesize overallRankCount=_overallRankCount;
@property(nonatomic) unsigned int overallRank; // @synthesize overallRank=_overallRank;
@property(retain, nonatomic) GKScoreInternal *playerScore; // @synthesize playerScore=_playerScore;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(retain, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSDate *lastSubmittedDate; // @synthesize lastSubmittedDate=_lastSubmittedDate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *leaderboardSetIdentifier; // @synthesize leaderboardSetIdentifier=_leaderboardSetIdentifier;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x0000000100109174
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001090d8
- (void)dealloc;	// IMP=0x0000000100108d04
@property(readonly, nonatomic) unsigned long long maxRange;
@property(retain, nonatomic) NSString *localizedTitle;
@property(retain, nonatomic) NSString *category;

@end

