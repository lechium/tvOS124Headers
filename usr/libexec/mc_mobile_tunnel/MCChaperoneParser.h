//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MDM/MCMDMParser.h>

@class MCIPCUTunnelParser;

@interface MCChaperoneParser : MCMDMParser
{
    MCIPCUTunnelParser *_iPCUParser;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000093fc
- (void)commandProceedWithKeybagMigrationRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009334
- (void)waitUntilKeybagRollingHasBeenPerformedCompletionBlock:(CDUnknownBlockType)arg1 timeRemaining:(double)arg2;	// IMP=0x0000000100008c80
- (_Bool)isKeybagRollingNeeded;	// IMP=0x0000000100008ab0
- (void)commandSetDefaultMDMOptionsRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000089b0
- (void)commandDefaultMDMOptionsCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000088f0
- (id)_clearPasscode:(id)arg1;	// IMP=0x0000000100008708
- (id)_requestUnlockToken:(id)arg1;	// IMP=0x0000000100008598
- (id)_removeProfile:(id)arg1;	// IMP=0x00000001000083b0
- (id)_profileList:(id)arg1;	// IMP=0x00000001000083a0
- (id)_removeApplication:(id)arg1;	// IMP=0x0000000100008380
- (id)_managedApplicationList:(id)arg1;	// IMP=0x0000000100008360
- (id)_applyRedemptionCode:(id)arg1;	// IMP=0x0000000100008340
- (void)_installApplication:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008240
- (id)_allCommands;	// IMP=0x0000000100007dcc
- (void)_processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007a40
- (void)processRequest:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000079d0
- (id)init;	// IMP=0x0000000100007938

@end
