//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMSystemWebDeclaration.h>

#import "DMDRequestProvidingConfiguration-Protocol.h"

@class NSString;

@interface CEMSystemWebDeclaration (DMDAdditions) <DMDRequestProvidingConfiguration>
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x000000010000aeb8
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000aea8
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000ae9c
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000ae28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
