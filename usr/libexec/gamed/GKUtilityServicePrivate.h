//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKUtilityService.h"

#import "GKUtilityServicePrivate-Protocol.h"

@class NSString;

@interface GKUtilityServicePrivate : GKUtilityService <GKUtilityServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100130918
+ (Class)interfaceClass;	// IMP=0x0000000100130904
- (oneway void)loadDataForURL:(id)arg1 postBody:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100130ccc
- (oneway void)refreshPreferences;	// IMP=0x0000000100130bfc
- (oneway void)updateNotificationTopics;	// IMP=0x0000000100130bd0
- (oneway void)pingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100130bbc
- (oneway void)terminate;	// IMP=0x00000001001309a4
- (oneway void)openGameCenterSettings;	// IMP=0x0000000100130978
- (oneway void)openICloudSettings;	// IMP=0x000000010013094c
- (oneway void)openSettings;	// IMP=0x0000000100130920

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

