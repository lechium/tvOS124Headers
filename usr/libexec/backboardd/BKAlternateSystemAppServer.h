//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSAlternateSystemAppServerProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class BKAlternateSystemAppManager, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BKAlternateSystemAppServer : NSObject <NSXPCListenerDelegate, BKSAlternateSystemAppServerProtocol>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    NSXPCConnection *_clientConnection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    BKAlternateSystemAppManager *_alternateSystemAppManager;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000512c8
@property(retain, nonatomic) BKAlternateSystemAppManager *alternateSystemAppManager; // @synthesize alternateSystemAppManager=_alternateSystemAppManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void).cxx_destruct;	// IMP=0x0000000100052880
- (void)terminateAlternateSystemAppWithBundleID:(id)arg1;	// IMP=0x0000000100052544
- (void)openAlternateSystemAppWithBundleID:(id)arg1;	// IMP=0x0000000100051f24
- (void)unblockSystemAppForAlternateSystemApp;	// IMP=0x0000000100051d40
- (void)blockSystemAppForAlternateSystemApp;	// IMP=0x0000000100051b7c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000519ac
- (_Bool)_queue_listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100051588
- (void)_handleInterruptedOrInvalidatedConnection;	// IMP=0x00000001000514c8
- (void)run;	// IMP=0x00000001000514b0
- (void)dealloc;	// IMP=0x0000000100051458
- (id)init;	// IMP=0x0000000100051348

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

