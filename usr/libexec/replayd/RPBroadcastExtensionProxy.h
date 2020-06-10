//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPBroadcastDaemonProtocol-Protocol.h"
#import "RPBroadcastExtensionProtocol-Protocol.h"

@class NSExtension, NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;

@interface RPBroadcastExtensionProxy : NSObject <NSXPCListenerDelegate, RPBroadcastExtensionProtocol, RPBroadcastDaemonProtocol>
{
    CDUnknownBlockType _serviceInfoHandler;	// 8 = 0x8
    CDUnknownBlockType _broadcastURLHandler;	// 16 = 0x10
    CDUnknownBlockType _errorHandler;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
    NSExtension *_broadcastUploadExtension;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    CDUnknownBlockType _connectionReadyHandler;	// 56 = 0x38
    NSXPCListenerEndpoint *_listenerEndpoint;	// 64 = 0x40
}

@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(copy, nonatomic) CDUnknownBlockType connectionReadyHandler; // @synthesize connectionReadyHandler=_connectionReadyHandler;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSExtension *broadcastUploadExtension; // @synthesize broadcastUploadExtension=_broadcastUploadExtension;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType broadcastURLHandler; // @synthesize broadcastURLHandler=_broadcastURLHandler;
@property(copy, nonatomic) CDUnknownBlockType serviceInfoHandler; // @synthesize serviceInfoHandler=_serviceInfoHandler;
- (void).cxx_destruct;	// IMP=0x000000010000a0f0
- (void)processPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009d00
- (void)finishBroadcastWithError:(id)arg1;	// IMP=0x0000000100009c74
- (void)ping;	// IMP=0x0000000100009c04
- (void)updateBroadcastURL:(id)arg1;	// IMP=0x0000000100009b78
- (void)updateServiceInfo:(id)arg1;	// IMP=0x0000000100009aec
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000097b0
- (void)invalidateConnection;	// IMP=0x0000000100009680
- (void)establishConnectionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009188
- (id)initWithBroadcastUploadListenerEndpoint:(id)arg1;	// IMP=0x00000001000090c8
- (id)initWithBroadcastUploadExtension:(id)arg1;	// IMP=0x0000000100008fac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

