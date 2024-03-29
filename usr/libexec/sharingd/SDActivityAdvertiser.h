//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDActivityController.h"

#import "IDSContinuityDelegate-Protocol.h"
#import "SFActivityAdvertiserProtocol-Protocol.h"

@class IDSContinuity, NSData, NSDictionary, NSString, NSTimer, SDStatusMonitor;

__attribute__((visibility("hidden")))
@interface SDActivityAdvertiser : SDActivityController <IDSContinuityDelegate, SFActivityAdvertiserProtocol>
{
    unsigned char _versionByte;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    IDSContinuity *_continuity;	// 24 = 0x18
    double _goodbyeTimerInterval;	// 32 = 0x20
    NSTimer *_goodbyeTimer;	// 40 = 0x28
    _Bool _advertisingEnabled;	// 48 = 0x30
    _Bool _isAdvertising;	// 49 = 0x31
    NSData *_rawAdvertisementData;	// 56 = 0x38
    NSData *_advertisementData;	// 64 = 0x40
    unsigned int _powerAssertionID;	// 72 = 0x48
    NSData *_currentAdvertisementPayload;	// 80 = 0x50
    NSDictionary *_currentAdvertisementOptions;	// 88 = 0x58
    CDUnknownBlockType _currentErrorHandler;	// 96 = 0x60
}

+ (id)sharedAdvertiser;	// IMP=0x0000000100032a18
- (void).cxx_destruct;	// IMP=0x0000000100035e5c
- (void)pairedSFPeerDevicesWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035a94
- (void)peerForUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035880
- (void)loginIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035780
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2 withErrorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000352a4
- (void)continuity:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;	// IMP=0x0000000100035158
- (void)continuity:(id)arg1 didStopAdvertisingOfType:(long long)arg2;	// IMP=0x0000000100035080
- (void)continuity:(id)arg1 didStartAdvertisingOfType:(long long)arg2;	// IMP=0x0000000100034fa4
- (void)continuityDidUpdateState:(id)arg1;	// IMP=0x0000000100034d30
- (id)encryptedAdvertisingInformation;	// IMP=0x0000000100034ab4
- (id)createAdvertisingInformation;	// IMP=0x0000000100034888
- (_Bool)updateAdvertiser;	// IMP=0x0000000100034820
- (void)goodbyeTimeoutFired:(id)arg1;	// IMP=0x000000010003471c
- (void)invalidateGoodbyeTimer;	// IMP=0x0000000100034618
- (void)startGoodbyeTimer;	// IMP=0x000000010003445c
- (void)releaseIdleSleepAssertion;	// IMP=0x00000001000343c8
- (void)preventIdleSleepAssertion;	// IMP=0x00000001000341e8
- (void)consoleUserChanged:(id)arg1;	// IMP=0x0000000100034114
- (void)systemWillSleep:(id)arg1;	// IMP=0x000000010003405c
- (void)resetStateRequested:(id)arg1;	// IMP=0x0000000100034050
- (void)removeObservers;	// IMP=0x0000000100034000
- (void)addObservers;	// IMP=0x0000000100033f64
@property(readonly) NSString *state;
- (void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100033afc
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3;	// IMP=0x00000001000339dc
- (void)connectionInvalidated:(id)arg1;	// IMP=0x000000010003391c
- (void)connectionEstablished:(id)arg1;	// IMP=0x00000001000338b0
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000338a8
- (id)remoteObjectInterface;	// IMP=0x0000000100033718
- (id)exportedInterface;	// IMP=0x0000000100033508
- (id)machServiceName;	// IMP=0x00000001000334dc
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000334d0
- (void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100033480
- (void)activityServiceDevicesChanged:(id)arg1;	// IMP=0x0000000100033128
- (void)stop;	// IMP=0x00000001000330ac
- (_Bool)restart;	// IMP=0x0000000100032c98
- (void)start;	// IMP=0x0000000100032c94
- (id)init;	// IMP=0x0000000100032ae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

