//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDActivityRequestRecord.h"

@class NSUUID, RPCompanionLinkClient;

__attribute__((visibility("hidden")))
@interface SDActivityEncryptionKeyRequestRecord : SDActivityRequestRecord
{
    NSUUID *_previousKeyIdentifier;	// 64 = 0x40
    RPCompanionLinkClient *_linkClient;	// 72 = 0x48
}

@property(retain, nonatomic) RPCompanionLinkClient *linkClient; // @synthesize linkClient=_linkClient;
@property(retain, nonatomic) NSUUID *previousKeyIdentifier; // @synthesize previousKeyIdentifier=_previousKeyIdentifier;
- (void).cxx_destruct;	// IMP=0x0000000100091360
- (id)description;	// IMP=0x00000001000911dc
- (void)dealloc;	// IMP=0x0000000100091184

@end

