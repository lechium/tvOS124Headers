//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKLeaderboardScoreRequest.h"

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest
{
    struct _NSRange _range;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100066e08
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100066f38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100066ea8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100066e10
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010014389c
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001434f4
- (id)resourceIdentifier;	// IMP=0x0000000100143318
- (id)serverRequestWithService:(id)arg1;	// IMP=0x000000010014311c
- (id)bagKey;	// IMP=0x0000000100143110
- (void)sanitizeRange;	// IMP=0x00000001001430e0

@end

