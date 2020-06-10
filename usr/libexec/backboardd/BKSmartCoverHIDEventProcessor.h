//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventProcessor-Protocol.h"

@class BKHIDSystemInterface, NSString;

@interface BKSmartCoverHIDEventProcessor : NSObject <BKHIDEventProcessor>
{
    _Bool _attachedCoverRequiresWorkaroundForOpenState;
    _Bool _attached;
    _Bool _unknownState;
    BKHIDSystemInterface *_hidSystemInterface;
    unsigned long long _supportedSensors;
    unsigned long long _disengagedSensors;
    unsigned long long _sensorsRequiredForOpenState;
    unsigned long long _sensorsRequiredForAmbiguousState;
    long long _state;
}

+ (_Bool)isSmartCoverSupported;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic, getter=isUnknownState) _Bool unknownState; // @synthesize unknownState=_unknownState;
@property(nonatomic, getter=isAttached) _Bool attached; // @synthesize attached=_attached;
@property(nonatomic) unsigned long long sensorsRequiredForAmbiguousState; // @synthesize sensorsRequiredForAmbiguousState=_sensorsRequiredForAmbiguousState;
@property(nonatomic) unsigned long long sensorsRequiredForOpenState; // @synthesize sensorsRequiredForOpenState=_sensorsRequiredForOpenState;
@property(nonatomic) unsigned long long disengagedSensors; // @synthesize disengagedSensors=_disengagedSensors;
@property(nonatomic) unsigned long long supportedSensors; // @synthesize supportedSensors=_supportedSensors;
@property(retain, nonatomic) BKHIDSystemInterface *hidSystemInterface; // @synthesize hidSystemInterface=_hidSystemInterface;
@property(nonatomic) _Bool attachedCoverRequiresWorkaroundForOpenState; // @synthesize attachedCoverRequiresWorkaroundForOpenState=_attachedCoverRequiresWorkaroundForOpenState;
- (void).cxx_destruct;
- (long long)processEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 dispatcher:(id)arg3;
@property(readonly, nonatomic, getter=isSmartCoverClosed) _Bool smartCoverClosed;
- (int)_smartCoverSensorsDidDisengage:(unsigned long long)arg1;
- (int)_smartCoverSensorsDidEngage:(unsigned long long)arg1;
- (id)initWithHIDSystemInterface:(id)arg1;
- (unsigned long long)_currentMaskForUsage:(unsigned int)arg1 HIDSystem:(id)arg2 mask:(unsigned long long *)arg3 maskIfEngaged:(unsigned long long *)arg4;
- (id)initWithHIDSystemInterface:(id)arg1 supportedHES:(unsigned long long)arg2 disengagedHES:(unsigned long long)arg3 attached:(_Bool)arg4 unknownState:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
