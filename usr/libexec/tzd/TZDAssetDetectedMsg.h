//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface TZDAssetDetectedMsg : PBCodable <NSCopying>
{
    NSString *_assetVersion;	// 8 = 0x8
}

+ (id)options;	// IMP=0x00000001000051e8
@property(retain, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
- (void).cxx_destruct;	// IMP=0x00000001000057c4
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100005780
- (unsigned long long)hash;	// IMP=0x0000000100005768
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000056c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000563c
- (void)copyTo:(id)arg1;	// IMP=0x000000010000561c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000055b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000055b0
- (id)dictionaryRepresentation;	// IMP=0x00000001000053a0
- (id)description;	// IMP=0x00000001000052ec

@end
