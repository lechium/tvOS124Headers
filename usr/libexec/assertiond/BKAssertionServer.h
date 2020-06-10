//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKAssertionServerMultiplexer, BKProcessAssertionServerListener, BKTerminationAssertionServerListener;
@protocol OS_dispatch_queue;

@interface BKAssertionServer : NSObject
{
    BKAssertionServerMultiplexer *_multiplexer;	// 8 = 0x8
    BKProcessAssertionServerListener *_processAssertionListener;	// 16 = 0x10
    BKTerminationAssertionServerListener *_terminationAssertionListener;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010002f2e8
- (id)multiplexer;	// IMP=0x000000010002f618
- (void)terminationAssertionEfficacyForBundleIdentifier:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002f600
- (void)sendMessageToAllClientsHavingEntitlements:(CDStruct_4ae60f73)arg1 withPacker:(CDUnknownBlockType)arg2;	// IMP=0x000000010002f5e4
- (void)invalidateAssertion:(id)arg1;	// IMP=0x000000010002f5cc
- (void)run;	// IMP=0x000000010002f5b4
- (void)dealloc;	// IMP=0x000000010002f4ac
- (id)init;	// IMP=0x000000010002f360

@end

