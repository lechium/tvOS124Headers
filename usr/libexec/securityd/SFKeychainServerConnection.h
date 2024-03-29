//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFKeychainServerProtocol-Protocol.h"

@class NSArray, SecCDKeychain;

__attribute__((visibility("hidden")))
@interface SFKeychainServerConnection : NSObject <SFKeychainServerProtocol>
{
    SecCDKeychain *_keychain;	// 8 = 0x8
    NSArray *_clientAccessGroups;	// 16 = 0x10
}

@property(readonly) NSArray *clientAccessGroups; // @synthesize clientAccessGroups=_clientAccessGroups;
- (void).cxx_destruct;	// IMP=0x00000001000610fc
- (id)passwordCredentialForItemMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100060aac
- (id)passwordCredentialForItem:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000608c0
- (void)rpcReplaceOldCredential:(id)arg1 withNewCredential:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000608ac
- (void)rpcRemoveCredentialWithPersistentIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010006064c
- (void)rpcLookupCredentialsForServiceIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000602a0
- (void)rpcFetchPasswordCredentialForPersistentIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100060038
- (void)rpcAddCredential:(id)arg1 withAccessPolicy:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010005f27c
- (int)keyclassForAccessPolicy:(id)arg1;	// IMP=0x000000010005f1dc
- (id)initWithKeychain:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x000000010005f0e8

@end

