//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDInstallAppOperation.h"

@interface DMDMDMv1InstallAppOperation : DMDInstallAppOperation
{
}

+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100053e1c
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100056ee4
- (_Bool)_canManageBundleIdentifier:(id)arg1;	// IMP=0x0000000100056ea0
- (void)_updateManagementInfoWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100056c54
- (void)_setUnusedRedemptionCode:(id)arg1;	// IMP=0x0000000100056ad0
- (void)_setRedemptionCode:(id)arg1;	// IMP=0x000000010005694c
- (void)_setState:(unsigned long long)arg1;	// IMP=0x00000001000567a0
- (void)_showInstallationFailurePromptIfNeeded;	// IMP=0x0000000100056460
- (void)_showStorePromptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x00000001000561a0
- (void)_promptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x0000000100055dcc
- (void)_promptIfNeededWithMessageFormat:(id)arg1 success:(CDUnknownBlockType)arg2;	// IMP=0x0000000100055788
- (void)_applyManagementPiecesForRequest:(id)arg1;	// IMP=0x0000000100055658
- (void)_downloadStoreAppForRequest:(id)arg1 type:(long long)arg2;	// IMP=0x00000001000552ac
- (void)_purchaseFreeAppForRequest:(id)arg1;	// IMP=0x000000010005529c
- (void)_redownloadUserAppForRequest:(id)arg1;	// IMP=0x000000010005528c
- (void)_redownloadDeviceAppForRequest:(id)arg1;	// IMP=0x000000010005527c
- (void)_attemptSINFSwapForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100055068
- (void)_installStoreAppForRequest:(id)arg1;	// IMP=0x0000000100054c30
- (void)_installSystemAppWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100054980
- (void)_installEnterpriseAppForRequest:(id)arg1;	// IMP=0x0000000100054600
- (void)_redeemAppWithRedemptionCode:(id)arg1;	// IMP=0x0000000100054298
- (id)_storeAppFormat;	// IMP=0x00000001000541c0
- (void)installAppForRequest:(id)arg1;	// IMP=0x0000000100053f38
- (void)endOperationWithError:(id)arg1;	// IMP=0x0000000100053ecc
- (void)endOperationWithResultObject:(id)arg1;	// IMP=0x0000000100053e60

@end

