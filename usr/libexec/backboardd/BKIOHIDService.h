//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventSenderInfo-Protocol.h"
#import "BSDescriptionProviding-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface BKIOHIDService : NSObject <BKHIDEventSenderInfo, BSDescriptionProviding>
{
    struct __IOHIDNotification *_observerWorkQueue_removalNotification;
    NSMutableArray *_observerWorkQueue_disappearanceObservers;
    NSObject<OS_dispatch_queue> *_observerWorkQueue;
    BKIOHIDService *_strongSelf;
    _Bool _authenticated;
    _Bool _builtIn;
    int _eventSource;
    unsigned int _primaryUsagePage;
    unsigned int _primaryUsage;
    long long _serviceStatus;
    struct __IOHIDService *_IOHIDService;
    NSString *_displayUUID;
    unsigned long long _senderID;
}

@property(nonatomic, getter=isBuiltIn) _Bool builtIn; // @synthesize builtIn=_builtIn;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(nonatomic) unsigned int primaryUsage; // @synthesize primaryUsage=_primaryUsage;
@property(nonatomic) unsigned int primaryUsagePage; // @synthesize primaryUsagePage=_primaryUsagePage;
@property(nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
@property(nonatomic) int eventSource; // @synthesize eventSource=_eventSource;
@property(copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
@property(nonatomic) struct __IOHIDService *IOHIDService; // @synthesize IOHIDService=_IOHIDService;
@property(nonatomic) long long serviceStatus; // @synthesize serviceStatus=_serviceStatus;
- (void).cxx_destruct;
- (void)_serviceWasRemoved;
- (_Bool)_isProbablyHeadset;
- (_Bool)_isBluetoothRemote;
- (void)_observerWorkQueue_serviceWasRemoved;
- (void)_observerWorkQueue_stopIOServiceRemovalNotifications;
- (void)_observerWorkQueue_startIOServiceRemovalNotifications;
- (void)_observerWorkQueue_removeDisappearanceObserver:(id)arg1;
- (void)_observerWorkQueue_addDisappearanceObserver:(id)arg1 queue:(id)arg2;
- (id)disappearanceObservers;
- (void)removeDisappearanceObserver:(id)arg1;
- (void)addDisappearanceObserver:(id)arg1 queue:(id)arg2;
- (int)setElementValue:(unsigned int)arg1 forUsagePage:(unsigned int)arg2 usage:(unsigned int)arg3;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (_Bool)claimsToConformToUsagePage:(unsigned short)arg1 usage:(unsigned short)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithHIDServiceRef:(struct __IOHIDService *)arg1;
- (id)initForSimulatorWithDisplayUUID:(id)arg1;
- (id)initForTesting;
- (void)_coreInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
