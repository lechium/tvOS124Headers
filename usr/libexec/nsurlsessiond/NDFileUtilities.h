//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NDFileUtilities : NSObject
{
}

+ (void)setDaemonWorkState:(_Bool)arg1;	// IMP=0x00000001000325d4
+ (id)defaultDownloadDirectoryForBundleID:(id)arg1;	// IMP=0x000000010003252c
+ (id)defaultDownloadDirectoryContainer;	// IMP=0x0000000100032304
+ (void)createDirectoryAtURL:(id)arg1;	// IMP=0x0000000100032178
+ (void)createDirectoryAtPath:(id)arg1;	// IMP=0x0000000100031fec
+ (_Bool)createDataVaultDirectoryAtPath:(id)arg1;	// IMP=0x0000000100031b50
+ (void)removeItemAtURL:(id)arg1;	// IMP=0x00000001000319cc
+ (void)removeItemAtPath:(id)arg1;	// IMP=0x0000000100031848
+ (id)nsurlsessiondLaunchdPath;	// IMP=0x00000001000317cc
+ (id)sessionPath:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00000001000316e4
+ (id)bundleManagerPath:(id)arg1;	// IMP=0x0000000100031604
+ (id)nsurlsessiondPath;	// IMP=0x0000000100031550
+ (id)oldNonDataVaultDaemonPath;	// IMP=0x000000010003149c
+ (id)oldDaemonPath;	// IMP=0x00000001000313e8

@end

