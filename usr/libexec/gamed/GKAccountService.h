//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKAccountService-Protocol.h"

@class NSString;

@interface GKAccountService : GKService <GKAccountService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100131c30
+ (Class)interfaceClass;	// IMP=0x0000000100131c1c
- (oneway void)resetCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100131d9c
- (oneway void)authenticationWasCancelled;	// IMP=0x0000000100131d50
- (oneway void)generateIdentityVerificationSignatureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100131c80
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100131c38
- (void)dealloc;	// IMP=0x0000000100131be8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
