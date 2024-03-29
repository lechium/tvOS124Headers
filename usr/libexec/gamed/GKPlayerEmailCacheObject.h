//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKCacheObject.h"

@class GKPlayerProfileCacheObject, NSString;

@interface GKPlayerEmailCacheObject : GKCacheObject
{
}

+ (id)entityName;	// IMP=0x0000000100030804
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x00000001000305dc
- (id)internalRepresentation;	// IMP=0x000000010003041c

// Remaining properties
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) NSString *addressPrefix; // @dynamic addressPrefix;
@property(retain, nonatomic) NSString *addressSHA1; // @dynamic addressSHA1;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;
@property(nonatomic) _Bool primary; // @dynamic primary;
@property(nonatomic) _Bool verified; // @dynamic verified;

@end

