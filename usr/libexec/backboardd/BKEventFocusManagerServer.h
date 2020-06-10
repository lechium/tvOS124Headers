//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
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
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    BSMutableIntegerMap *_remoteFocusObservers;
    BSIntegerMap *_cachedDeferralProperties;
    NSMutableSet *_remoteTouchObservers;
}

- (void).cxx_destruct;
- (void)noteTouchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3 observers:(id)arg4;
- (void)noteTouchUpOccuredForIdentifier:(unsigned int)arg1 detached:(_Bool)arg2 context:(unsigned int)arg3 pid:(int)arg4 observers:(id)arg5;
- (void)evaluateUpdatedDeferralPropertiesForProperties:(id)arg1;
- (id)_propertiesGroupedByPidForProperties:(id)arg1;
- (void)run;
- (void)setObservesTouchDelivery:(_Bool)arg1 forTouchIdentifier:(unsigned int)arg2;
- (void)setObservesFocusDeferralChanges:(_Bool)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

