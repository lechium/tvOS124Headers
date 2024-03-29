//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKAccountService-Protocol.h"
#import "GKAccountServicePrivate-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GKAuthenticationWrapperService : GKService <GKAccountService, GKAccountServicePrivate>
{
    GKService *_service;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_authQueue;	// 16 = 0x10
    NSDictionary *_signatureLookup;	// 24 = 0x18
}

+ (id)serviceForBundleID:(id)arg1 player:(id)arg2;	// IMP=0x000000010007808c
+ (id)serviceForClient:(id)arg1 player:(id)arg2;	// IMP=0x0000000100077fb4
+ (id)authenticationWrapperForService:(id)arg1;	// IMP=0x0000000100077f0c
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000010007bef8
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000010007bdfc
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007badc
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010007b798
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x000000010007afcc
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010007aa0c
- (oneway void)resetCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007a8e0
- (oneway void)signOutPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007a3e4
- (oneway void)authenticationCancelled;	// IMP=0x000000010007a2d4
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007a1b4
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007a094
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100079f14
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100079dd8
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100079c74
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 usingFastPath:(_Bool)arg4 displayAuthUI:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100079b0c
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100079ad8
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 altDSID:(id)arg5 usingFastPath:(_Bool)arg6 displayAuthUI:(_Bool)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x0000000100078b20
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 altDSID:(id)arg5 usingFastPath:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x0000000100078af0
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000787d0
- (oneway void)authenticationWasCancelled;	// IMP=0x00000001000786c0
- (oneway void)generateIdentityVerificationSignatureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000782d8
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100078164
- (void)dealloc;	// IMP=0x0000000100077e8c
- (id)initWithService:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100077d60
- (void)_buildSignatureLookupForProtocol:(id)arg1;	// IMP=0x0000000100077bd4
- (id)initWithClient:(id)arg1;	// IMP=0x0000000100077afc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

