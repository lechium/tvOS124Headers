//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
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
    NSXPCListener *_xpcListener;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_queue;
    BKAlternateSystemAppManager *_alternateSystemAppManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) BKAlternateSystemAppManager *alternateSystemAppManager; // @synthesize alternateSystemAppManager=_alternateSystemAppManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void).cxx_destruct;
- (void)terminateAlternateSystemAppWithBundleID:(id)arg1;
- (void)openAlternateSystemAppWithBundleID:(id)arg1;
- (void)unblockSystemAppForAlternateSystemApp;
- (void)blockSystemAppForAlternateSystemApp;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)_queue_listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_handleInterruptedOrInvalidatedConnection;
- (void)run;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
