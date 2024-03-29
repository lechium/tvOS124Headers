//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeCacheObject.h"

@class NSDate, NSNumber, NSString;

@interface GKScoreChallengeCacheObject : GKChallengeCacheObject
{
}

+ (id)entityName;	// IMP=0x00000001000451ac
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100045560
- (id)internalRepresentation;	// IMP=0x0000000100045228
- (Class)classForInternalRepresentation;	// IMP=0x0000000100045214
- (_Bool)hasDetails;	// IMP=0x00000001000451b8

// Remaining properties
@property(retain, nonatomic) NSNumber *context; // @dynamic context;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *formattedValue; // @dynamic formattedValue;
@property(retain, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(nonatomic) int rank; // @dynamic rank;
@property(retain, nonatomic) NSNumber *value; // @dynamic value;

@end

