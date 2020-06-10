//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKApplicationStateService, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BKApplicationStateServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_clientConnection;	// 24 = 0x18
    NSMutableSet *_clients;	// 32 = 0x20
    _Bool _connectionResumed;	// 40 = 0x28
    _Bool _usesAnonymousConnection;	// 41 = 0x29
    BKApplicationStateService *_stateService;	// 48 = 0x30
    id _workspaceServerManager;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000001000236e4
@property(retain, nonatomic) id workspaceServerManager; // @synthesize workspaceServerManager=_workspaceServerManager;
@property(retain, nonatomic) BKApplicationStateService *stateService; // @synthesize stateService=_stateService;
@property(nonatomic, getter=usesAnonymousConnection) _Bool usesAnonymousConnection; // @synthesize usesAnonymousConnection=_usesAnonymousConnection;
- (id)_copyEndpoint;	// IMP=0x000000010002627c
- (void)processAssertionsChanged:(id)arg1 forAssertion:(id)arg2 because:(int)arg3;	// IMP=0x0000000100025e40
- (void)processStateChanged:(id)arg1;	// IMP=0x0000000100025a98
- (void)distributeNotification:(id)arg1 toClientsWho:(CDUnknownBlockType)arg2;	// IMP=0x000000010002556c
- (id)_clients;	// IMP=0x0000000100025474
- (id)_connection;	// IMP=0x0000000100025388
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;	// IMP=0x0000000100025350
- (void)_sendReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025274
- (void)_handleRetrieveBundleInfoForKey:(id)arg1;	// IMP=0x0000000100025054
- (void)_handleIsApplicationBeingDebugged:(id)arg1;	// IMP=0x0000000100024f88
- (void)_handleMostElevatedApplicationStateForPID:(id)arg1;	// IMP=0x0000000100024ec4
- (void)_handleApplicationStateForApplication:(id)arg1;	// IMP=0x0000000100024df8
- (void)_handleApplicationInfoForProcessID:(id)arg1;	// IMP=0x0000000100024d14
- (void)_handleRetrieveDescriptionForSubsystem:(id)arg1;	// IMP=0x0000000100024a6c
- (void)_handleApplicationInfoForApplication:(id)arg1;	// IMP=0x0000000100024980
- (void)_handleInterestedNotificationsChanged:(id)arg1;	// IMP=0x0000000100024684
- (void)_handleConnect:(id)arg1;	// IMP=0x0000000100024680
- (void)_handleMessage:(id)arg1;	// IMP=0x0000000100024594
- (id)_clientForConnection:(id)arg1;	// IMP=0x0000000100024464
- (void)_removeClientConnection:(id)arg1;	// IMP=0x0000000100024320
- (void)_addClientConnection:(id)arg1;	// IMP=0x0000000100023d10
- (void)resumeServer;	// IMP=0x0000000100023b6c
- (void)registerServerSuspended;	// IMP=0x0000000100023988
- (void)_invalidate;	// IMP=0x0000000100023938
- (void)dealloc;	// IMP=0x0000000100023878
- (id)init;	// IMP=0x000000010002375c

@end
