//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface AWDSharingAutoUnlockAttempt : PBCodable <NSCopying>
{
    long long _timeIntervalSinceLastDarkWake;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    unsigned int _attemptType;	// 24 = 0x18
    unsigned int _awdlBringUpTime;	// 28 = 0x1c
    unsigned int _awdlPeerDiscoveryTime;	// 32 = 0x20
    unsigned int _awdlRangingTime;	// 36 = 0x24
    unsigned int _bleAWDLInfoExchangeTime;	// 40 = 0x28
    unsigned int _bleAuthTokenExchangeTime;	// 44 = 0x2c
    unsigned int _bleConfirmationTime;	// 48 = 0x30
    unsigned int _bleKeyConnectionTime;	// 52 = 0x34
    unsigned int _bleKeyDiscoveryTime;	// 56 = 0x38
    unsigned int _bleKeyRequestExchangeTime;	// 60 = 0x3c
    unsigned int _bleProxyConnectionTime;	// 64 = 0x40
    unsigned int _bleProxyDiscoveryTime;	// 68 = 0x44
    unsigned int _bluetoothConnectedDevices;	// 72 = 0x48
    int _cancelReason;	// 76 = 0x4c
    unsigned int _cancelTime;	// 80 = 0x50
    unsigned int _clamshellWaitTime;	// 84 = 0x54
    unsigned int _displayWaitTime;	// 88 = 0x58
    unsigned int _distance;	// 92 = 0x5c
    unsigned int _errorCode;	// 96 = 0x60
    NSString *_errorDomain;	// 104 = 0x68
    unsigned int _errorType;	// 112 = 0x70
    unsigned int _flags;	// 116 = 0x74
    int _keyBluetoothRSSI;	// 120 = 0x78
    NSString *_keyDeviceModel;	// 128 = 0x80
    int _lastSleepType;	// 136 = 0x88
    int _proxyBluetoothRSSI;	// 140 = 0x8c
    NSString *_proxyDeviceModel;	// 144 = 0x90
    int _timeIntervalSinceLastWake;	// 152 = 0x98
    unsigned int _totalUnlockTime;	// 156 = 0x9c
    NSString *_watchBuildVersion;	// 160 = 0xa0
    NSString *_watchOSVersion;	// 168 = 0xa8
    _Bool _clamshellClosed;	// 176 = 0xb0
    _Bool _externalDisplay;	// 177 = 0xb1
    _Bool _unlockSucceeded;	// 178 = 0xb2
    _Bool _usingProxy;	// 179 = 0xb3
    _Bool _usingTool;	// 180 = 0xb4
    _Bool _withinRange;	// 181 = 0xb5
    struct {
        unsigned int timeIntervalSinceLastDarkWake:1;
        unsigned int timestamp:1;
        unsigned int attemptType:1;
        unsigned int awdlBringUpTime:1;
        unsigned int awdlPeerDiscoveryTime:1;
        unsigned int awdlRangingTime:1;
        unsigned int bleAWDLInfoExchangeTime:1;
        unsigned int bleAuthTokenExchangeTime:1;
        unsigned int bleConfirmationTime:1;
        unsigned int bleKeyConnectionTime:1;
        unsigned int bleKeyDiscoveryTime:1;
        unsigned int bleKeyRequestExchangeTime:1;
        unsigned int bleProxyConnectionTime:1;
        unsigned int bleProxyDiscoveryTime:1;
        unsigned int bluetoothConnectedDevices:1;
        unsigned int cancelReason:1;
        unsigned int cancelTime:1;
        unsigned int clamshellWaitTime:1;
        unsigned int displayWaitTime:1;
        unsigned int distance:1;
        unsigned int errorCode:1;
        unsigned int errorType:1;
        unsigned int flags:1;
        unsigned int keyBluetoothRSSI:1;
        unsigned int lastSleepType:1;
        unsigned int proxyBluetoothRSSI:1;
        unsigned int timeIntervalSinceLastWake:1;
        unsigned int totalUnlockTime:1;
        unsigned int clamshellClosed:1;
        unsigned int externalDisplay:1;
        unsigned int unlockSucceeded:1;
        unsigned int usingProxy:1;
        unsigned int usingTool:1;
        unsigned int withinRange:1;
    } _has;	// 184 = 0xb8
}

@property(retain, nonatomic) NSString *watchOSVersion; // @synthesize watchOSVersion=_watchOSVersion;
@property(retain, nonatomic) NSString *watchBuildVersion; // @synthesize watchBuildVersion=_watchBuildVersion;
@property(nonatomic) unsigned int attemptType; // @synthesize attemptType=_attemptType;
@property(nonatomic) int cancelReason; // @synthesize cancelReason=_cancelReason;
@property(nonatomic) long long timeIntervalSinceLastDarkWake; // @synthesize timeIntervalSinceLastDarkWake=_timeIntervalSinceLastDarkWake;
@property(nonatomic) unsigned int clamshellWaitTime; // @synthesize clamshellWaitTime=_clamshellWaitTime;
@property(nonatomic) unsigned int displayWaitTime; // @synthesize displayWaitTime=_displayWaitTime;
@property(nonatomic) _Bool externalDisplay; // @synthesize externalDisplay=_externalDisplay;
@property(nonatomic) int lastSleepType; // @synthesize lastSleepType=_lastSleepType;
@property(nonatomic) int timeIntervalSinceLastWake; // @synthesize timeIntervalSinceLastWake=_timeIntervalSinceLastWake;
@property(nonatomic) unsigned int bluetoothConnectedDevices; // @synthesize bluetoothConnectedDevices=_bluetoothConnectedDevices;
@property(nonatomic) _Bool clamshellClosed; // @synthesize clamshellClosed=_clamshellClosed;
@property(nonatomic) unsigned int cancelTime; // @synthesize cancelTime=_cancelTime;
@property(nonatomic) _Bool usingTool; // @synthesize usingTool=_usingTool;
@property(nonatomic) unsigned int bleKeyConnectionTime; // @synthesize bleKeyConnectionTime=_bleKeyConnectionTime;
@property(nonatomic) unsigned int bleProxyConnectionTime; // @synthesize bleProxyConnectionTime=_bleProxyConnectionTime;
@property(nonatomic) _Bool withinRange; // @synthesize withinRange=_withinRange;
@property(nonatomic) int proxyBluetoothRSSI; // @synthesize proxyBluetoothRSSI=_proxyBluetoothRSSI;
@property(nonatomic) int keyBluetoothRSSI; // @synthesize keyBluetoothRSSI=_keyBluetoothRSSI;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned int errorType; // @synthesize errorType=_errorType;
@property(nonatomic) _Bool unlockSucceeded; // @synthesize unlockSucceeded=_unlockSucceeded;
@property(nonatomic) unsigned int totalUnlockTime; // @synthesize totalUnlockTime=_totalUnlockTime;
@property(nonatomic) unsigned int bleConfirmationTime; // @synthesize bleConfirmationTime=_bleConfirmationTime;
@property(nonatomic) unsigned int awdlRangingTime; // @synthesize awdlRangingTime=_awdlRangingTime;
@property(nonatomic) unsigned int awdlPeerDiscoveryTime; // @synthesize awdlPeerDiscoveryTime=_awdlPeerDiscoveryTime;
@property(nonatomic) unsigned int awdlBringUpTime; // @synthesize awdlBringUpTime=_awdlBringUpTime;
@property(nonatomic) unsigned int bleAuthTokenExchangeTime; // @synthesize bleAuthTokenExchangeTime=_bleAuthTokenExchangeTime;
@property(nonatomic) unsigned int bleKeyRequestExchangeTime; // @synthesize bleKeyRequestExchangeTime=_bleKeyRequestExchangeTime;
@property(nonatomic) unsigned int bleAWDLInfoExchangeTime; // @synthesize bleAWDLInfoExchangeTime=_bleAWDLInfoExchangeTime;
@property(nonatomic) unsigned int bleProxyDiscoveryTime; // @synthesize bleProxyDiscoveryTime=_bleProxyDiscoveryTime;
@property(nonatomic) unsigned int bleKeyDiscoveryTime; // @synthesize bleKeyDiscoveryTime=_bleKeyDiscoveryTime;
@property(nonatomic) _Bool usingProxy; // @synthesize usingProxy=_usingProxy;
@property(retain, nonatomic) NSString *proxyDeviceModel; // @synthesize proxyDeviceModel=_proxyDeviceModel;
@property(retain, nonatomic) NSString *keyDeviceModel; // @synthesize keyDeviceModel=_keyDeviceModel;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;	// IMP=0x00000001000c5ae4
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c51e4
- (unsigned long long)hash;	// IMP=0x00000001000c4b48
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c4358
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c3cc0
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c3694
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c3100
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c30f8
- (id)dictionaryRepresentation;	// IMP=0x00000001000c0890
- (id)description;	// IMP=0x00000001000c07dc
@property(readonly, nonatomic) _Bool hasWatchOSVersion;
@property(readonly, nonatomic) _Bool hasWatchBuildVersion;
@property(nonatomic) _Bool hasAttemptType;
@property(nonatomic) _Bool hasCancelReason;
@property(nonatomic) _Bool hasTimeIntervalSinceLastDarkWake;
@property(nonatomic) _Bool hasClamshellWaitTime;
@property(nonatomic) _Bool hasDisplayWaitTime;
@property(nonatomic) _Bool hasExternalDisplay;
@property(nonatomic) _Bool hasLastSleepType;
@property(nonatomic) _Bool hasTimeIntervalSinceLastWake;
@property(nonatomic) _Bool hasBluetoothConnectedDevices;
@property(nonatomic) _Bool hasClamshellClosed;
@property(nonatomic) _Bool hasCancelTime;
@property(nonatomic) _Bool hasUsingTool;
@property(nonatomic) _Bool hasBleKeyConnectionTime;
@property(nonatomic) _Bool hasBleProxyConnectionTime;
@property(nonatomic) _Bool hasWithinRange;
@property(nonatomic) _Bool hasProxyBluetoothRSSI;
@property(nonatomic) _Bool hasKeyBluetoothRSSI;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) _Bool hasFlags;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasErrorType;
@property(nonatomic) _Bool hasUnlockSucceeded;
@property(nonatomic) _Bool hasTotalUnlockTime;
@property(nonatomic) _Bool hasBleConfirmationTime;
@property(nonatomic) _Bool hasAwdlRangingTime;
@property(nonatomic) _Bool hasAwdlPeerDiscoveryTime;
@property(nonatomic) _Bool hasAwdlBringUpTime;
@property(nonatomic) _Bool hasBleAuthTokenExchangeTime;
@property(nonatomic) _Bool hasBleKeyRequestExchangeTime;
@property(nonatomic) _Bool hasBleAWDLInfoExchangeTime;
@property(nonatomic) _Bool hasBleProxyDiscoveryTime;
@property(nonatomic) _Bool hasBleKeyDiscoveryTime;
@property(nonatomic) _Bool hasUsingProxy;
@property(readonly, nonatomic) _Bool hasProxyDeviceModel;
@property(readonly, nonatomic) _Bool hasKeyDeviceModel;
@property(nonatomic) _Bool hasTimestamp;

@end

