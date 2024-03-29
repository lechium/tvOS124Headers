//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDAutoUnlockAWDLInfo : PBCodable <NSCopying>
{
    NSData *_awdlInfo;	// 8 = 0x8
    unsigned int _errorCode;	// 16 = 0x10
    NSData *_keyData;	// 24 = 0x18
    unsigned int _version;	// 32 = 0x20
    _Bool _authPrompt;	// 36 = 0x24
    _Bool _supportsConfirmationACK;	// 37 = 0x25
    _Bool _useToken;	// 38 = 0x26
    struct {
        unsigned int errorCode:1;
        unsigned int version:1;
        unsigned int authPrompt:1;
        unsigned int supportsConfirmationACK:1;
        unsigned int useToken:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) _Bool supportsConfirmationACK; // @synthesize supportsConfirmationACK=_supportsConfirmationACK;
@property(nonatomic) _Bool authPrompt; // @synthesize authPrompt=_authPrompt;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) _Bool useToken; // @synthesize useToken=_useToken;
@property(retain, nonatomic) NSData *awdlInfo; // @synthesize awdlInfo=_awdlInfo;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;	// IMP=0x0000000100177e28
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100177c54
- (unsigned long long)hash;	// IMP=0x0000000100177b10
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100177934
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001777b4
- (void)copyTo:(id)arg1;	// IMP=0x0000000100177678
- (void)writeTo:(id)arg1;	// IMP=0x0000000100177558
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100177550
- (id)dictionaryRepresentation;	// IMP=0x0000000100176d64
- (id)description;	// IMP=0x0000000100176cb0
@property(nonatomic) _Bool hasSupportsConfirmationACK;
@property(nonatomic) _Bool hasAuthPrompt;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasKeyData;
@property(nonatomic) _Bool hasUseToken;
@property(readonly, nonatomic) _Bool hasAwdlInfo;
@property(nonatomic) _Bool hasVersion;

@end

