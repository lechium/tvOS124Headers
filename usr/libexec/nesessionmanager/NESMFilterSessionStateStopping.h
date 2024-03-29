//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMFilterSessionState.h"

@interface NESMFilterSessionStateStopping : NESMFilterSessionState
{
    int _pendingDisposeCount;	// 32 = 0x20
}

@property int pendingDisposeCount; // @synthesize pendingDisposeCount=_pendingDisposeCount;
- (void)handleTimeout;	// IMP=0x000000010003cb48
- (void)handlePluginDisposeComplete:(id)arg1;	// IMP=0x000000010003ca7c
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectedWithError:(long long)arg2;	// IMP=0x000000010003c9d8
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010003c7d4
- (id)init;	// IMP=0x000000010003c788

@end

