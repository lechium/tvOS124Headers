//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKEventClientDelegate-Protocol.h"

@class BKEventFocusManagerServer, BSMutableIntegerMap, NSString;
@protocol OS_dispatch_queue;

@interface BKEventFocusManager : NSObject <BKEventClientDelegate>
{
    NSObject<OS_dispatch_queue> *_clientQueue;	// 8 = 0x8
    BSMutableIntegerMap *_pidToClientMapping;	// 16 = 0x10
    NSString *_foregroundAppBundleID;	// 24 = 0x18
    int _foregroundAppPID;	// 32 = 0x20
    _Bool _systemAppControlsFocusOnMainDisplay;	// 36 = 0x24
    BKEventFocusManagerServer *_focusServer;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010005f5f8
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;	// IMP=0x000000010006211c
- (void)clientDied:(id)arg1;	// IMP=0x0000000100061ff4
- (void)_noteSystemAppDidExit:(id)arg1;	// IMP=0x0000000100061fe0
- (id)focusServer;	// IMP=0x0000000100061fd0
- (id)_clientWithPid:(int)arg1 clientID:(id)arg2;	// IMP=0x0000000100061e04
- (void)_removeClient:(id)arg1;	// IMP=0x0000000100061d04
- (void)_addClient:(id)arg1;	// IMP=0x0000000100061c90
- (void)addClient:(id)arg1;	// IMP=0x0000000100061bf4
- (id)_startingPointOfFocusChainOnDisplay:(id)arg1;	// IMP=0x0000000100061a8c
- (id)_propertiesWithFocusStartingWithProperties:(id)arg1 depth:(long long)arg2 iterationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000616c4
- (void)_visitFocusClient:(id)arg1 propertyStack:(id)arg2 didEncounterCycleWithProperties:(id)arg3;	// IMP=0x00000001000616c0
- (void)_visitFocusClient:(id)arg1 propertyStack:(id)arg2 currentDeferralProperties:(id)arg3;	// IMP=0x00000001000616bc
- (id)_propertiesWithFocusStartingWithProperties:(id)arg1;	// IMP=0x0000000100061644
- (void)_updateDeferralPropertiesForAllDisplays;	// IMP=0x0000000100061428
- (id)destinationsForFocusedKeyCommandDescriptor:(id)arg1 withDisplay:(id)arg2;	// IMP=0x0000000100060ebc
- (void)addUniqueDestinationToSet:(id)arg1 destination:(id)arg2;	// IMP=0x0000000100060ce0
- (id)destinationForSystemApplicationWithDisplay:(id)arg1;	// IMP=0x0000000100060a08
- (id)destinationForFocusedEventWithDisplay:(id)arg1;	// IMP=0x0000000100060888
- (id)_focusPropertiesWithDisplay:(id)arg1;	// IMP=0x000000010006078c
- (id)destinationForFocusedEventWithProperties:(id)arg1;	// IMP=0x00000001000605c4
- (id)_destinationForFocusDeferralProperties:(id)arg1 display:(id)arg2 applyPolicy:(_Bool)arg3;	// IMP=0x000000010006031c
- (void)setDeferrals:(id)arg1 forClient:(id)arg2 pid:(int)arg3;	// IMP=0x000000010005ffe8
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;	// IMP=0x000000010005fde8
- (void)systemAppControlsFocusOnMainDisplay:(_Bool)arg1;	// IMP=0x000000010005fcf4
- (id)conciseDescription;	// IMP=0x000000010005f908
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000010005f678

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

