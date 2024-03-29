//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCLNatalieDataDeprecated : PBCodable <NSCopying>
{
    long long _basalNatalies;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _mets;	// 24 = 0x18
    long long _natalies;	// 32 = 0x20
    double _timestamp;	// 40 = 0x28
    int _activityType;	// 48 = 0x30
    float _basalMETs;	// 52 = 0x34
    int _recordId;	// 56 = 0x38
    _Bool _isStanding;	// 60 = 0x3c
    _Bool _regularEntry;	// 61 = 0x3d
    struct {
        unsigned int basalNatalies:1;
        unsigned int duration:1;
        unsigned int mets:1;
        unsigned int timestamp:1;
        unsigned int basalMETs:1;
        unsigned int recordId:1;
    } _has;	// 64 = 0x40
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long basalNatalies; // @synthesize basalNatalies=_basalNatalies;
@property(nonatomic) long long natalies; // @synthesize natalies=_natalies;
@property(nonatomic) float basalMETs; // @synthesize basalMETs=_basalMETs;
@property(nonatomic) double mets; // @synthesize mets=_mets;
@property(nonatomic) _Bool isStanding; // @synthesize isStanding=_isStanding;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
@property(nonatomic) int recordId; // @synthesize recordId=_recordId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001006aaa94
- (unsigned long long)hash;	// IMP=0x00000001006aa844
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001006aa688
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001006aa514
- (void)copyTo:(id)arg1;	// IMP=0x00000001006aa3e4
- (void)writeTo:(id)arg1;	// IMP=0x00000001006aa28c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001006aa284
- (id)dictionaryRepresentation;	// IMP=0x00000001006a955c
- (id)description;	// IMP=0x00000001006a94dc
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasBasalNatalies;
@property(nonatomic) _Bool hasBasalMETs;
@property(nonatomic) _Bool hasMets;
- (int)StringAsActivityType:(id)arg1;	// IMP=0x00000001006a8f30
- (id)activityTypeAsString:(int)arg1;	// IMP=0x00000001006a8c2c
@property(nonatomic) _Bool hasRecordId;

@end

