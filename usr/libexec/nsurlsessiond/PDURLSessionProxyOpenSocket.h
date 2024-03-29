//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString, PDURLSessionProxySessionMessage;

@interface PDURLSessionProxyOpenSocket : PBCodable <NSCopying>
{
    NSString *_host;	// 8 = 0x8
    unsigned int _port;	// 16 = 0x10
    PDURLSessionProxySessionMessage *_session;	// 24 = 0x18
    NSString *_socketUUID;	// 32 = 0x20
    struct {
        unsigned int port:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *socketUUID; // @synthesize socketUUID=_socketUUID;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void).cxx_destruct;	// IMP=0x0000000100005e04
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100005cb8
- (unsigned long long)hash;	// IMP=0x0000000100005c08
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100005ac4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000059b8
- (void)copyTo:(id)arg1;	// IMP=0x0000000100005900
- (void)writeTo:(id)arg1;	// IMP=0x0000000100005858
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100005850
- (id)dictionaryRepresentation;	// IMP=0x00000001000053d8
- (id)description;	// IMP=0x0000000100005324
@property(nonatomic) _Bool hasPort;
@property(readonly, nonatomic) _Bool hasHost;
@property(readonly, nonatomic) _Bool hasSocketUUID;
@property(readonly, nonatomic) _Bool hasSession;

@end

