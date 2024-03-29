//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface MSDHMessageResponder : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010001a020
@property __weak NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;	// IMP=0x000000010001be58
- (_Bool)quitHelper:(id)arg1;	// IMP=0x000000010001bd08
- (_Bool)reboot:(id)arg1;	// IMP=0x000000010001bbec
- (_Bool)disableLaunchdServicesForWatch:(id)arg1;	// IMP=0x000000010001bad0
- (_Bool)moveStagingToFinal:(id)arg1;	// IMP=0x000000010001b9b0
- (_Bool)manageDemoVolume:(id)arg1;	// IMP=0x000000010001b890
- (_Bool)updateDataVolume:(id)arg1;	// IMP=0x000000010001b770
- (_Bool)deleteNvram:(id)arg1;	// IMP=0x000000010001b650
- (_Bool)restoreAppDataAttributes:(id)arg1;	// IMP=0x000000010001b4a0
- (_Bool)restoreBackupAttributes:(id)arg1;	// IMP=0x000000010001b2c0
- (_Bool)cloneFile:(id)arg1;	// IMP=0x000000010001b0dc
- (_Bool)createDeviceManifest:(id)arg1;	// IMP=0x000000010001aeb0
- (_Bool)removeWorkDirectory:(id)arg1;	// IMP=0x000000010001ad90
- (_Bool)prepareWorkDirectory:(id)arg1;	// IMP=0x000000010001ac6c
- (_Bool)clearStagedDeviceAfterUpdateProcess;	// IMP=0x000000010001aa88
- (_Bool)stageDeviceForUpdateProcess;	// IMP=0x000000010001a8a0
- (_Bool)migratePreferencesFile:(id)arg1;	// IMP=0x000000010001a784
- (void)sendFailResponse;	// IMP=0x000000010001a714
- (void)sendPassResponse;	// IMP=0x000000010001a6a4
- (void)handleXPCMessage:(id)arg1;	// IMP=0x000000010001a338
- (_Bool)hasEntitlementMobileStoreDemod;	// IMP=0x000000010001a104
- (id)init;	// IMP=0x000000010001a0a0

@end

