//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKIOHIDServiceDisappearanceObserver-Protocol.h"
#import "BKIOHIDServiceMatchObserver-Protocol.h"

@class BKIOHIDServiceMatcher, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BKHumanPresenceHIDEventProcessor : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServiceDisappearanceObserver>
{
    NSMutableDictionary *_queue_displayUUIDToSensorRecords;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BKIOHIDServiceMatcher *_presenceServiceMatcher;	// 24 = 0x18
    BKIOHIDServiceMatcher *_proximityServiceMatcher;	// 32 = 0x20
}

@property(retain, nonatomic) BKIOHIDServiceMatcher *proximityServiceMatcher; // @synthesize proximityServiceMatcher=_proximityServiceMatcher;
@property(retain, nonatomic) BKIOHIDServiceMatcher *presenceServiceMatcher; // @synthesize presenceServiceMatcher=_presenceServiceMatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *displayUUIDToSensorRecords; // @synthesize displayUUIDToSensorRecords=_queue_displayUUIDToSensorRecords;
- (void).cxx_destruct;	// IMP=0x0000000100036d54
- (_Bool)filterEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x00000001000369ec
- (void)getStatus:(unsigned long long *)arg1 presence:(_Bool *)arg2 proximityInCentimeters:(double *)arg3 forDisplayUUID:(id)arg4;	// IMP=0x0000000100036848
- (void)_setPresence:(_Bool)arg1 forDisplayUUID:(id)arg2;	// IMP=0x0000000100036690
- (void)_setProximityInCentimeters:(double)arg1 forDisplayUUID:(id)arg2;	// IMP=0x00000001000364d8
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x0000000100036310
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x0000000100036010
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100035f10
- (id)init;	// IMP=0x0000000100035d74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

