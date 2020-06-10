//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSBaseXPCServer.h>

@class NSObject;
@protocol BKSystemApplicationServerDelegate, OS_dispatch_queue;

@interface BKSystemApplicationServer : BSBaseXPCServer
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    _Bool _systemAppWasPreviouslyAlive;	// 24 = 0x18
    id <BKSystemApplicationServerDelegate> _delegate;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100052e00
@property(nonatomic) __weak id <BKSystemApplicationServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100053e38
- (void)_queue_handlePing:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100053da4
- (void)_queue_handleActions:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100053c20
- (void)_queue_handleRestart:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100053b48
- (void)_queue_handleFinishBooting:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100053a70
- (void)_queue_handleCheckIn:(id)arg1 forClient:(id)arg2;	// IMP=0x00000001000538a8
- (void)_queue_handleConnect:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100053690
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;	// IMP=0x00000001000534f0
- (void)queue_clientRemoved:(id)arg1;	// IMP=0x0000000100053418
- (void)queue_clientAdded:(id)arg1;	// IMP=0x0000000100053414
- (id)queue_newClientForConnection:(id)arg1;	// IMP=0x00000001000533ac
- (_Bool)queue_shouldAcceptNewConnection:(id)arg1;	// IMP=0x0000000100053398
- (_Bool)auditTokenRepresentsSystemApp:(CDStruct_6ad76789 *)arg1;	// IMP=0x0000000100053240
- (_Bool)pingSystemApp:(id)arg1;	// IMP=0x0000000100052f38
- (id)init;	// IMP=0x0000000100052eb0

@end

