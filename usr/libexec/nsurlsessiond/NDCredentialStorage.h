//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLCredentialStorage.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol NDCredentialStorageDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NDCredentialStorage : NSURLCredentialStorage
{
    NSMutableDictionary *_cachedCredentials;	// 16 = 0x10
    NSMutableDictionary *_cachedDefaultCredentialUsers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <NDCredentialStorageDelegate> _delegate;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
}

@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property __weak id <NDCredentialStorageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010003b8bc
- (void)reset;	// IMP=0x000000010003b7bc
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;	// IMP=0x000000010003b48c
- (id)defaultCredentialForProtectionSpace:(id)arg1;	// IMP=0x000000010003ae4c
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;	// IMP=0x000000010003ac40
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;	// IMP=0x000000010003a9a0
- (id)allCredentials;	// IMP=0x000000010003a600
- (id)credentialsForProtectionSpace:(id)arg1;	// IMP=0x000000010003a130
- (void)populateWithInitialCredentials;	// IMP=0x0000000100039f38
- (id)initWithDelegate:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0000000100039da4

@end

