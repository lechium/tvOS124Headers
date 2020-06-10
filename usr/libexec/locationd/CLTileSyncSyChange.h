//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SYChange-Protocol.h"
#import "SYObject-Protocol.h"

@class NSDictionary, NSString;

@interface CLTileSyncSyChange : NSObject <SYChange, SYObject>
{
    BOOL _aud;	// 8 = 0x8
    NSString *_syncKey;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
}

@property BOOL aud; // @synthesize aud=_aud;
@property(retain) NSDictionary *properties; // @synthesize properties=_properties;
@property(retain) NSString *syncKey; // @synthesize syncKey=_syncKey;
- (void)dealloc;	// IMP=0x0000000100120c6c
- (void)setChangeType:(long long)arg1;	// IMP=0x0000000100120b20
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
- (void)setObjectIdentifier:(id)arg1;	// IMP=0x0000000100120aec
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)syncId;	// IMP=0x0000000100120ad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
