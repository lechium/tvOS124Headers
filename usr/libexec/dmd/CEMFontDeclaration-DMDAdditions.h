//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMFontDeclaration.h>

#import "DMDOperationProvidingAsset-Protocol.h"

@class NSString;

@interface CEMFontDeclaration (DMDAdditions) <DMDOperationProvidingAsset>
- (id)dmf_removeAssetOperationWithInstallMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100007304
- (id)dmf_installAssetOperationWithReferenceResolver:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100007294

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

