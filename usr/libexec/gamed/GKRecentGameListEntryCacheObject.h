//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListEntryCacheObject.h"

@class NSDate, NSString;

@interface GKRecentGameListEntryCacheObject : GKListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x000000010003e36c
- (id)internalRepresentationForPlayer:(id)arg1;	// IMP=0x000000010003e530
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x000000010003e378

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSDate *date; // @dynamic date;

@end
