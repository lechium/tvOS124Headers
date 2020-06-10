//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSTouchDeliveryPolicyServerInterface-Protocol.h"
#import "NSXPCConnectionDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class BKSTouchDeliveryPolicy, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BKTouchDeliveryPolicyServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, BKSTouchDeliveryPolicyServerInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableSet *_assertionConnections;
    BKSTouchDeliveryPolicy *_policy;
}

+ (id)sharedServer;
@property(retain, setter=_queue_setPolicy:) BKSTouchDeliveryPolicy *_policy; // @synthesize _policy;
- (void).cxx_destruct;
- (_Bool)shouldCancelTouchesDeliveredToContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
- (id)shouldDeliverTouchesToContextIds:(unsigned int *)arg1 count:(long long)arg2;
- (void)ipc_addPolicy:(id)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)run;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

