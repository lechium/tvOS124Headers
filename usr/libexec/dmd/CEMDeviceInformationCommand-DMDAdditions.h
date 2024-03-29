//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMDeviceInformationCommand.h>

#import "DMDRequestProvidingCommand-Protocol.h"

@class NSString;

@interface CEMDeviceInformationCommand (DMDAdditions) <DMDRequestProvidingCommand>
+ (id)deviceInfoKeyFromDMFKey:(id)arg1;	// IMP=0x000000010000521c
+ (id)dmfKeyFromDeviceInfoKey:(id)arg1;	// IMP=0x0000000100004b68
+ (id)deviceInfoRMDKeys;	// IMP=0x0000000100004a48
+ (id)deviceInfoUserChannelKeys;	// IMP=0x0000000100004928
+ (id)deviceInfoDeviceChannelKeys;	// IMP=0x0000000100004544
+ (id)deviceInfoSupervisedKeys;	// IMP=0x0000000100004434
- (void)addRMDSpecificResultsToDictionary:(id)arg1 errors:(id)arg2;	// IMP=0x0000000100006318
- (id)filterQueryForScope;	// IMP=0x0000000100006238
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x0000000100005abc
- (_Bool)dmf_requestExecutesWithoutReturning;	// IMP=0x0000000100005ab4
- (id)dmf_executeOperationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100005aac
- (id)dmf_executeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000058d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

