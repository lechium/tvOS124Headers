//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FigScreenCaptureFrameHandlerDelegate-Protocol.h"
#import "RPApplicationStateObserver-Protocol.h"
#import "RPSystemStateObserver-Protocol.h"

@class FigScreenCaptureController, NSArray, NSDate, NSDictionary, NSExtension, NSMutableArray, NSString, NSURL, RPBroadcastConfiguration, RPBroadcastExtensionProxy, RPClientProxyBase, RPMovieWriter, RPReportingAgent;
@protocol OS_dispatch_queue, RPRecordingSessionDelegate;

@interface RPRecordingSession : NSObject <FigScreenCaptureFrameHandlerDelegate, RPSystemStateObserver, RPApplicationStateObserver>
{
    int _shouldStopLock;	// 8 = 0x8
    _Bool _shouldStop;	// 12 = 0xc
    long long _chipId;	// 16 = 0x10
    _Bool _microphoneEnabled;	// 24 = 0x18
    _Bool _microphoneEnabledPersistent;	// 25 = 0x19
    _Bool _recording;	// 26 = 0x1a
    _Bool _paused;	// 27 = 0x1b
    _Bool _systemRecording;	// 28 = 0x1c
    _Bool _isBroadcasting;	// 29 = 0x1d
    _Bool _captureRecording;	// 30 = 0x1e
    _Bool _hasUserConsentForCamera;	// 31 = 0x1f
    _Bool _hasUserConsentForMicrophone;	// 32 = 0x20
    _Bool _daemonUserConsentForMicrophone;	// 33 = 0x21
    _Bool _sessionWasResumed;	// 34 = 0x22
    _Bool _haveMicTap;	// 35 = 0x23
    int _frontmostPIDForAudioTap;	// 36 = 0x24
    RPClientProxyBase *_clientProxy;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    NSArray *_contextIDs;	// 56 = 0x38
    id <RPRecordingSessionDelegate> _delegate;	// 64 = 0x40
    NSURL *_interruptedMovieURL;	// 72 = 0x48
    NSDictionary *_extensionInfo;	// 80 = 0x50
    NSExtension *_broadcastExtension;	// 88 = 0x58
    RPBroadcastConfiguration *_broadcastConfiguration;	// 96 = 0x60
    NSString *_broadcastURL;	// 104 = 0x68
    NSString *_bundleIDOfFirstForegroundApp;	// 112 = 0x70
    RPMovieWriter *_movieWriter;	// 120 = 0x78
    FigScreenCaptureController *_screenCaptureController;	// 128 = 0x80
    NSURL *_outputURL;	// 136 = 0x88
    long long _broadcastProcessMode;	// 144 = 0x90
    RPBroadcastExtensionProxy *_broadcastUploadExtensionProxy;	// 152 = 0x98
    NSDictionary *_broadcastUserInfo;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_broadcastAggregatePayloadQueue;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_broadcastServiceInfoQueue;	// 176 = 0xb0
    NSMutableArray *_pendingBroadcastExtensionPayloads;	// 184 = 0xb8
    long long _broadcastFragmentIndex;	// 192 = 0xc0
    NSDate *_captureStartTime;	// 200 = 0xc8
    RPReportingAgent *_reportingAgent;	// 208 = 0xd0
    struct CGSize _windowSize;	// 216 = 0xd8
    struct CGSize _originalWindowSize;	// 232 = 0xe8
    CDStruct_1b6d18a9 _firstSampleTimestamp;	// 248 = 0xf8
    CDStruct_1b6d18a9 _lastSampleTimestamp;	// 272 = 0x110
    CDStruct_1b6d18a9 _sampleTimeOffset;	// 296 = 0x128
    CDStruct_1b6d18a9 _broadcastFragmentStartTime;	// 320 = 0x140
}

@property(retain, nonatomic) RPReportingAgent *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(retain, nonatomic) NSDate *captureStartTime; // @synthesize captureStartTime=_captureStartTime;
@property(nonatomic) long long broadcastFragmentIndex; // @synthesize broadcastFragmentIndex=_broadcastFragmentIndex;
@property(retain, nonatomic) NSMutableArray *pendingBroadcastExtensionPayloads; // @synthesize pendingBroadcastExtensionPayloads=_pendingBroadcastExtensionPayloads;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *broadcastServiceInfoQueue; // @synthesize broadcastServiceInfoQueue=_broadcastServiceInfoQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *broadcastAggregatePayloadQueue; // @synthesize broadcastAggregatePayloadQueue=_broadcastAggregatePayloadQueue;
@property(retain, nonatomic) NSDictionary *broadcastUserInfo; // @synthesize broadcastUserInfo=_broadcastUserInfo;
@property(retain, nonatomic) RPBroadcastExtensionProxy *broadcastUploadExtensionProxy; // @synthesize broadcastUploadExtensionProxy=_broadcastUploadExtensionProxy;
@property(nonatomic) CDStruct_1b6d18a9 broadcastFragmentStartTime; // @synthesize broadcastFragmentStartTime=_broadcastFragmentStartTime;
@property(nonatomic) long long broadcastProcessMode; // @synthesize broadcastProcessMode=_broadcastProcessMode;
@property(nonatomic) _Bool haveMicTap; // @synthesize haveMicTap=_haveMicTap;
@property(nonatomic) _Bool sessionWasResumed; // @synthesize sessionWasResumed=_sessionWasResumed;
@property(nonatomic) CDStruct_1b6d18a9 sampleTimeOffset; // @synthesize sampleTimeOffset=_sampleTimeOffset;
@property(nonatomic) CDStruct_1b6d18a9 lastSampleTimestamp; // @synthesize lastSampleTimestamp=_lastSampleTimestamp;
@property(nonatomic) CDStruct_1b6d18a9 firstSampleTimestamp; // @synthesize firstSampleTimestamp=_firstSampleTimestamp;
@property(nonatomic) struct CGSize originalWindowSize; // @synthesize originalWindowSize=_originalWindowSize;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain, nonatomic) FigScreenCaptureController *screenCaptureController; // @synthesize screenCaptureController=_screenCaptureController;
@property(retain, nonatomic) RPMovieWriter *movieWriter; // @synthesize movieWriter=_movieWriter;
@property(retain, nonatomic) NSString *bundleIDOfFirstForegroundApp; // @synthesize bundleIDOfFirstForegroundApp=_bundleIDOfFirstForegroundApp;
@property(nonatomic) _Bool daemonUserConsentForMicrophone; // @synthesize daemonUserConsentForMicrophone=_daemonUserConsentForMicrophone;
@property(nonatomic) _Bool hasUserConsentForMicrophone; // @synthesize hasUserConsentForMicrophone=_hasUserConsentForMicrophone;
@property(nonatomic) _Bool hasUserConsentForCamera; // @synthesize hasUserConsentForCamera=_hasUserConsentForCamera;
@property(nonatomic, getter=isCapturing) _Bool captureRecording; // @synthesize captureRecording=_captureRecording;
@property(retain, nonatomic) NSString *broadcastURL; // @synthesize broadcastURL=_broadcastURL;
@property(retain, nonatomic) RPBroadcastConfiguration *broadcastConfiguration; // @synthesize broadcastConfiguration=_broadcastConfiguration;
@property(retain, nonatomic) NSExtension *broadcastExtension; // @synthesize broadcastExtension=_broadcastExtension;
@property(retain, nonatomic) NSDictionary *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
@property(nonatomic) int frontmostPIDForAudioTap; // @synthesize frontmostPIDForAudioTap=_frontmostPIDForAudioTap;
@property(nonatomic, getter=isBroadcasting) _Bool isBroadcasting; // @synthesize isBroadcasting=_isBroadcasting;
@property(nonatomic, getter=isSystemRecording) _Bool systemRecording; // @synthesize systemRecording=_systemRecording;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(retain, nonatomic) NSURL *interruptedMovieURL; // @synthesize interruptedMovieURL=_interruptedMovieURL;
@property(nonatomic) __weak id <RPRecordingSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *contextIDs; // @synthesize contextIDs=_contextIDs;
@property(nonatomic) _Bool microphoneEnabledPersistent; // @synthesize microphoneEnabledPersistent=_microphoneEnabledPersistent;
@property(nonatomic) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) RPClientProxyBase *clientProxy; // @synthesize clientProxy=_clientProxy;
- (void).cxx_destruct;	// IMP=0x00000001000228f4
- (void)clientApplicationDidEnterForeground;	// IMP=0x00000001000222a0
- (void)clientApplicationDidEnterBackground;	// IMP=0x00000001000221d0
- (void)notifyRecordingResumed;	// IMP=0x00000001000221b8
- (void)notifyRecordingMayBeStopped;	// IMP=0x00000001000221a0
- (void)sessionReportCameraUsage:(int)arg1;	// IMP=0x00000001000220a4
- (void)reportSummaryEvent:(long long)arg1;	// IMP=0x0000000100021ebc
- (unsigned long long)getRecordedFileSize;	// IMP=0x0000000100021b90
- (id)getServiceName:(_Bool)arg1 isSystemRecording:(_Bool)arg2 isCapture:(_Bool)arg3;	// IMP=0x0000000100021b24
- (struct CGAffineTransform)_CGAffineTransformFromFigTransformFlags:(unsigned long long)arg1;	// IMP=0x0000000100021970
- (struct CGSize)_maximumSizeWithSize:(struct CGSize)arg1;	// IMP=0x00000001000217a8
- (long long)chipId;	// IMP=0x0000000100021768
- (void)_notifyExtensionOfFrontmostProcessBundleID:(id)arg1;	// IMP=0x000000010002160c
- (void)_notifyExtensionOfAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;	// IMP=0x00000001000212b0
- (void)_notifyExtensionOfVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2 sampleOrientation:(unsigned int)arg3;	// IMP=0x0000000100021004
- (void)_notifyExtensionOfAction:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020e18
- (void)_notifyBroadcastExtensionOfCompletedMovieWithURL:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000001000201b8
- (void)packageAudioSampleBufferForCapture:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;	// IMP=0x0000000100020030
- (void)packageVideoSampleBufferForCapture:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010001ff38
- (void)_processSampleBufferForStreaming:(struct opaqueCMSampleBuffer *)arg1 transformFlags:(unsigned long long)arg2;	// IMP=0x000000010001ff2c
- (void)_processAudioSampleBufferForMP4ClipHandler:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010001fb24
- (struct opaqueCMSampleBuffer *)_copySampleBufferFromSourceBuffer:(struct opaqueCMSampleBuffer *)arg1 updatedTimeStamp:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000010001f9f4
- (void)_updateSampleBufferWithOffset:(struct opaqueCMSampleBuffer *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f894
- (unsigned int)orientationFromFigTransform:(unsigned long long)arg1;	// IMP=0x000000010001f870
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 transformFlags:(unsigned long long)arg2;	// IMP=0x000000010001f35c
- (void)screenCaptureControllerMediaServicesWereReset:(id)arg1;	// IMP=0x000000010001f28c
- (void)screenCaptureControllerWasPreempted:(id)arg1;	// IMP=0x000000010001f1f0
- (void)screenCaptureController:(id)arg1 didFailWithStatus:(int)arg2;	// IMP=0x000000010001f154
- (void)screenCaptureController:(id)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 transformFlags:(unsigned long long)arg3;	// IMP=0x000000010001ef10
- (void)updateDuartionWithSample:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010001ee70
- (void)disableBroadcast;	// IMP=0x000000010001edd4
- (id)enableBroadcastWithExtension:(id)arg1 processMode:(long long)arg2 userInfo:(id)arg3 listenerEndpoint:(id)arg4;	// IMP=0x000000010001e79c
- (void)finishAndCleanupSessionFilesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001e4dc
- (void)stopRecordingWithNotification:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000010001e3b8
- (void)stopAllCapture;	// IMP=0x000000010001e1fc
- (void)finishSessionWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001dc2c
- (void)finishSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001dc18
- (void)pauseSession;	// IMP=0x000000010001db60
- (void)updateProcessIDForAudioCaptureWithPID:(int)arg1;	// IMP=0x000000010001d6bc
- (void)frontmostApplicationDidEnterBackground:(int)arg1;	// IMP=0x000000010001d66c
- (void)frontmostApplicationWasTerminated:(int)arg1;	// IMP=0x000000010001d600
- (void)frontmostApplicationDidChange:(int)arg1;	// IMP=0x000000010001d5b0
- (void)updateBundleIdForFirstForegroundApp;	// IMP=0x000000010001d4f4
- (void)setupMicTap;	// IMP=0x000000010001d2c4
- (void)_resumeOrStartSession;	// IMP=0x000000010001cc60
- (void)resumeSessionWithContextID:(id)arg1;	// IMP=0x000000010001cafc
- (void)startSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c540
- (_Bool)isNativeScreenOrientationPortrait;	// IMP=0x000000010001c538
- (id)trimmedOutputPath;	// IMP=0x000000010001c434
- (id)outputPath;	// IMP=0x000000010001c0cc
- (id)trimmedOutputURL;	// IMP=0x000000010001c068
- (id)initWithBundleID:(id)arg1;	// IMP=0x000000010001be38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

