//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface ALCMWorkoutEventDeprecated : PBCodable <NSCopying>
{
    NSData *_sessionId;	// 8 = 0x8
    int _workoutEvent;	// 16 = 0x10
    int _workoutType;	// 20 = 0x14
    struct {
        unsigned int workoutType:1;
    } _has;	// 24 = 0x18
}

@property(retain, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int workoutEvent; // @synthesize workoutEvent=_workoutEvent;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010069d480
- (unsigned long long)hash;	// IMP=0x000000010069d3f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010069d324
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010069d260
- (void)copyTo:(id)arg1;	// IMP=0x000000010069d1fc
- (void)writeTo:(id)arg1;	// IMP=0x000000010069d178
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010069d170
- (id)dictionaryRepresentation;	// IMP=0x000000010069c9ec
- (id)description;	// IMP=0x000000010069c96c
@property(readonly, nonatomic) _Bool hasSessionId;
- (int)StringAsWorkoutType:(id)arg1;	// IMP=0x000000010069c54c
- (id)workoutTypeAsString:(int)arg1;	// IMP=0x000000010069c248
@property(nonatomic) _Bool hasWorkoutType;
@property(nonatomic) int workoutType; // @synthesize workoutType=_workoutType;
- (int)StringAsWorkoutEvent:(id)arg1;	// IMP=0x000000010069c0e8
- (id)workoutEventAsString:(int)arg1;	// IMP=0x000000010069c034
- (void)dealloc;	// IMP=0x000000010069bfe4

@end

