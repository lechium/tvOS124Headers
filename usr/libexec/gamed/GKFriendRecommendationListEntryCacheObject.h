//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRecommendationEntryCacheObject.h"

@class NSNumber, NSString;

@interface GKFriendRecommendationListEntryCacheObject : GKRecommendationEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x000000010003b7ac
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x000000010003b7b8
- (id)internalRepresentation;	// IMP=0x000000010003b574

// Remaining properties
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) NSString *reason2; // @dynamic reason2;
@property(retain, nonatomic) NSString *reasonID; // @dynamic reasonID;
@property(retain, nonatomic) NSNumber *rid; // @dynamic rid;
@property(retain, nonatomic) NSNumber *source; // @dynamic source;

@end
