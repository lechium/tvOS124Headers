//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface AWDSharingSheetActivityType : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_activityType;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
    } _has;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;	// IMP=0x00000001000b9e98
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b9da8
- (unsigned long long)hash;	// IMP=0x00000001000b9d14
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b9c04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b9b20
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b9a88
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b99fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b99f4
- (id)dictionaryRepresentation;	// IMP=0x00000001000b9670
- (id)description;	// IMP=0x00000001000b95bc
@property(readonly, nonatomic) _Bool hasActivityType;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;

@end

