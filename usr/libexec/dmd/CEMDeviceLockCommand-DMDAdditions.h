//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMDeviceLockCommand.h>

#import "DMDRequestProvidingCommand-Protocol.h"

@class NSString;

@interface CEMDeviceLockCommand (DMDAdditions) <DMDRequestProvidingCommand>
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x00000001000065ec
- (_Bool)dmf_requestExecutesWithoutReturning;	// IMP=0x00000001000065e4
- (id)dmf_executeOperationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000065dc
- (id)dmf_executeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000652c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

