//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDAccountManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000100021490
- (_Bool)whitelisted:(id)arg1;	// IMP=0x0000000100026a70
- (id)authenticationFor:(id)arg1 password:(id)arg2 accountType:(id)arg3 serviceType:(long long)arg4 error:(id *)arg5;	// IMP=0x00000001000262ec
- (_Bool)disableFMIP:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000256e0
- (_Bool)signOutiCloudAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000250fc
- (_Bool)signIniCloudAccount:(id)arg1 password:(id)arg2 features:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100023754
- (void)signOutiTunesAccount;	// IMP=0x00000001000232c8
- (_Bool)signIniTunesAccount:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100022b18
- (id)existingAccounts;	// IMP=0x00000001000228f0
- (_Bool)setupiTunes:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002243c
- (_Bool)setupiCloud:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100021e90
- (_Bool)trySetupAccounts:(id *)arg1;	// IMP=0x000000010002172c
- (_Bool)setupAccounts:(id *)arg1;	// IMP=0x0000000100021510

@end

