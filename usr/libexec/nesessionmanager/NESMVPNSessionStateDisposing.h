//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateDisposing : NESMVPNSessionState
{
    int _pendingDisposeCount;	// 40 = 0x28
}

@property int pendingDisposeCount; // @synthesize pendingDisposeCount=_pendingDisposeCount;
- (void)handleEstablishIPC;	// IMP=0x000000010005febc
- (void)handleTimeout;	// IMP=0x000000010005fd84
- (void)handlePluginDisposeComplete:(id)arg1;	// IMP=0x000000010005fac8
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010005f6f0
- (id)init;	// IMP=0x000000010005f6b4

@end

