//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyRequest, PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyWillPerformRedirection : PBCodable <NSCopying>
{
    PDURLSessionProxyRequest *_request;	// 8 = 0x8
    PDURLSessionProxyResponse *_response;	// 16 = 0x10
    PDURLSessionProxyTaskMessage *_task;	// 24 = 0x18
}

@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x000000010005af8c
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010005ae4c
- (unsigned long long)hash;	// IMP=0x000000010005add8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005acd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005abf0
- (void)copyTo:(id)arg1;	// IMP=0x000000010005ab64
- (void)writeTo:(id)arg1;	// IMP=0x000000010005aae4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010005aadc
- (id)dictionaryRepresentation;	// IMP=0x000000010005a6e8
- (id)description;	// IMP=0x000000010005a634
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end

