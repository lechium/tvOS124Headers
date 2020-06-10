//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAutoUnlockTransportClient-Protocol.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockAKSManager : NSObject <SDAutoUnlockTransportClient>
{
    _Bool _wristDetectDisabled;	// 8 = 0x8
    _Bool _autoUnlockDisabledDueToManagement;	// 9 = 0x9
    _Bool _waitingForUnlock;	// 10 = 0xa
    _Bool _t208Machine;	// 11 = 0xb
    NSString *_localDeviceID;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSData *_localLTK;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_keybagAssertionTimer;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_waitingForUnlockTimer;	// 56 = 0x38
    NSMutableDictionary *_remoteLTKs;	// 64 = 0x40
    NSMutableDictionary *_cachedSessions;	// 72 = 0x48
    NSMutableDictionary *_cachedSessionKeys;	// 80 = 0x50
    NSMutableDictionary *_watchIDsToPairingRecords;	// 88 = 0x58
    NSMutableDictionary *_preferredRemoteLTKForDeviceID;	// 96 = 0x60
    NSMutableArray *_watchIDsMissingSessionKey;	// 104 = 0x68
    NSString *_remoteLTKStorageFilePath;	// 112 = 0x70
    NSString *_watchIDsToPairingRecordsStorageFilePath;	// 120 = 0x78
    id _keybagAssertion;	// 128 = 0x80
    NSString *_companionIDStorageFilePath;	// 136 = 0x88
    NSString *_watchIDToCompanionIDStorageFilePath;	// 144 = 0x90
}

+ (id)sharedManager;	// IMP=0x0000000100142518
@property(copy, nonatomic) NSString *watchIDToCompanionIDStorageFilePath; // @synthesize watchIDToCompanionIDStorageFilePath=_watchIDToCompanionIDStorageFilePath;
@property(copy, nonatomic) NSString *companionIDStorageFilePath; // @synthesize companionIDStorageFilePath=_companionIDStorageFilePath;
@property(retain) id keybagAssertion; // @synthesize keybagAssertion=_keybagAssertion;
@property(copy, nonatomic) NSString *watchIDsToPairingRecordsStorageFilePath; // @synthesize watchIDsToPairingRecordsStorageFilePath=_watchIDsToPairingRecordsStorageFilePath;
@property(copy, nonatomic) NSString *remoteLTKStorageFilePath; // @synthesize remoteLTKStorageFilePath=_remoteLTKStorageFilePath;
@property(retain, nonatomic) NSMutableArray *watchIDsMissingSessionKey; // @synthesize watchIDsMissingSessionKey=_watchIDsMissingSessionKey;
@property(retain, nonatomic) NSMutableDictionary *preferredRemoteLTKForDeviceID; // @synthesize preferredRemoteLTKForDeviceID=_preferredRemoteLTKForDeviceID;
@property(retain, nonatomic) NSMutableDictionary *watchIDsToPairingRecords; // @synthesize watchIDsToPairingRecords=_watchIDsToPairingRecords;
@property(retain, nonatomic) NSMutableDictionary *cachedSessionKeys; // @synthesize cachedSessionKeys=_cachedSessionKeys;
@property(retain, nonatomic) NSMutableDictionary *cachedSessions; // @synthesize cachedSessions=_cachedSessions;
@property(retain, nonatomic) NSMutableDictionary *remoteLTKs; // @synthesize remoteLTKs=_remoteLTKs;
@property(retain) NSObject<OS_dispatch_source> *waitingForUnlockTimer; // @synthesize waitingForUnlockTimer=_waitingForUnlockTimer;
@property(retain) NSObject<OS_dispatch_source> *keybagAssertionTimer; // @synthesize keybagAssertionTimer=_keybagAssertionTimer;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSData *localLTK; // @synthesize localLTK=_localLTK;
@property(nonatomic) _Bool t208Machine; // @synthesize t208Machine=_t208Machine;
@property(nonatomic) _Bool waitingForUnlock; // @synthesize waitingForUnlock=_waitingForUnlock;
@property(nonatomic) _Bool autoUnlockDisabledDueToManagement; // @synthesize autoUnlockDisabledDueToManagement=_autoUnlockDisabledDueToManagement;
@property(nonatomic) _Bool wristDetectDisabled; // @synthesize wristDetectDisabled=_wristDetectDisabled;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
- (void).cxx_destruct;	// IMP=0x00000001001515cc
- (void)updateDynamicStoreEnabled;	// IMP=0x0000000100151388
- (_Bool)cachedAKSSessionsEnabled;	// IMP=0x0000000100151360
- (id)baseDictionary;	// IMP=0x00000001001512e4
- (id)baseLocalKeysDictionary;	// IMP=0x0000000100151290
- (id)baseLocalKeysDictionaryForDevice:(id)arg1 type:(id)arg2;	// IMP=0x00000001001511d4
- (id)baseModernSyncedDictionary;	// IMP=0x000000010015115c
- (id)modernSyncedDictionaryForDevice:(id)arg1;	// IMP=0x0000000100151048
- (id)baseSyncedDictionary;	// IMP=0x0000000100150fcc
- (id)syncedDictionaryForDevice:(id)arg1;	// IMP=0x0000000100150eb8
- (id)baseRangingDictionary;	// IMP=0x0000000100150e10
- (id)baseRangingDictionaryForDevice:(id)arg1;	// IMP=0x0000000100150d94
- (id)keychainDataForQuery:(id)arg1;	// IMP=0x0000000100150c20
- (void)deleteAllRangingKeys;	// IMP=0x00000001001509ec
- (void)deleteRangingKeyForDeviceID:(id)arg1;	// IMP=0x0000000100150838
- (_Bool)storeRangingKey:(id)arg1 forDeviceID:(id)arg2;	// IMP=0x000000010015059c
- (id)rangingKeyForDeviceID:(id)arg1;	// IMP=0x000000010015053c
- (id)sessionKeyForDeviceID:(id)arg1;	// IMP=0x00000001001503d0
- (_Bool)sessionKeyExistsForDeviceID:(id)arg1;	// IMP=0x0000000100150394
- (id)deriveKeyFromSharedSecret:(id)arg1;	// IMP=0x0000000100150288
- (void)updateSessionKeys;	// IMP=0x000000010014ffb4
- (void)updateRangingKeysIfNeccesary;	// IMP=0x000000010014fc64
- (id)ltkInfoForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x000000010014fb80
- (id)ltkInfoForDeviceID:(id)arg1;	// IMP=0x000000010014fb70
- (id)longTermKeyIDForDeviceID:(id)arg1;	// IMP=0x000000010014fab0
- (id)longTermKeyForDevice:(id)arg1 modern:(_Bool)arg2;	// IMP=0x000000010014fa5c
- (id)anyLongTermKeyForDeviceID:(id)arg1;	// IMP=0x000000010014fa4c
- (void)deleteRemoteLongTermKeyForDeviceID:(id)arg1 modern:(_Bool)arg2 tombstone:(_Bool)arg3;	// IMP=0x000000010014f8c4
- (_Bool)storeLongTermKey:(id)arg1 forDeviceID:(id)arg2 name:(id)arg3 modern:(_Bool)arg4;	// IMP=0x000000010014f5a8
- (_Bool)storeLongTermKey:(id)arg1 forDeviceID:(id)arg2 name:(id)arg3;	// IMP=0x000000010014f4e8
- (void)deleteAllEscrowSecrets;	// IMP=0x000000010014f3bc
- (void)deleteEscrowSecretForDeviceID:(id)arg1;	// IMP=0x000000010014f260
- (id)escrowSecretCreationDateForDeviceID:(id)arg1;	// IMP=0x000000010014f0e4
- (_Bool)escrowSecretExistsForDevice:(id)arg1;	// IMP=0x000000010014ef94
- (_Bool)storeEscrowSecret:(id)arg1 pairingID:(id)arg2 deviceID:(id)arg3;	// IMP=0x000000010014edb4
- (id)keyPairingIDForDeviceID:(id)arg1;	// IMP=0x000000010014ec9c
- (id)escrowSecretForDevice:(id)arg1;	// IMP=0x000000010014e7e0
- (_Bool)storeKeychainItemWithAttributeDictionary:(id)arg1 updateDictionary:(id)arg2 addDictionary:(id)arg3;	// IMP=0x000000010014e614
- (id)autoUnlockFolderPath;	// IMP=0x000000010014e4b4
- (id)loadCompanionIDs;	// IMP=0x000000010014e024
- (void)deleteLegacyCompanionIDs;	// IMP=0x000000010014deac
- (id)migrateLegacyCompanionIDs:(id)arg1;	// IMP=0x000000010014dd6c
- (id)loadLegacyWatchIDToCompanionIDMapping;	// IMP=0x000000010014da04
- (void)deleteLegacyWatchToCompanionIDs;	// IMP=0x000000010014d88c
- (void)migrateLegacyWatchIDToCompanionIDs;	// IMP=0x000000010014d714
- (void)loadWatchIDsToPairingRecords;	// IMP=0x000000010014d688
- (void)saveWatchIDsToPairingRecords;	// IMP=0x000000010014d41c
- (void)removePairingRecordForWatchID:(id)arg1;	// IMP=0x000000010014d39c
- (void)removePairingIDForWatchID:(id)arg1;	// IMP=0x000000010014d234
- (id)pairingIDForWatchID:(id)arg1;	// IMP=0x000000010014d184
- (void)setPairingID:(id)arg1 forWatchID:(id)arg2;	// IMP=0x000000010014cff4
- (void)removeCompanionIDForWatchID:(id)arg1;	// IMP=0x000000010014ce8c
- (id)companionIDForWatchID:(id)arg1;	// IMP=0x000000010014cddc
- (void)setCompanionID:(id)arg1 forWatchID:(id)arg2;	// IMP=0x000000010014cc4c
- (id)allPairedWatchDeviceIDs;	// IMP=0x000000010014cbf8
- (void)reloadPairingRecordsIfNeeded;	// IMP=0x000000010014cb58
- (void)loadRemoteLTKs;	// IMP=0x000000010014c5d0
- (void)loadRemoteLTKsIfNeeded;	// IMP=0x000000010014c57c
- (void)saveRemoteLTKs;	// IMP=0x000000010014c310
- (void)clearRemoteLTKs;	// IMP=0x000000010014c224
- (void)removeRemoteLTKForDeviceID:(id)arg1;	// IMP=0x000000010014c110
- (void)addRemoteLTK:(id)arg1 ltkHash:(id)arg2 ltkModDate:(id)arg3 modernLTK:(id)arg4 modernLTKHash:(id)arg5 modernLTKModeDate:(id)arg6 deviceID:(id)arg7;	// IMP=0x000000010014be18
- (_Bool)disablePairingWithKeyDevice:(id)arg1;	// IMP=0x000000010014bd34
- (_Bool)ltkExistsForKeyDevice:(id)arg1 updateLTKs:(_Bool)arg2;	// IMP=0x000000010014bcf8
- (_Bool)ltkExistsForKeyDevice:(id)arg1;	// IMP=0x000000010014bce8
- (void)removeAllRemoteLTKsOnSignOut;	// IMP=0x000000010014ba60
- (void)disablePairingForAllKeyDevices;	// IMP=0x000000010014b7e4
- (void)deleteEscrowSecretForAllDevices;	// IMP=0x000000010014b508
- (void)handleRequiredStateDisabled;	// IMP=0x000000010014b504
- (_Bool)deviceEnabledAsKey:(id)arg1;	// IMP=0x000000010014b2e4
- (_Bool)deviceEnabledAsKeyForAnyDevice;	// IMP=0x000000010014b0a8
- (_Bool)deviceEnabledAsKeyForAnyIDSDevice;	// IMP=0x000000010014ae6c
- (_Bool)localDeviceEnabledAsKey;	// IMP=0x000000010014adf0
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x000000010014ad0c
- (void)handleLTKResponse:(id)arg1;	// IMP=0x000000010014ad08
- (void)invalidateWaitingForUnlockTimer;	// IMP=0x000000010014ac30
- (void)restartWaitingForUnlockTimer;	// IMP=0x000000010014aa30
- (void)restartKeybagAssertionTimer;	// IMP=0x000000010014a834
- (void)releaseKeybagAssertion;	// IMP=0x000000010014a7b0
- (void)takeMobileKeybagAssertion;	// IMP=0x000000010014a65c
- (_Bool)pendingReceiveForPeer:(id)arg1;	// IMP=0x000000010014a654
- (_Bool)pendingSendForPeer:(id)arg1;	// IMP=0x000000010014a64c
- (_Bool)keychainNeedsSyncingForRequest:(id)arg1;	// IMP=0x000000010014a1c8
- (id)ltksForRequest:(id)arg1;	// IMP=0x0000000100149ba0
- (void)handleLTKRequest:(id)arg1;	// IMP=0x0000000100149b9c
- (void)sendLTKResponseWithPayload:(id)arg1 viewState:(id)arg2 needsUnlock:(id)arg3 currentlySyncing:(id)arg4;	// IMP=0x0000000100149b98
- (void)fetchLTKsFromCompanionForDeviceID:(id)arg1 needsLTK:(_Bool)arg2 remoteNeedsLTK:(_Bool)arg3 checkViewState:(_Bool)arg4;	// IMP=0x0000000100149b94
- (void)fetchLTKsFromCompanion:(_Bool)arg1;	// IMP=0x0000000100149b78
- (void)updatePreferredRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001001497e8
- (id)remoteLTKList;	// IMP=0x00000001001495e4
- (id)remoteLTKEntryForDeviceID:(id)arg1;	// IMP=0x0000000100149560
- (id)remoteLTKHashForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x00000001001494e0
- (_Bool)hashMatchesAnyRemoteLTKForDeviceID:(id)arg1 ltkHash:(id)arg2 isPreferred:(_Bool *)arg3;	// IMP=0x0000000100149250
- (id)remoteLTKForDeviceID:(id)arg1;	// IMP=0x0000000100149174
- (id)allRemoteLTKData;	// IMP=0x0000000100149034
- (id)signedDevices;	// IMP=0x0000000100148ec8
- (id)modernSignedDevices;	// IMP=0x0000000100148d5c
- (id)modificationDataForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x0000000100148b68
- (id)keychainDevices:(_Bool)arg1;	// IMP=0x00000001001488d4
- (id)allKeychainDevices;	// IMP=0x00000001001488c4
- (_Bool)signLTK:(id)arg1 ltkModDate:(id)arg2 modernLTK:(id)arg3 modernLTKModDate:(id)arg4 deviceID:(id)arg5;	// IMP=0x00000001001484fc
- (_Bool)signLTK:(id)arg1 modernLTK:(id)arg2 forDeviceID:(id)arg3;	// IMP=0x000000010014847c
- (_Bool)signLTKsForDeviceID:(id)arg1;	// IMP=0x00000001001483c8
- (void)resignRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001001483bc
- (void)checkRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001001481b4
- (void)checkRemoteLTKs;	// IMP=0x00000001001481b0
- (void)updateRemoteLTKs;	// IMP=0x0000000100147ad8
- (int)ltkSyncStatusForDeviceID:(id)arg1 hash:(id)arg2 modern:(_Bool)arg3;	// IMP=0x00000001001478f4
- (_Bool)deviceIsLocalDevice:(id)arg1;	// IMP=0x0000000100147874
- (long long)keyClassForDeviceID:(id)arg1;	// IMP=0x0000000100147794
- (long long)ltkKeyClass;	// IMP=0x000000010014778c
- (void)updateLocalLTKForSignout;	// IMP=0x0000000100147624
- (id)ltkHashForLocalLTK;	// IMP=0x000000010014759c
- (void)checkLocalLTK;	// IMP=0x0000000100146e08
- (void)generateLocalLTK;	// IMP=0x00000001001469fc
- (_Bool)loadLocalLTK;	// IMP=0x0000000100146444
- (id)deviceIDsMissingSessionKey;	// IMP=0x000000010014631c
- (void)clearAllDeviceIDsMissingSessionKeys;	// IMP=0x00000001001461ec
- (void)removeDeviceIDMissingSessionKey:(id)arg1;	// IMP=0x0000000100146090
- (void)addDeviceIDMissingSessionKey:(id)arg1;	// IMP=0x0000000100145f08
- (id)decryptMessage:(id)arg1 authTag:(id)arg2 nonce:(id)arg3 bluetoothID:(id)arg4 cachedDevices:(_Bool)arg5 errorCode:(long long *)arg6;	// IMP=0x0000000100145570
- (_Bool)encryptMessageData:(id)arg1 deviceID:(id)arg2 encryptedMessage:(id *)arg3 authTag:(id *)arg4 nonce:(id *)arg5;	// IMP=0x00000001001451d4
- (_Bool)canCreateTokenSessionForDeviceID:(id)arg1;	// IMP=0x000000010014517c
- (id)aksAuthorizationSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 externalACMContext:(id)arg3;	// IMP=0x0000000100144eb4
- (id)aksAuthorizationSessionForDeviceID:(id)arg1 originator:(_Bool)arg2;	// IMP=0x0000000100144ea4
- (id)aksAuthSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 usingEscrow:(_Bool)arg3;	// IMP=0x0000000100144b00
- (id)aksAuthSessionForDeviceID:(id)arg1 originator:(_Bool)arg2;	// IMP=0x0000000100144af0
- (id)aksPairingSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 errorCode:(long long *)arg3;	// IMP=0x00000001001448e0
- (void)clearAllAKSCaches;	// IMP=0x0000000100144710
- (void)resetCachedSessionForDeviceID:(id)arg1;	// IMP=0x0000000100144664
- (void)removeAKSCacheForDeviceID:(id)arg1;	// IMP=0x00000001001445f4
- (id)aksCacheForDeviceID:(id)arg1;	// IMP=0x0000000100144570
- (id)exchangeRequestsForData:(id)arg1;	// IMP=0x000000010014433c
- (id)serializedExchangeRequests;	// IMP=0x0000000100144100
- (void)createCacheForDeviceID:(id)arg1;	// IMP=0x0000000100143c58
- (void)reloadAKSCaches;	// IMP=0x0000000100143a60
- (void)consoleUserChanged:(id)arg1;	// IMP=0x0000000100143938
- (void)handleKeyBagLockStateChanged;	// IMP=0x0000000100143934
- (void)screenLockUnlocked:(id)arg1;	// IMP=0x0000000100143884
- (void)appleAccountSignedOut:(id)arg1;	// IMP=0x0000000100143798
- (void)appleAccountSignedIn:(id)arg1;	// IMP=0x000000010014372c
- (void)deviceFirstUnlocked:(id)arg1;	// IMP=0x0000000100143720
- (void)handleManagementChanged:(id)arg1;	// IMP=0x0000000100143494
- (void)addObservers;	// IMP=0x0000000100143334
- (void)loadLocalUniqueIDIfNeeded;	// IMP=0x000000010014321c
@property(readonly, nonatomic) _Bool viewSyncing;
- (void)updateLocalLTK;	// IMP=0x0000000100142a4c
- (void)updateLTKs;	// IMP=0x00000001001429a8
- (void)start;	// IMP=0x00000001001427b4
- (id)init;	// IMP=0x0000000100142598

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

