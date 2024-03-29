//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAutoUnlockPairingSession.h"

@class NSData, NSDate, NSError, NSObject, NSString, SDUnlockSetupSessionCreated;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockPairingLockSession : SDAutoUnlockPairingSession
{
    _Bool _canceled;	// 8 = 0x8
    _Bool _upsellDevice;	// 9 = 0x9
    _Bool _setupRetryDevice;	// 10 = 0xa
    _Bool _placeholder;	// 11 = 0xb
    _Bool _waitingForCloudPairing;	// 12 = 0xc
    _Bool _keyDeviceLocked;	// 13 = 0xd
    _Bool _unlockEnabled;	// 14 = 0xe
    _Bool _receivedSetupACK;	// 15 = 0xf
    _Bool _receivedTokenACK;	// 16 = 0x10
    int _watchOldLTKSyncStatus;	// 20 = 0x14
    int _watchNewLTKSyncStatus;	// 24 = 0x18
    NSString *_passcode;	// 32 = 0x20
    long long _sendState;	// 40 = 0x28
    NSString *_keyDeviceModel;	// 48 = 0x30
    NSString *_watchBuildVersion;	// 56 = 0x38
    NSString *_watchOSVersion;	// 64 = 0x40
    NSString *_companionDeviceModel;	// 72 = 0x48
    NSError *_setupError;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_ltkTimer;	// 88 = 0x58
    long long _errorType;	// 96 = 0x60
    SDUnlockSetupSessionCreated *_sessionCreatedMessage;	// 104 = 0x68
    long long _responseTimeout;	// 112 = 0x70
    long long _responseTimeoutFromServer;	// 120 = 0x78
    long long _messageTimeout;	// 128 = 0x80
    long long _messageTimeoutFromServer;	// 136 = 0x88
    long long _ltkTimerRetryCount;	// 144 = 0x90
    NSDate *_keyExchangeDate;	// 152 = 0x98
    NSDate *_tokenExchangeDate;	// 160 = 0xa0
    double _keyExchangeInterval;	// 168 = 0xa8
    double _tokenExchangeInterval;	// 176 = 0xb0
    NSData *_remoteLTKHash;	// 184 = 0xb8
    NSString *_setupMessageIdentifier;	// 192 = 0xc0
    NSString *_tokenMessageIdentifier;	// 200 = 0xc8
}

@property(retain, nonatomic) NSString *tokenMessageIdentifier; // @synthesize tokenMessageIdentifier=_tokenMessageIdentifier;
@property(retain, nonatomic) NSString *setupMessageIdentifier; // @synthesize setupMessageIdentifier=_setupMessageIdentifier;
@property(nonatomic) _Bool receivedTokenACK; // @synthesize receivedTokenACK=_receivedTokenACK;
@property(nonatomic) _Bool receivedSetupACK; // @synthesize receivedSetupACK=_receivedSetupACK;
@property(nonatomic) int watchNewLTKSyncStatus; // @synthesize watchNewLTKSyncStatus=_watchNewLTKSyncStatus;
@property(nonatomic) int watchOldLTKSyncStatus; // @synthesize watchOldLTKSyncStatus=_watchOldLTKSyncStatus;
@property(retain, nonatomic) NSData *remoteLTKHash; // @synthesize remoteLTKHash=_remoteLTKHash;
@property(nonatomic) double tokenExchangeInterval; // @synthesize tokenExchangeInterval=_tokenExchangeInterval;
@property(nonatomic) double keyExchangeInterval; // @synthesize keyExchangeInterval=_keyExchangeInterval;
@property(retain, nonatomic) NSDate *tokenExchangeDate; // @synthesize tokenExchangeDate=_tokenExchangeDate;
@property(retain, nonatomic) NSDate *keyExchangeDate; // @synthesize keyExchangeDate=_keyExchangeDate;
@property(nonatomic) long long ltkTimerRetryCount; // @synthesize ltkTimerRetryCount=_ltkTimerRetryCount;
@property(nonatomic) long long messageTimeoutFromServer; // @synthesize messageTimeoutFromServer=_messageTimeoutFromServer;
@property(nonatomic) long long messageTimeout; // @synthesize messageTimeout=_messageTimeout;
@property(nonatomic) long long responseTimeoutFromServer; // @synthesize responseTimeoutFromServer=_responseTimeoutFromServer;
@property(nonatomic) long long responseTimeout; // @synthesize responseTimeout=_responseTimeout;
@property(retain, nonatomic) SDUnlockSetupSessionCreated *sessionCreatedMessage; // @synthesize sessionCreatedMessage=_sessionCreatedMessage;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *ltkTimer; // @synthesize ltkTimer=_ltkTimer;
@property(nonatomic) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) _Bool keyDeviceLocked; // @synthesize keyDeviceLocked=_keyDeviceLocked;
@property(retain, nonatomic) NSError *setupError; // @synthesize setupError=_setupError;
@property(retain, nonatomic) NSString *companionDeviceModel; // @synthesize companionDeviceModel=_companionDeviceModel;
@property(retain, nonatomic) NSString *watchOSVersion; // @synthesize watchOSVersion=_watchOSVersion;
@property(retain, nonatomic) NSString *watchBuildVersion; // @synthesize watchBuildVersion=_watchBuildVersion;
@property(retain, nonatomic) NSString *keyDeviceModel; // @synthesize keyDeviceModel=_keyDeviceModel;
@property(nonatomic) long long sendState; // @synthesize sendState=_sendState;
@property(nonatomic) _Bool waitingForCloudPairing; // @synthesize waitingForCloudPairing=_waitingForCloudPairing;
@property(nonatomic) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool setupRetryDevice; // @synthesize setupRetryDevice=_setupRetryDevice;
@property(nonatomic) _Bool upsellDevice; // @synthesize upsellDevice=_upsellDevice;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(copy, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
- (void).cxx_destruct;	// IMP=0x00000001000d0d04
- (id)userInfoForNewProtocol;	// IMP=0x00000001000d07c0
- (id)userInfoForOldProtocol;	// IMP=0x00000001000d06c8
- (id)userInfoForNoCommunincation;	// IMP=0x00000001000d05d0
- (id)userInfoForNoPasscode;	// IMP=0x00000001000d04d8
- (id)userInfoForNoWristDetection;	// IMP=0x00000001000d03e0
- (id)userInfoForNoWristDetectionNoPasscode;	// IMP=0x00000001000d02e8
- (id)userInfoCompanionViewNotSyncing;	// IMP=0x00000001000d01f0
- (id)userInfoForWatchLocked;	// IMP=0x00000001000d00f8
- (id)userInfoForNotCloudPaired;	// IMP=0x00000001000d004c
- (id)userInfoForMacNotSignedIn;	// IMP=0x00000001000cff54
- (id)userInfoForWatchNotSignedIn;	// IMP=0x00000001000cfe5c
- (id)userInfoForMissingLTK;	// IMP=0x00000001000cfd64
- (id)userInfoForInternetSharing;	// IMP=0x00000001000cfc6c
- (id)userInfoForKeychainMismatch;	// IMP=0x00000001000cfb74
- (id)userInfoForiPhoneNeedsUnlock;	// IMP=0x00000001000cfa7c
- (void)transport:(id)arg1 didReceiveMessageACKForIdentifier:(id)arg2;	// IMP=0x00000001000cf864
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x00000001000cf544
- (void)sendCreateEscrowSecretWithStepData:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x00000001000cf14c
- (void)sendSetupRequest;	// IMP=0x00000001000cec34
- (void)handleSuccessfulPairing;	// IMP=0x00000001000ce570
- (void)handleSetupCreateRecord:(id)arg1;	// IMP=0x00000001000cdde0
- (void)handleEscrowSessionRequest;	// IMP=0x00000001000cd41c
- (void)handleSetupSessionCreated:(id)arg1;	// IMP=0x00000001000cca78
- (void)handleKeyDeviceLocked;	// IMP=0x00000001000cc96c
- (_Bool)ltkHashMatches;	// IMP=0x00000001000cc828
- (void)handleLTKTimerFired;	// IMP=0x00000001000cc584
- (void)invalidateLTKTimer;	// IMP=0x00000001000cc4ac
- (void)restartLTKTimer;	// IMP=0x00000001000cc29c
- (void)notifyDelegateKeyDeviceIsLocked;	// IMP=0x00000001000cc1f0
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x00000001000cba74
- (_Bool)validatePasscode:(id)arg1;	// IMP=0x00000001000cb8e8
- (void)handleTimerFired;	// IMP=0x00000001000cb6bc
- (id)generatedError;	// IMP=0x00000001000cb4e4
- (void)invalidate;	// IMP=0x00000001000cb3d4
- (void)onqueue_updateForCloudPairing;	// IMP=0x00000001000cb368
- (void)updateForCloudPairing;	// IMP=0x00000001000cb2dc
- (void)onqueue_cancel;	// IMP=0x00000001000cb1ac
- (void)cancel;	// IMP=0x00000001000cb120
- (void)onqueue_start;	// IMP=0x00000001000caa54
- (void)start;	// IMP=0x00000001000ca9c8
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x00000001000ca604

@end

