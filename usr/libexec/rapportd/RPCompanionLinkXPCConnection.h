//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPCompanionLinkXPCServerInterface-Protocol.h"

@class CUBonjourDevice, NSMutableDictionary, NSMutableSet, NSXPCConnection, RPCompanionLinkClient, RPCompanionLinkDaemon, RPCompanionLinkDevice, RPConnection, RPDiscovery, RPServer, RPSession;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface RPCompanionLinkXPCConnection : NSObject <RPCompanionLinkXPCServerInterface>
{
    _Bool _entitled;	// 8 = 0x8
    _Bool _localDeviceUpdated;	// 9 = 0x9
    _Bool _needsCLink;	// 10 = 0xa
    unsigned int _xpcID;	// 12 = 0xc
    CUBonjourDevice *_bonjourDevice;	// 16 = 0x10
    RPCompanionLinkClient *_client;	// 24 = 0x18
    RPCompanionLinkDaemon *_daemon;	// 32 = 0x20
    RPCompanionLinkDevice *_daemonDevice;	// 40 = 0x28
    struct NSMutableDictionary *_devices;	// 48 = 0x30
    RPDiscovery *_discoveryClient;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_discoveryTimer;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 72 = 0x48
    RPConnection *_netCnx;	// 80 = 0x50
    struct NSMutableDictionary *_registeredEvents;	// 88 = 0x58
    NSMutableSet *_registeredProfileIDs;	// 96 = 0x60
    struct NSMutableDictionary *_registeredRequests;	// 104 = 0x68
    NSObject<OS_os_transaction> *_osTransaction;	// 112 = 0x70
    RPServer *_server;	// 120 = 0x78
    RPSession *_session;	// 128 = 0x80
    unsigned long long _startTicks;	// 136 = 0x88
    NSXPCConnection *_xpcCnx;	// 144 = 0x90
}

@property(nonatomic) unsigned int xpcID; // @synthesize xpcID=_xpcID;
@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(nonatomic) unsigned long long startTicks; // @synthesize startTicks=_startTicks;
@property(retain, nonatomic) RPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) RPServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(readonly, nonatomic) NSMutableDictionary *registeredRequests; // @synthesize registeredRequests=_registeredRequests;
@property(readonly, nonatomic) NSMutableSet *registeredProfileIDs; // @synthesize registeredProfileIDs=_registeredProfileIDs;
@property(readonly, nonatomic) NSMutableDictionary *registeredEvents; // @synthesize registeredEvents=_registeredEvents;
@property(retain, nonatomic) RPConnection *netCnx; // @synthesize netCnx=_netCnx;
@property(nonatomic) _Bool needsCLink; // @synthesize needsCLink=_needsCLink;
@property(nonatomic) _Bool localDeviceUpdated; // @synthesize localDeviceUpdated=_localDeviceUpdated;
@property(readonly, nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *discoveryTimer; // @synthesize discoveryTimer=_discoveryTimer;
@property(retain, nonatomic) RPDiscovery *discoveryClient; // @synthesize discoveryClient=_discoveryClient;
@property(readonly, nonatomic) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) RPCompanionLinkDevice *daemonDevice; // @synthesize daemonDevice=_daemonDevice;
@property(readonly, nonatomic) RPCompanionLinkDaemon *daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
@property(retain, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
- (void).cxx_destruct;	// IMP=0x000000010002bb78
- (void)xpcSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b7e4
- (void)xpcServerActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b24c
- (void)xpcDiscoveryUpdate:(id)arg1;	// IMP=0x000000010002b184
- (void)xpcDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b030
- (void)companionLinkTryPassword:(id)arg1;	// IMP=0x000000010002af28
- (void)companionLinkSendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010002acbc
- (void)companionLinkDeregisterRequestID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002abf0
- (void)companionLinkRegisterRequestID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002aabc
- (void)companionLinkDeregisterProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a948
- (void)companionLinkRegisterProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a670
- (void)companionLinkSendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010002a424
- (void)companionLinkDeregisterEventID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a280
- (void)companionLinkRegisterEventID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029fc4
- (void)companionLinkUpdateClient:(id)arg1;	// IMP=0x0000000100029c40
- (void)companionLinkActivateClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028ebc
- (void)companionLinkInvalidateAssertion:(id)arg1;	// IMP=0x0000000100028eb8
- (void)companionLinkActivateAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028ea0
- (void)reportChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0000000100028c90
- (void)reportLostDevice:(id)arg1;	// IMP=0x0000000100028b14
- (void)reportFoundDevice:(id)arg1;	// IMP=0x0000000100028988
- (void)promptForPasswordType:(int)arg1 flags:(unsigned int)arg2 throttleSeconds:(int)arg3;	// IMP=0x0000000100028890
- (void)authCompletion:(id)arg1;	// IMP=0x00000001000287cc
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x0000000100028640
- (void)connectionInvalidated;	// IMP=0x0000000100027e60
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x0000000100027d8c

@end
