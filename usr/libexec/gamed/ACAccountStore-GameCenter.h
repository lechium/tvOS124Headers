//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (GameCenter)
- (void)_gkDeleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cdcc0
- (void)_gkSaveCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ccdd4
- (id)_gkAccountForAppleID:(id)arg1;	// IMP=0x00000001000ccaa8
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1;	// IMP=0x00000001000cc8f0
- (id)_gkAllCredentialsForEnvironment:(long long)arg1;	// IMP=0x00000001000cc880
- (id)_gkAllCredentials;	// IMP=0x00000001000cc85c
- (void)_gkSetScope:(unsigned int)arg1 forCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000cc0dc
- (id)_gkCredentialForUsername:(id)arg1 environment:(long long)arg2;	// IMP=0x00000001000cc0a8
- (id)_gkMapAccountsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000cb24c
@end

