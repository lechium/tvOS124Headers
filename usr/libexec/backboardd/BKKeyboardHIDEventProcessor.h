//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKGestureRecognizerDelegate-Protocol.h"
#import "BKIOHIDServiceDisappearanceObserver-Protocol.h"
#import "BKIOHIDServiceMatchObserver-Protocol.h"

@class BKHIDEventRouterManager, BKIOHIDServiceMatcher, BKKeyboardInfo, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface BKKeyboardHIDEventProcessor : NSObject <BKGestureRecognizerDelegate, BKIOHIDServiceMatchObserver, BKIOHIDServiceDisappearanceObserver>
{
    NSMutableArray *_allKeyboards;	// 8 = 0x8
    NSMutableArray *_usableKeyboards;	// 16 = 0x10
    NSMutableArray *_gestureRecognizers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSString *_keyboardLayout;	// 40 = 0x28
    long long _countOfKeyboardsRequiringAllSmartCoverHESDisengagedForOpen;	// 48 = 0x30
    _Bool _systemAppConsumesAllKeyboardEvents;	// 56 = 0x38
    BKIOHIDServiceMatcher *_keyboardServiceMatcher;	// 64 = 0x40
    BKHIDEventRouterManager *_eventRouterManager;	// 72 = 0x48
    BKKeyboardInfo *_primaryKeyboardInfo;	// 80 = 0x50
}

@property(nonatomic) _Bool systemAppConsumesAllKeyboardEvents; // @synthesize systemAppConsumesAllKeyboardEvents=_systemAppConsumesAllKeyboardEvents;
@property(retain, nonatomic) BKKeyboardInfo *primaryKeyboardInfo; // @synthesize primaryKeyboardInfo=_primaryKeyboardInfo;
@property(retain, nonatomic) BKHIDEventRouterManager *eventRouterManager; // @synthesize eventRouterManager=_eventRouterManager;
@property(retain, nonatomic) BKIOHIDServiceMatcher *keyboardServiceMatcher; // @synthesize keyboardServiceMatcher=_keyboardServiceMatcher;
- (void).cxx_destruct;	// IMP=0x000000010003de8c
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x000000010003dcdc
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x000000010003dbd4
- (void)gestureRecognizer:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x000000010003d9ac
- (void)_queue_stopWatchingForGestures:(id)arg1;	// IMP=0x000000010003d7e4
- (void)_queue_watchForGestures:(id)arg1;	// IMP=0x000000010003d6e4
- (void)_queue_handleKeyEvent:(struct __IOHIDEvent *)arg1 buttonEvent:(id)arg2 fromSender:(id)arg3;	// IMP=0x000000010003ce2c
- (void)_queue_handleUnicodeEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x000000010003cb28
- (id)_queue_destinationsForEvent:(struct __IOHIDEvent *)arg1 keyboard:(id)arg2 isUnicodeEvent:(_Bool)arg3 displayUUID:(id)arg4;	// IMP=0x000000010003c730
- (void)_queue_usableKeyboardDetached:(id)arg1;	// IMP=0x000000010003c5b8
- (void)_queue_usableKeyboardAttached:(id)arg1;	// IMP=0x000000010003c49c
- (void)_queue_setPrimaryKeyboard:(id)arg1;	// IMP=0x000000010003c2e8
- (void)_queue_keyboardRemoved:(id)arg1;	// IMP=0x000000010003bf3c
- (void)_queue_keyboardsDetected:(id)arg1;	// IMP=0x000000010003b85c
- (void)_queue_setKeyboardLightsSuspended:(_Bool)arg1;	// IMP=0x000000010003b710
- (id)_queue_keyboardInfoForSenderID:(unsigned long long)arg1;	// IMP=0x000000010003b594
@property(readonly) _Bool capsLockKeyHasLanguageSwitchLabel;
@property(getter=isCapsLockLightOn) _Bool capsLockLightOn;
- (void)setRomanCapsLockSwitchModeActive:(_Bool)arg1;	// IMP=0x000000010003b354
- (id)primaryHardwareKeyboardLanguage;	// IMP=0x000000010003b224
@property(retain) NSString *keyboardLayout;
- (void)setKeyboardLightsSupended:(_Bool)arg1;	// IMP=0x000000010003af94
- (void)handleKeyboardEvent:(struct __IOHIDEvent *)arg1 buttonEvent:(id)arg2 fromSender:(id)arg3;	// IMP=0x000000010003ae18
- (void)handleUnicodeEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x000000010003ad68
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x000000010003abbc
- (id)init;	// IMP=0x000000010003a8b0

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

