//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDAppOperation.h"

@class DMDAppMetadata;

@interface DMDMDMv1StartManagingAppOperation : DMDAppOperation
{
    DMDAppMetadata *_metadata;	// 24 = 0x18
}

+ (id)requiredEntitlements;	// IMP=0x0000000100057064
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100056fa4
@property(retain, nonatomic) DMDAppMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;	// IMP=0x00000001000570f4
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100057c8c
- (void)_attemptSINFSwap;	// IMP=0x0000000100057b10
- (void)_setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000001000579ac
- (void)_manageApp;	// IMP=0x00000001000577c0
- (void)_runWithRequest:(id)arg1;	// IMP=0x0000000100057278
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100057108

@end

