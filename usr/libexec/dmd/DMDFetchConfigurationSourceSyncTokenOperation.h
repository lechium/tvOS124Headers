//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDFetchConfigurationSourceSyncTokenOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004c700
+ (id)requiredEntitlements;	// IMP=0x000000010004c638
+ (id)whitelistedClassesForRequest;	// IMP=0x000000010004c5f4
- (void)runWithRequest:(id)arg1;	// IMP=0x000000010004c6b4
- (unsigned long long)queueGroup;	// IMP=0x000000010004c6ac
- (_Bool)runOnMainThread;	// IMP=0x000000010004c6a4

@end

