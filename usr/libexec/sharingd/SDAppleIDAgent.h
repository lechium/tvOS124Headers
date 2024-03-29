//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSDate, NSMutableArray, NSMutableDictionary, NSString, SDAppleIDDatabaseManager, SDAppleIDIdentityRequest, SDAppleIDServerTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAppleIDAgent : NSObject <APSConnectionDelegate>
{
    _Bool _agentEnabled;	// 8 = 0x8
    NSMutableDictionary *_agentMetaInfo;	// 16 = 0x10
    NSString *_appleID;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
    SDAppleIDDatabaseManager *_dbManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    NSMutableArray *_findPersonRequests;	// 56 = 0x38
    SDAppleIDIdentityRequest *_identityRequest;	// 64 = 0x40
    SDAppleIDServerTask *_infoRequest;	// 72 = 0x48
    _Bool _linkIdentityEnabled;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_periodicVerifyTimer;	// 88 = 0x58
    APSConnection *_pushConnection;	// 96 = 0x60
    NSString *_pushEnvironment;	// 104 = 0x68
    SDAppleIDServerTask *_task;	// 112 = 0x70
    SDAppleIDIdentityRequest *_testIdentityRequest;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_throttledRetryTimer;	// 128 = 0x80
    _Bool _updatePush;	// 136 = 0x88
    _Bool _updatePeriodicVerifyTimer;	// 137 = 0x89
}

+ (id)sharedAgent;	// IMP=0x0000000100189d8c
- (void).cxx_destruct;	// IMP=0x000000010018a420
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x000000010018a2fc
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000010018a278
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x000000010018a1b8
- (void)handleUILockStatusChangedNotification;	// IMP=0x000000010018a160
- (void)handleKeyBagFirstUnlockNotification;	// IMP=0x000000010018a108
- (void)handleAppleIDSignedOutNotification;	// IMP=0x000000010018a0b0
- (void)handleAppleIDSignedInNotification;	// IMP=0x000000010018a058
- (void)handleAppleIDChangedNotification;	// IMP=0x000000010018a000
- (id)validationRecordInfoForAppleID:(id)arg1;	// IMP=0x0000000100189ec0
- (id)statusInfo;	// IMP=0x0000000100189e54
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100189c3c
- (void)prefsChanged;	// IMP=0x0000000100189be4
- (void)personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100189b2c
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100189ad0
- (id)myAccount;	// IMP=0x0000000100189a3c
- (void)invalidate;	// IMP=0x00000001001899e4
- (id)detailedDescription;	// IMP=0x0000000100189978
- (void)queryVerifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100189614
- (struct __SecIdentity *)copyIdentityForAppleID:(id)arg1;	// IMP=0x000000010018952c
- (id)verifiedIdentityForCertificateChain:(id)arg1 emailOrPhone:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100188f78
- (id)verifiedIdentityForEmailOrPhone:(id)arg1;	// IMP=0x0000000100188cb4
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100188c58
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001889bc
- (void)activate;	// IMP=0x0000000100188964
- (id)accountStatusForAppleID:(id)arg1;	// IMP=0x00000001001888a0
- (id)accountForAppleID:(id)arg1;	// IMP=0x00000001001887b0
- (_Bool)_wasOldAgentIdentityQueried;	// IMP=0x000000010018877c
- (_Bool)_wasIdentityLinkedOnce;	// IMP=0x0000000100188748
- (void)_verifyStateWithDelay:(double)arg1;	// IMP=0x000000010018866c
- (void)_verifyState;	// IMP=0x00000001001874e8
- (void)_updateMyInfo;	// IMP=0x0000000100187440
- (void)_updateAppleID;	// IMP=0x0000000100187320
- (void)_update;	// IMP=0x000000010018729c
- (id)_statusInfo;	// IMP=0x000000010018715c
- (void)_setMetaInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001870e8
- (void)_setCurrentAppleIDContactInfo:(id)arg1 validationRecord:(id)arg2;	// IMP=0x0000000100187084
- (void)_setCurrentAppleIDIdentity:(id)arg1;	// IMP=0x000000010018705c
- (void)_requestIdentityForAppleID:(id)arg1 certificateToken:(id)arg2 privateKeyPersistentReference:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001869dc
- (void)_requestInfoForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001863ac
- (void)_removeObservers;	// IMP=0x000000010018635c
- (void)_prefsChanged;	// IMP=0x0000000100185fc0
- (void)_personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100185870
- (void)_performServerTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001849fc
- (void)_performOtherTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100184060
- (int)_performKeychainCount;	// IMP=0x0000000100183d48
- (int)_performKeyVerificationForIdentity:(id)arg1;	// IMP=0x0000000100183884
- (id)_metaInfoValueForKey:(id)arg1;	// IMP=0x000000010018386c
- (unsigned long long)_keychainCleanupTag;	// IMP=0x0000000100183844
- (void)_handleThrottledRetryTimerFired;	// IMP=0x00000001001837bc
- (void)_handlePeriodicVerifyTimerFired;	// IMP=0x00000001001836dc
- (void)_handleReceivedIdentity:(id)arg1 forAppleID:(id)arg2 identityRequest:(id)arg3 withError:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100183338
- (void)_handleReceivedCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x0000000100183290
- (void)_handleUntrustedAppleIDCertificateChainForIdentity:(id)arg1;	// IMP=0x00000001001830e4
- (void)_handleUILockStatusChange;	// IMP=0x0000000100182f7c
- (void)_handleUILockStatusChangedNotification;	// IMP=0x0000000100182f04
- (void)_handleServerTaskCompletionWithError:(id)arg1;	// IMP=0x0000000100182d1c
- (void)_handleKeyVerificationFailure;	// IMP=0x0000000100182c74
- (void)_handleKeyBagFirstUnlockNotification;	// IMP=0x0000000100182bfc
- (void)_handleInfoResponse:(id)arg1 forAppleID:(id)arg2 infoRequest:(id)arg3 certificateSerialNumber:(id)arg4 withError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100181e70
- (void)_handleFindPersonResponse:(id)arg1 forRequest:(id)arg2 emailOrPhone:(id)arg3 withError:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010018193c
- (void)_handleCertificateStatusUpdate:(long long)arg1 forAppleID:(id)arg2;	// IMP=0x00000001001813fc
- (void)_handleAppleIDSignedOutNotification;	// IMP=0x00000001001812e0
- (void)_handleAppleIDSignedInNotification;	// IMP=0x00000001001811f4
- (void)_handleAppleIDChangedNotification;	// IMP=0x0000000100181178
- (void)_handleAccountIdentifierValidationRecordMismatch;	// IMP=0x00000001001810b8
- (void)_ensureThrottledRetryTimerStopped;	// IMP=0x000000010018102c
- (void)_ensureThrottledRetryTimerStartedWithSuggestedDelay:(unsigned long long)arg1;	// IMP=0x0000000100180cfc
- (void)_ensurePeriodicVerifyTimerStopped;	// IMP=0x0000000100180c70
- (void)_ensurePeriodicVerifyTimerStarted;	// IMP=0x0000000100180aa4
- (void)_ensurePushStopped;	// IMP=0x00000001001809fc
- (int)_ensureEduModeDevicesAreCleanedUp;	// IMP=0x000000010018073c
- (void)_checkIfAppleIDCertificateChainIsValidForIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001804c8
- (id)_detailedDescription;	// IMP=0x000000010017f138
- (void)_ensurePushStarted;	// IMP=0x000000010017eeb0
- (struct __SecIdentity *)_copyIdentityForAppleID:(id)arg1;	// IMP=0x000000010017ee58
- (void)_clearAccount;	// IMP=0x000000010017eda8
- (void)_cleanUpAccount:(id)arg1;	// IMP=0x000000010017ebb4
- (void)_invalidate;	// IMP=0x000000010017e8fc
- (void)_addObservers;	// IMP=0x000000010017e7e8
- (void)_activate;	// IMP=0x000000010017e730
- (long long)_accountState;	// IMP=0x000000010017e0dc
- (id)_accountForAppleID:(id)arg1;	// IMP=0x000000010017e0c4
- (_Bool)eduModeEnabled;	// IMP=0x000000010017e0bc
- (void)dealloc;	// IMP=0x000000010017e06c
- (id)init;	// IMP=0x000000010017df80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

