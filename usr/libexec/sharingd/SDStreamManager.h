//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSNetServiceDelegate-Protocol.h"
#import "SDCompanionStreamDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSNetService, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface SDStreamManager : NSObject <NSNetServiceDelegate, SDCompanionStreamDelegate>
{
    NSString *_serviceType;	// 8 = 0x8
    NSNetService *_service;	// 16 = 0x10
    NSMutableDictionary *_managers;	// 24 = 0x18
    NSMutableArray *_companionServices;	// 32 = 0x20
    NSMutableArray *_incomingStreams;	// 40 = 0x28
    NSMutableDictionary *_continuationStreams;	// 48 = 0x30
    long long _connectedStreams;	// 56 = 0x38
    NSTimer *_publishTimer;	// 64 = 0x40
}

+ (id)sharedManager;	// IMP=0x000000010000d7ec
@property(retain) NSTimer *publishTimer; // @synthesize publishTimer=_publishTimer;
@property long long connectedStreams; // @synthesize connectedStreams=_connectedStreams;
@property(retain) NSMutableDictionary *continuationStreams; // @synthesize continuationStreams=_continuationStreams;
@property(retain) NSMutableArray *incomingStreams; // @synthesize incomingStreams=_incomingStreams;
@property(retain) NSMutableArray *companionServices; // @synthesize companionServices=_companionServices;
@property(retain) NSMutableDictionary *managers; // @synthesize managers=_managers;
@property(retain) NSNetService *service; // @synthesize service=_service;
@property(retain) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;	// IMP=0x000000010000fd24
- (void)companionStreamClosedStreams:(id)arg1;	// IMP=0x000000010000fb78
- (void)continuationStream:(id)arg1 connectedToService:(id)arg2 withFileHandle:(id)arg3 acceptHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000f864
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x000000010000f6c0
- (void)netServiceDidStop:(id)arg1;	// IMP=0x000000010000f654
- (void)netService:(id)arg1 didNotPublish:(id)arg2;	// IMP=0x000000010000f494
- (void)netServiceDidPublish:(id)arg1;	// IMP=0x000000010000f3dc
- (void)unregisterManager:(id)arg1;	// IMP=0x000000010000f384
- (void)registerManager:(id)arg1;	// IMP=0x000000010000f304
- (void)closeStreamsForIdentifier:(id)arg1;	// IMP=0x000000010000f26c
- (void)removeService:(id)arg1;	// IMP=0x000000010000f0f8
- (void)addService:(id)arg1;	// IMP=0x000000010000ef34
- (void)unpublish;	// IMP=0x000000010000ee30
- (void)publish;	// IMP=0x000000010000eba4
- (void)publishTimerFired:(id)arg1;	// IMP=0x000000010000eab8
- (void)restartPublishTimer;	// IMP=0x000000010000e9e4
- (void)unregisterConnectedStreams;	// IMP=0x000000010000e8c4
- (void)getContinuationStreamsForMessage:(id)arg1 bundleID:(id)arg2 usingID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000e148
- (void)registerConnectedStreams;	// IMP=0x000000010000e080
- (_Bool)servicesContainIdentifier:(id)arg1;	// IMP=0x000000010000df04
- (void)activityContinuationPayloadSent:(id)arg1;	// IMP=0x000000010000dc9c
- (void)debugInfoRequested:(id)arg1;	// IMP=0x000000010000db08
- (void)removeObservers;	// IMP=0x000000010000dab8
- (void)addObservers;	// IMP=0x000000010000da1c
- (void)dealloc;	// IMP=0x000000010000d9d0
- (id)initWithServiceType:(id)arg1;	// IMP=0x000000010000d878

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

