//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDDeactivateConfigurationOrganizationOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100039e98
+ (id)requiredEntitlements;	// IMP=0x0000000100039d04
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100039cc0
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100039d78
- (unsigned long long)queueGroup;	// IMP=0x0000000100039d70

@end

