//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSystemApp.h"

#import "FBSceneManagerDelegate.h"
#import "FBSceneManagerObserver.h"
#import "PBSBulletinServiceDelegate.h"
#import "PBSPowerManagerDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, PBBulletinService, PBKioskAppConfiguration, PBSBulletin, PBSUserActivityTrigger;

@interface PBApplication : FBSystemApp <FBSceneManagerDelegate, FBSceneManagerObserver, PBSBulletinServiceDelegate, PBSPowerManagerDelegate>
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    PBSBulletin *_networkBulletin;	// 16 = 0x10
    PBSBulletin *_sysdiagnoseBulletin;	// 24 = 0x18
    PBSBulletin *_screenshotCapturedBulletin;	// 32 = 0x20
    NSMutableSet *_clientsWantingIdleTimerDisabled;	// 40 = 0x28
    _Bool _needsAdjustToDisplayChange;	// 48 = 0x30
    _Bool _needsUpdateActivityTriggersAndBackgroundTasks;	// 49 = 0x31
    _Bool _inhibitScreenSaver;	// 50 = 0x32
    _Bool _processingIgnorableEventDuringSleep;	// 51 = 0x33
    _Bool _wakeForHIDEvents;	// 52 = 0x34
    _Bool _processingSysdiagnoseViaChord;	// 53 = 0x35
    NSMutableArray *_enqueuedEvents;	// 56 = 0x38
    _Bool _airPlayActive;	// 64 = 0x40
    NSTimer *_bluetoothRemoteKeepAliveTimer;	// 72 = 0x48
    PBSUserActivityTrigger *_remotePresenceDetectionTrigger;	// 80 = 0x50
    PBSUserActivityTrigger *_hiliteModeTrigger;	// 88 = 0x58
    PBSUserActivityTrigger *_screenSaverTrigger;	// 96 = 0x60
    PBSUserActivityTrigger *_sleepTrigger;	// 104 = 0x68
    PBSUserActivityTrigger *_bluetoothRemoteSleepTrigger;	// 112 = 0x70
    PBSUserActivityTrigger *_idleTypeBackgroundTasksTrigger;	// 120 = 0x78
    PBSUserActivityTrigger *_crdAppTrigger;	// 128 = 0x80
    NSMutableDictionary *_appActivateInfoByBundleIdentifier;	// 136 = 0x88
    NSTimer *_suppressWakeForHIDEventsTimer;	// 144 = 0x90
    PBKioskAppConfiguration *_kioskAppConfiguration;	// 152 = 0x98
}

+ (id)_newApplicationLibrary;	// IMP=0x000000010000ae9c
+ (id)sharedApplicationLibrary;	// IMP=0x000000010000ae68
+ (id)sharedApplication;	// IMP=0x00000001000094b8
+ (double)systemIdleSleepInterval;	// IMP=0x00000001000094b0
+ (id)keyPathsForValuesAffectingKioskAppIdentifier;	// IMP=0x0000000100009484
@property(copy, nonatomic) PBKioskAppConfiguration *kioskAppConfiguration; // @synthesize kioskAppConfiguration=_kioskAppConfiguration;
@property(retain, nonatomic) NSTimer *suppressWakeForHIDEventsTimer; // @synthesize suppressWakeForHIDEventsTimer=_suppressWakeForHIDEventsTimer;
@property(retain, nonatomic) NSMutableDictionary *appActivateInfoByBundleIdentifier; // @synthesize appActivateInfoByBundleIdentifier=_appActivateInfoByBundleIdentifier;
@property(retain, nonatomic) PBSUserActivityTrigger *crdAppTrigger; // @synthesize crdAppTrigger=_crdAppTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *idleTypeBackgroundTasksTrigger; // @synthesize idleTypeBackgroundTasksTrigger=_idleTypeBackgroundTasksTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *bluetoothRemoteSleepTrigger; // @synthesize bluetoothRemoteSleepTrigger=_bluetoothRemoteSleepTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *sleepTrigger; // @synthesize sleepTrigger=_sleepTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *screenSaverTrigger; // @synthesize screenSaverTrigger=_screenSaverTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *hiliteModeTrigger; // @synthesize hiliteModeTrigger=_hiliteModeTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *remotePresenceDetectionTrigger; // @synthesize remotePresenceDetectionTrigger=_remotePresenceDetectionTrigger;
@property(retain, nonatomic) NSTimer *bluetoothRemoteKeepAliveTimer; // @synthesize bluetoothRemoteKeepAliveTimer=_bluetoothRemoteKeepAliveTimer;
@property(nonatomic) _Bool airPlayActive; // @synthesize airPlayActive=_airPlayActive;
- (void).cxx_destruct;	// IMP=0x0000000100015b40
- (void)activateAppSwitcher;	// IMP=0x0000000100015940
- (id)appSwitcherWindow;	// IMP=0x00000001000158c4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100015680
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00000001000155d4
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;	// IMP=0x0000000100015544
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;	// IMP=0x0000000100014f54
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;	// IMP=0x0000000100014504
- (void)handleAppTransition:(id)arg1;	// IMP=0x0000000100014490
- (void)_enhanceLogging:(unsigned int)arg1;	// IMP=0x0000000100013da4
- (void)_checkForQuestionableBootArgs;	// IMP=0x0000000100013c08
- (void)_startUpAndRunningTimer;	// IMP=0x0000000100013bb8
- (void)_stopSupressingWakeForHIDEvents;	// IMP=0x0000000100013b20
- (id)_sanitizeAppIdentifierHistory:(id)arg1;	// IMP=0x0000000100013964
- (void)_activateAppIdleAction:(id)arg1;	// IMP=0x0000000100013704
- (_Bool)_focusedSceneHasHiliteModeEnabled;	// IMP=0x0000000100013524
- (void)_updateHiliteModeState;	// IMP=0x00000001000133c8
- (void)_setPresenceDetectionActive:(_Bool)arg1;	// IMP=0x000000010001321c
- (void)_deactivateScreenSaver;	// IMP=0x0000000100013194
- (void)_activateScreenSaverFromUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000130cc
- (void)_saveRecentApplicationBundleIdentifiers;	// IMP=0x0000000100013028
- (void)setNeedsUpdateActivityTriggersAndBackgroundTasks;	// IMP=0x0000000100012f30
- (void)_setNormalBackgroundTasksEnabled:(_Bool)arg1;	// IMP=0x0000000100012ec8
- (void)_setIdleBackgroundTasksEnabled:(_Bool)arg1;	// IMP=0x0000000100012c4c
- (void)_updateBackgroundTaskScheduling;	// IMP=0x0000000100012ab4
- (void)_updateUserActivityTriggers;	// IMP=0x0000000100011cac
- (void)_startExternalControlManagement;	// IMP=0x0000000100011b10
- (void)temporarilySuppressWakeForHIDEvents;	// IMP=0x00000001000119bc
- (void)userActivityTriggeredForReason:(id)arg1;	// IMP=0x0000000100011944
- (void)cancelScheduledActivationForAppWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100011780
- (void)activateAppIfPlayingMusicAfterIdleTime:(double)arg1 bundleIdentifier:(id)arg2 openURL:(id)arg3;	// IMP=0x0000000100011504
- (void)sendEventData:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000113b4
- (void)sendMenuButtonEventRequestedByClient:(id)arg1;	// IMP=0x00000001000112d4
- (void)deactivateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x0000000100011204
- (void)activateScreenSaverRequestedByClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011114
- (void)activateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x00000001000110f4
- (void)noteUserPresenceDetected;	// IMP=0x0000000100010fa8
- (void)rebootRequestedByClient:(id)arg1;	// IMP=0x0000000100010ebc
- (void)relaunchRequestedByClient:(id)arg1;	// IMP=0x0000000100010dd0
- (void)relaunchBackboarddRequestedByClient:(id)arg1;	// IMP=0x0000000100010d04
- (void)wakeRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x0000000100010ac8
- (void)sleepRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x0000000100010848
- (void)client:(id)arg1 setSleepTimeout:(double)arg2;	// IMP=0x0000000100010734
- (void)_stopBluetoothRemoteKeepAliveTimer;	// IMP=0x00000001000106d8
- (void)_startBluetoothRemoteKeepAliveTimer;	// IMP=0x000000010001057c
- (void)_keepBluetoothRemoteAlive;	// IMP=0x00000001000104f0
- (void)_handleDeviceWillSleepNotification:(id)arg1;	// IMP=0x000000010001036c
- (void)_handleDeviceWillWakeNotification:(id)arg1;	// IMP=0x0000000100010298
- (void)_bluetoothRemotePowerSourceLimitedSourceNotification:(id)arg1;	// IMP=0x00000001000101e4
- (void)_bluetoothRemoteDidConnectNotification:(id)arg1;	// IMP=0x000000010001017c
- (void)sendHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(unsigned long long)arg3 senderID:(unsigned long long)arg4 toApplication:(id)arg5;	// IMP=0x000000010000ff3c
- (void)forwardHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(unsigned long long)arg3 senderID:(unsigned long long)arg4;	// IMP=0x000000010000fdc0
- (void)_blackScreenRecoveryModeNotification:(id)arg1;	// IMP=0x000000010000f970
- (void)_updateKioskAppConfiguration:(_Bool)arg1;	// IMP=0x000000010000f52c
- (void)_handleAppStateDidChange;	// IMP=0x000000010000f50c
- (void)_internetAvailabilityDidChangeNotification:(id)arg1;	// IMP=0x000000010000f244
- (void)_handleBluetoothRemoteProximityDetection;	// IMP=0x000000010000f170
- (void)client:(id)arg1 setIdleTimerDisabled:(_Bool)arg2;	// IMP=0x000000010000efc8
- (void)_handleFocusedProcessDidChange;	// IMP=0x000000010000ee54
- (void)_handleProcessDidExitNotification:(id)arg1;	// IMP=0x000000010000ec94
- (void)_notifyIdleTasksEnabledDidChange;	// IMP=0x000000010000eb34
- (void)_handleIdleBackgroundTasksTrigger:(id)arg1;	// IMP=0x000000010000e9d4
- (void)_handleBluetoothRemoteSleepTrigger:(id)arg1;	// IMP=0x000000010000e8c4
- (void)_handleDevceSleepChange;	// IMP=0x000000010000e834
- (void)_handleSleepTrigger:(id)arg1;	// IMP=0x000000010000e644
- (void)_handleCRDAppTrigger:(id)arg1;	// IMP=0x000000010000e4f8
- (void)_handleScreenSaverTrigger:(id)arg1;	// IMP=0x000000010000e3c0
- (void)_setHiliteModeActive:(_Bool)arg1;	// IMP=0x000000010000ded0
- (void)_handleHiliteModeTrigger:(id)arg1;	// IMP=0x000000010000de3c
- (void)_remotePresenceDetectionModeTrigger:(id)arg1;	// IMP=0x000000010000ddfc
- (void)_handleIdleTimeoutDidChange;	// IMP=0x000000010000dd48
- (void)tvs_bindPowerManagerSleepBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010000dc44
- (id)PowerManagerSleepBinding;	// IMP=0x000000010000dbf0
- (void)tvs_bindFocusedProcessBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010000daec
- (id)FocusedProcessBinding;	// IMP=0x000000010000da98
- (void)tvs_bindIdleTimeOutBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010000d994
- (id)IdleTimeOutBinding;	// IMP=0x000000010000d940
- (void)resetIdleTimerAndUndim;	// IMP=0x000000010000d8ec
- (void)powerManagerUserEventWantsWakeDevice:(id)arg1;	// IMP=0x000000010000d7f4
- (_Bool)_isGameControllerZeroEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000d7b0
- (_Bool)_isSystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000d754
- (_Bool)_isButtonDownEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000d720
- (void)refreshKioskAppConfiguration:(_Bool)arg1;	// IMP=0x000000010000d6d8
@property(readonly, copy, nonatomic) NSString *kioskAppIdentifier;
@property(readonly, nonatomic) _Bool isScreenSaverIdle;
- (void)resumeActivity;	// IMP=0x000000010000d500
- (void)stopAllActivity;	// IMP=0x000000010000d498
- (_Bool)_validatePresses:(id)arg1 forWindow:(id)arg2;	// IMP=0x000000010000d328
- (void)sendEvent:(id)arg1;	// IMP=0x000000010000d18c
- (void)_finishButtonEvent:(id)arg1;	// IMP=0x000000010000d114
- (void)_removeEnqueuedEvent:(id)arg1;	// IMP=0x000000010000d0ac
- (void)_handleKeyUIEvent:(id)arg1;	// IMP=0x000000010000ce1c
- (void)_logButtonEventTiming:(id)arg1;	// IMP=0x000000010000ca3c
- (_Bool)_prepareButtonEvent:(id)arg1 withPressInfo:(id)arg2;	// IMP=0x000000010000c670
- (_Bool)_shouldTriggerExternalControlActionForEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000c5f8
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000c414
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000c12c
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x000000010000bcbc
- (void)_processChordsWithPressesEvent:(id)arg1;	// IMP=0x000000010000b4b0
- (_Bool)_handleSystemPressHidEvent:(struct __IOHIDEvent *)arg1 withType:(long long)arg2;	// IMP=0x000000010000b104
- (id)keyCommands;	// IMP=0x000000010000b004
- (void)resignActive;	// IMP=0x000000010000b000
- (_Bool)_accessibilityIsSystemAppServer;	// IMP=0x000000010000afd8
- (long long)userInterfaceLayoutDirection;	// IMP=0x000000010000af48
- (id)bulletinService;	// IMP=0x000000010000adf0
- (void)dealloc;	// IMP=0x000000010000acf8
- (void)_showScreenshotCapturedIndication;	// IMP=0x000000010000a8c8
- (void)_hideSysdiagnoseIndication;	// IMP=0x000000010000a7cc
- (void)_showSysdiagnoseIndication;	// IMP=0x000000010000a538
- (void)_showStackShotIndication;	// IMP=0x000000010000a35c
- (void)finishSystemAppLaunch;	// IMP=0x0000000100009a14
- (id)init;	// IMP=0x00000001000094ec
- (void)failedTest:(id)arg1;	// IMP=0x000000010007c728
- (void)finishedTest:(id)arg1;	// IMP=0x000000010007c640
- (void)_runSiriBringUpTest:(id)arg1 testOptions:(id)arg2;	// IMP=0x000000010007c4a0
- (void)_startResumeTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x000000010007c41c
- (void)_startLaunchTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x000000010007bfc4
- (void)_retryLaunchTestWithOptions:(id)arg1;	// IMP=0x000000010007be7c
- (void)_activateApplication:(id)arg1 suspended:(_Bool)arg2 forTest:(id)arg3;	// IMP=0x000000010007bde8
- (void)_markUserLaunchInitiationTimeForTest:(id)arg1;	// IMP=0x000000010007bd10
- (_Bool)_isAppExecutableRunning:(id)arg1;	// IMP=0x000000010007bc6c
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x000000010007bafc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

