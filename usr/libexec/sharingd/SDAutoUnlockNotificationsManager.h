//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockNotificationsManager : NSObject
{
    id _doubleClickListener;	// 8 = 0x8
    id _cancelListener;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    NSDictionary *_promptInfo;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_notificationTimer;	// 40 = 0x28
    CDUnknownBlockType _radarNotificationCompletion;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x00000001000946f8
@property(copy) CDUnknownBlockType radarNotificationCompletion; // @synthesize radarNotificationCompletion=_radarNotificationCompletion;
@property(retain) NSObject<OS_dispatch_source> *notificationTimer; // @synthesize notificationTimer=_notificationTimer;
@property(retain) NSDictionary *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;	// IMP=0x0000000100095080
- (void)invalidateNotificationTimer;	// IMP=0x0000000100094f38
- (void)restartNotificationTimer:(unsigned long long)arg1;	// IMP=0x0000000100094d44
- (void)dismissNotification;	// IMP=0x0000000100094d40
- (void)showFileRadarNotificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100094d3c
- (void)showSetupRetryNotificationWithDevice:(id)arg1;	// IMP=0x0000000100094d38
- (void)showMacUnlockedNotificationWithDuration:(id)arg1;	// IMP=0x0000000100094d34
- (void)showSuggestionNotificationWithDevice:(id)arg1;	// IMP=0x0000000100094d30
- (void)showUnlockedByDeviceNotificationWithDeviceID:(id)arg1;	// IMP=0x0000000100094c18
- (void)removeAuthorizationRequestNotification;	// IMP=0x0000000100094c14
- (void)showAuthorizationRequestNotificationWithDeviceID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100094c10
- (id)authPromptInfo;	// IMP=0x0000000100094af8
- (void)notifyObservers:(SEL)arg1;	// IMP=0x0000000100094930
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000948ac
- (void)addObserver:(id)arg1;	// IMP=0x0000000100094828
- (void)dealloc;	// IMP=0x00000001000947f4
- (id)init;	// IMP=0x0000000100094778

@end

