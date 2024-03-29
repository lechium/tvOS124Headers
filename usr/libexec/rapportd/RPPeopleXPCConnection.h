//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPPeopleXPCDaemonInterface-Protocol.h"

@class NSXPCConnection, RPPeopleDaemon, RPPeopleDiscovery;
@protocol OS_dispatch_queue;

@interface RPPeopleXPCConnection : NSObject <RPPeopleXPCDaemonInterface>
{
    struct NSMutableDictionary *_discoveredDevices;	// 8 = 0x8
    struct NSMutableDictionary *_discoveredPeople;	// 16 = 0x10
    unsigned int _discoveryDeviceFlags;	// 24 = 0x18
    _Bool _entitled;	// 28 = 0x1c
    RPPeopleDiscovery *_activatedDiscovery;	// 32 = 0x20
    RPPeopleDaemon *_daemon;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    NSXPCConnection *_xpcCnx;	// 56 = 0x38
}

@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) RPPeopleDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) RPPeopleDiscovery *activatedDiscovery; // @synthesize activatedDiscovery=_activatedDiscovery;
- (void).cxx_destruct;	// IMP=0x0000000100048a7c
- (void)xpcPeopleDiscoveryUpdate:(id)arg1;	// IMP=0x00000001000487ec
- (void)xpcPeopleDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100048418
- (void)xpcPeopleRemoveAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100048364
- (void)xpcPeopleAddAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100048284
- (void)clientDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0000000100047fac
- (void)clientDeviceLost:(id)arg1;	// IMP=0x0000000100047bd8
- (void)clientDeviceFound:(id)arg1 report:(_Bool)arg2;	// IMP=0x000000010004776c
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x00000001000475e0
- (void)connectionInvalidated;	// IMP=0x00000001000474c4
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x0000000100047400

@end

