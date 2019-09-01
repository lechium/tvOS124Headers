//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDSharingRemoteDiscMountResult : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _errorCode;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010004e07c
- (unsigned long long)hash;	// IMP=0x000000010004e018
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004df3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004dea4
- (void)copyTo:(id)arg1;	// IMP=0x000000010004de30
- (void)writeTo:(id)arg1;	// IMP=0x000000010004ddb4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010004ddac
- (id)dictionaryRepresentation;	// IMP=0x000000010004d9c0
- (id)description;	// IMP=0x000000010004d90c
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end

