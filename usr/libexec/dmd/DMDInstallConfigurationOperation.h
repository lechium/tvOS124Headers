//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDInstallConfigurationOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004fd54
+ (id)requiredEntitlements;	// IMP=0x000000010004fce0
+ (id)whitelistedClassesForRequest;	// IMP=0x000000010004fc9c
+ (id)_intersectionAliasToFeatures;	// IMP=0x0000000100051ea4
- (unsigned long long)queueGroup;	// IMP=0x000000010004fd4c
- (id)_intersectionFeatureForPayloadRestrictionKey:(id)arg1;	// IMP=0x0000000100051f80
- (id)_applyHeuristicsToRestrictions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100051d20
- (id)_mapMCRestrictionsFromPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100050ec4
- (_Bool)_installRestrictionsPayload:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100050ab4
- (void)_rollbackProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100050828
- (_Bool)_installProfile:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005040c
- (void)runWithRequest:(id)arg1;	// IMP=0x000000010004fe8c

@end

