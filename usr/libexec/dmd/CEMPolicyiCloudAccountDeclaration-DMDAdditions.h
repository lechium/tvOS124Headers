//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPolicyiCloudAccountDeclaration.h>

#import "DMDRequestProvidingConfiguration-Protocol.h"

@class NSString;

@interface CEMPolicyiCloudAccountDeclaration (DMDAdditions) <DMDRequestProvidingConfiguration>
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x000000010000991c
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100009720
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100009714
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000093f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

