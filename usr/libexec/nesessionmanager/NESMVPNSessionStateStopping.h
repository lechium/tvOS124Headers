//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateStopping : NESMVPNSessionState
{
}

- (void)handleInterfaceUnavailable:(id)arg1;	// IMP=0x000000010005f5a0
- (void)handlePlugin:(id)arg1 didStartWithPID:(int)arg2;	// IMP=0x000000010005f568
- (void)handleEstablishIPC;	// IMP=0x000000010005f428
- (void)handleTimeout;	// IMP=0x000000010005f2f0
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectedWithReason:(int)arg2;	// IMP=0x000000010005f15c
- (void)handleClearConfigurationResult:(_Bool)arg1;	// IMP=0x000000010005ebc4
- (_Bool)handleClearConfiguration;	// IMP=0x000000010005eab8
- (void)handleSetConfigurationResult:(_Bool)arg1;	// IMP=0x000000010005e9b0
- (_Bool)handleSetConfiguration;	// IMP=0x000000010005e8a4
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010005e834
- (id)init;	// IMP=0x000000010005e7f8

@end

