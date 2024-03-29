//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSXPCConnectionListenerHandler-Protocol.h"

@class NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface BKAssertionServerMultiplexer : NSObject <BSXPCConnectionListenerHandler>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    NSMapTable *_listeners;	// 24 = 0x18
}

- (id)_queue_listenerForMessage:(id)arg1;	// IMP=0x0000000100028bc8
- (void)_queue_handleMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100028b68
- (void)_queue_removeClient:(id)arg1;	// IMP=0x0000000100028840
- (void)_queue_addClientConnection:(id)arg1 forService:(id)arg2;	// IMP=0x00000001000284f8
- (void)handleIncomingConnection:(id)arg1 forService:(id)arg2;	// IMP=0x00000001000284a8
- (void)removeListener:(id)arg1;	// IMP=0x0000000100028250
- (void)addListener:(id)arg1;	// IMP=0x00000001000280e4
- (void)sendMessageToAllClientsHavingEntitlements:(CDStruct_4ae60f73)arg1 withPacker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027fb0
- (void)invalidateAssertion:(id)arg1;	// IMP=0x0000000100027ef0
@property(readonly, copy) NSString *description;
- (void)run;	// IMP=0x0000000100027de0
- (void)dealloc;	// IMP=0x0000000100027c48
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100027b0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

