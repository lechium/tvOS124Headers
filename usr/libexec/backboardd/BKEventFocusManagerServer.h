//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKEventFocusManagerServerInterface-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class BSIntegerMap, BSMutableIntegerMap, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BKEventFocusManagerServer : NSObject <NSXPCListenerDelegate, BKEventFocusManagerServerInterface>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    BSMutableIntegerMap *_remoteFocusObservers;	// 24 = 0x18
    BSIntegerMap *_cachedDeferralProperties;	// 32 = 0x20
    NSMutableSet *_remoteTouchObservers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100055a38
- (void)noteTouchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3 observers:(id)arg4;	// IMP=0x0000000100055788
- (void)noteTouchUpOccuredForIdentifier:(unsigned int)arg1 detached:(_Bool)arg2 context:(unsigned int)arg3 pid:(int)arg4 observers:(id)arg5;	// IMP=0x00000001000554c8
- (void)evaluateUpdatedDeferralPropertiesForProperties:(id)arg1;	// IMP=0x0000000100055098
- (id)_propertiesGroupedByPidForProperties:(id)arg1;	// IMP=0x0000000100054ed8
- (void)run;	// IMP=0x0000000100054ec0
- (void)setObservesTouchDelivery:(_Bool)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x0000000100054c6c
- (void)setObservesFocusDeferralChanges:(_Bool)arg1;	// IMP=0x0000000100054a58
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100054738
- (void)dealloc;	// IMP=0x00000001000546e0
- (id)init;	// IMP=0x0000000100054594

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

