//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDisplayLayoutObserver-Protocol.h"
#import "RPConnectionManagerDelegate-Protocol.h"
#import "RPDaemonProtocol-Protocol.h"
#import "RPRecordingSessionDelegate-Protocol.h"
#import "RPSessionManagerDelegate-Protocol.h"

@class FBSDisplayLayoutMonitor, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, RPApplicationStateMonitor, RPConnectionManager, RPSessionManager, UIImage;

@interface RPRecordingManager : NSObject <RPConnectionManagerDelegate, RPSessionManagerDelegate, RPRecordingSessionDelegate, RPDaemonProtocol, FBSDisplayLayoutObserver>
{
    _Bool _microphoneRecording;	// 8 = 0x8
    _Bool _cameraRecording;	// 9 = 0x9
    NSXPCListener *_publicListener;	// 16 = 0x10
    NSMutableSet *_exemptBundleIdentifiers;	// 24 = 0x18
    NSMutableSet *_exemptWithMicRecordingEnabledBundleIdentifiers;	// 32 = 0x20
    NSMutableDictionary *_lastBackgroundDateByBundleIdentifier;	// 40 = 0x28
    RPSessionManager *_sessionManager;	// 48 = 0x30
    RPConnectionManager *_connectionManager;	// 56 = 0x38
    NSMutableDictionary *_currentAvailableExtensions;	// 64 = 0x40
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 72 = 0x48
    long long _levelOneElementCount;	// 80 = 0x50
    RPApplicationStateMonitor *_applicationStateMonitor;	// 88 = 0x58
    UIImage *_currentHostAppImage;	// 96 = 0x60
    UIImage *_currentExtensionAppImage;	// 104 = 0x68
    NSString *_currentExtensionDisplayName;	// 112 = 0x70
}

@property(retain, nonatomic) NSString *currentExtensionDisplayName; // @synthesize currentExtensionDisplayName=_currentExtensionDisplayName;
@property(retain, nonatomic) UIImage *currentExtensionAppImage; // @synthesize currentExtensionAppImage=_currentExtensionAppImage;
@property(retain, nonatomic) UIImage *currentHostAppImage; // @synthesize currentHostAppImage=_currentHostAppImage;
@property(retain, nonatomic) RPApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property long long levelOneElementCount; // @synthesize levelOneElementCount=_levelOneElementCount;
@property(retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
@property(retain, nonatomic) NSMutableDictionary *currentAvailableExtensions; // @synthesize currentAvailableExtensions=_currentAvailableExtensions;
@property(retain, nonatomic) RPConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(retain, nonatomic) RPSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) NSMutableDictionary *lastBackgroundDateByBundleIdentifier; // @synthesize lastBackgroundDateByBundleIdentifier=_lastBackgroundDateByBundleIdentifier;
@property(retain, nonatomic) NSMutableSet *exemptWithMicRecordingEnabledBundleIdentifiers; // @synthesize exemptWithMicRecordingEnabledBundleIdentifiers=_exemptWithMicRecordingEnabledBundleIdentifiers;
@property(retain, nonatomic) NSMutableSet *exemptBundleIdentifiers; // @synthesize exemptBundleIdentifiers=_exemptBundleIdentifiers;
@property(nonatomic, getter=isCameraRecording) _Bool cameraRecording; // @synthesize cameraRecording=_cameraRecording;
@property(nonatomic, getter=isMicrophoneRecording) _Bool microphoneRecording; // @synthesize microphoneRecording=_microphoneRecording;
@property(retain, nonatomic) NSXPCListener *publicListener; // @synthesize publicListener=_publicListener;
- (void).cxx_destruct;	// IMP=0x0000000100010820
- (_Bool)showStopRecordingAlert;	// IMP=0x0000000100010618
- (_Bool)showResumeBroadcastAlertWithSession:(id)arg1 contextID:(unsigned int)arg2;	// IMP=0x0000000100010610
- (_Bool)showAlertForBroadcastSession:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100010608
- (_Bool)showAlertRecordingSessionFailedToSaveFile:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100010600
- (_Bool)showAlertForRecordingSession:(id)arg1 withError:(id)arg2;	// IMP=0x00000001000105f8
- (void)loadBroadcastUploadExtensionWithBaseIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001031c
- (void)frontmostSession:(id)arg1 applicationPID:(CDUnknownBlockType)arg2;	// IMP=0x000000010001023c
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000100010108
- (int)countLevelOneElementsWithLayout:(id)arg1;	// IMP=0x000000010000ffc4
- (void)recordingSession:(id)arg1 stoppedWithError:(id)arg2 movieURL:(id)arg3;	// IMP=0x000000010000fd64
- (void)broadcastSession:(id)arg1 didUpdateDuration:(double)arg2;	// IMP=0x000000010000fd60
- (void)broadcastSession:(id)arg1 didUpdateServiceInfo:(id)arg2;	// IMP=0x000000010000fca0
- (void)recordingSession:(id)arg1 stoppedWithError:(id)arg2;	// IMP=0x000000010000fc4c
- (_Bool)showAcknowledgementAlertForSession:(id)arg1 isBroadcast:(_Bool)arg2;	// IMP=0x000000010000f318
- (void)updateExemptionListWithSession:(id)arg1;	// IMP=0x000000010000f1e8
- (_Bool)isExemptFromAcknowledgementAlertSession:(id)arg1;	// IMP=0x000000010000f144
- (void)applicationDisconnectedWithBundleID:(id)arg1 withProcessIdentifier:(int)arg2;	// IMP=0x000000010000f058
- (void)connectionManagerDidAcceptNewConnection:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000010000ef64
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;	// IMP=0x000000010000ee30
- (oneway void)setMicrophoneEnabled:(_Bool)arg1;	// IMP=0x000000010000ece4
- (oneway void)discardRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000eb98
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;	// IMP=0x000000010000e7e0
- (oneway void)pauseRecording;	// IMP=0x000000010000e724
- (void)resetStatesForSession:(id)arg1;	// IMP=0x000000010000e664
- (void)recordingSessionClientDidEnterBackground:(id)arg1;	// IMP=0x000000010000e4ec
- (void)recordingSessionClientDidEnterForeground:(id)arg1;	// IMP=0x000000010000e350
- (id)getCallingConnectionRecordingSession;	// IMP=0x000000010000e2c8
- (id)getCallingConnectionBundleID;	// IMP=0x000000010000e20c
- (void)expireAcknowledgementExemptionsForBundleID:(id)arg1;	// IMP=0x000000010000dfd4
- (void)failedToSaveRecordingForRecordingSession:(id)arg1 withError:(id)arg2;	// IMP=0x000000010000de60
- (void)prepareForStoppingSession:(id)arg1;	// IMP=0x000000010000dd70
- (oneway void)saveVideoToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d5ec
- (oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d508
- (oneway void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d47c
- (void)checkAndPlaySystemRecordSound:(id)arg1 isRecordingOn:(_Bool)arg2;	// IMP=0x000000010000d3ec
- (void)clearSystemRecordingUI:(id)arg1;	// IMP=0x000000010000d368
- (oneway void)startRecordingWindowLayerContextIDs:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 broadcast:(_Bool)arg5 systemRecording:(_Bool)arg6 captureEnabled:(_Bool)arg7 listenerEndpoint:(id)arg8 withHandler:(CDUnknownBlockType)arg9;	// IMP=0x000000010000c2fc
- (_Bool)clientHasSystemEntitlements;	// IMP=0x000000010000c25c
- (_Bool)checkContextIDsMatch:(id)arg1;	// IMP=0x000000010000c01c
- (void)stopCurrentRecordingSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000bb14
- (oneway void)setMicrophoneEnabledPersistent:(_Bool)arg1;	// IMP=0x000000010000ba9c
- (oneway void)setBroadcastURL:(id)arg1;	// IMP=0x000000010000ba30
- (oneway void)setHasUserConsentForMicrophone:(_Bool)arg1;	// IMP=0x000000010000b9e8
- (oneway void)setHasUserConsentForCamera:(_Bool)arg1;	// IMP=0x000000010000b9a0
- (oneway void)synchronousIsBroadcastingWithPreferredExtension:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b850
- (oneway void)synchronousGetCurrentState:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b474
- (oneway void)getCurrentBroadcastImages:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b3dc
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010000ae30
- (oneway void)getSystemBroadcastExtensionInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000010000aa68
- (void)endTransaction;	// IMP=0x000000010000aa64
- (void)beginTransaction;	// IMP=0x000000010000aa60
- (void)dealloc;	// IMP=0x000000010000a9b8
- (void)finishStartup;	// IMP=0x000000010000a9a0
- (id)init;	// IMP=0x000000010000a270
- (id)replayAlertQueue;	// IMP=0x000000010000a200

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

