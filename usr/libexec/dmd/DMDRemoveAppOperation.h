//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDAppOperation.h"

@interface DMDRemoveAppOperation : DMDAppOperation
{
}

+ (void)removeAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006186c
+ (_Bool)removeAppMetadataForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100061670
+ (id)requiredEntitlements;	// IMP=0x00000001000613f0
+ (id)whitelistedClassesForRequest;	// IMP=0x00000001000613ac
- (void)runWithRequest:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000010006145c

@end
