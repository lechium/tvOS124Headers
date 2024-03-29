//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject
{
    LSApplicationWorkspace *_lsWorkspace;	// 8 = 0x8
}

+ (id)defaultWorkspace;	// IMP=0x000000010007599c
@property(retain, nonatomic) LSApplicationWorkspace *lsWorkspace; // @synthesize lsWorkspace=_lsWorkspace;
- (_Bool)wasProductionSignedForProcess:(int)arg1;	// IMP=0x00000001000762d8
- (_Bool)allowProductionForProcess:(int)arg1;	// IMP=0x00000001000762d0
- (id)availableGamesAndIdentifiers;	// IMP=0x0000000100076144
- (id)availableGameIdentifiers;	// IMP=0x0000000100075f28
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;	// IMP=0x0000000100075de4
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;	// IMP=0x0000000100075bf8
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x0000000100075bd4
- (void)openGameCenterSettings;	// IMP=0x0000000100075bc8
- (void)openURL:(id)arg1;	// IMP=0x0000000100075bac
- (void)openICloudSettings;	// IMP=0x0000000100075b58
- (void)openSettings;	// IMP=0x0000000100075b04
- (id)applicationProxyForBundleID:(id)arg1;	// IMP=0x0000000100075abc
- (void)dealloc;	// IMP=0x0000000100075a64
- (id)initWithWorkspace:(id)arg1;	// IMP=0x0000000100075a04

@end

