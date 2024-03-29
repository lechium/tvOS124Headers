//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloService.h"

#import "CLIntersiloServiceMockProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CLIntersiloServiceMock : CLIntersiloService <CLIntersiloServiceMockProtocol>
{
    NSMutableDictionary *_keyedPayloads;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableDictionary *keyedPayloads; // @synthesize keyedPayloads=_keyedPayloads;
- (void).cxx_destruct;	// IMP=0x0000000100865b28
- (void)removePayloadForSelector:(SEL)arg1;	// IMP=0x0000000100865abc
- (id)getPayloadForSelector:(SEL)arg1;	// IMP=0x0000000100865a60
- (id)syncgetPayloadForSelector:(SEL)arg1;	// IMP=0x0000000100865a04
- (void)setPayload:(id)arg1 forSelector:(SEL)arg2;	// IMP=0x0000000100865998
- (void)removePayloadForKey:(id)arg1;	// IMP=0x0000000100865734
- (id)getPayloadForKey:(id)arg1;	// IMP=0x000000010086550c
- (id)syncgetPayloadForKey:(id)arg1;	// IMP=0x0000000100865500
- (void)setPayload:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001008650fc
- (void)endService;	// IMP=0x00000001008650ec
- (void)beginService;	// IMP=0x0000000100865094

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

