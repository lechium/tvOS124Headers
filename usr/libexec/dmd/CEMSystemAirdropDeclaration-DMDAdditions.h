//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMSystemAirdropDeclaration.h>

#import "DMDRequestProvidingConfiguration-Protocol.h"

@class NSString;

@interface CEMSystemAirdropDeclaration (DMDAdditions) <DMDRequestProvidingConfiguration>
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x000000010000a4dc
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000a4cc
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000a4c0
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000a44c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
