//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDRemoveProfileOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006375c
+ (id)requiredEntitlements;	// IMP=0x00000001000636f0
+ (id)whitelistedClassesForRequest;	// IMP=0x00000001000636ac
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100063bd0
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100063894

@end

