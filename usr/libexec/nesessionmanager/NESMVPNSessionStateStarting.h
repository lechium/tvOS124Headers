//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateStarting : NESMVPNSessionState
{
    long long _tunnelConfigurationInstallState;	// 40 = 0x28
}

@property long long tunnelConfigurationInstallState; // @synthesize tunnelConfigurationInstallState=_tunnelConfigurationInstallState;
- (void)handleInterfaceUnavailable:(id)arg1;	// IMP=0x000000010005d450
- (void)handleTimeout;	// IMP=0x000000010005d3a0
- (void)handleSetConfigurationResult:(_Bool)arg1;	// IMP=0x000000010005d1c0
- (_Bool)handleSetConfiguration;	// IMP=0x000000010005d170
- (void)handlePluginStatusDidChangeToConnected:(id)arg1;	// IMP=0x000000010005d0a0
- (void)handlePlugin:(id)arg1 didStartWithPID:(int)arg2;	// IMP=0x000000010005cc30
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010005ca1c
- (id)init;	// IMP=0x000000010005c9e0

@end

