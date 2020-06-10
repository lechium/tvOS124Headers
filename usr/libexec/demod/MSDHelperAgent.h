//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;
@protocol OS_xpc_object;

@interface MSDHelperAgent : NSObject
{
    _Bool _result;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpc_conn;	// 16 = 0x10
    NSCondition *_doneCondition;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100009378
@property(nonatomic) _Bool result; // @synthesize result=_result;
@property(retain, nonatomic) NSCondition *doneCondition; // @synthesize doneCondition=_doneCondition;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpc_conn; // @synthesize xpc_conn=_xpc_conn;
- (void).cxx_destruct;	// IMP=0x000000010000beec
- (_Bool)quitHelper;	// IMP=0x000000010000bd60
- (_Bool)reboot;	// IMP=0x000000010000bb58
- (_Bool)moveStagingToFinal:(id)arg1;	// IMP=0x000000010000b91c
- (_Bool)disableLaunchdServicesForWatch;	// IMP=0x000000010000b714
- (_Bool)manageDemoVolume:(id)arg1;	// IMP=0x000000010000b4d8
- (_Bool)updateDataVolume:(id)arg1;	// IMP=0x000000010000b29c
- (_Bool)deleteNvram:(id)arg1;	// IMP=0x000000010000b060
- (_Bool)restoreAppDataAttributesUnder:(id)arg1 containerType:(id)arg2 identifier:(id)arg3;	// IMP=0x000000010000ad5c
- (_Bool)restoreBackupAttributesUnder:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000010000aabc
- (_Bool)cloneFile:(id)arg1 to:(id)arg2 expectingHash:(id)arg3 expectingTarget:(id)arg4;	// IMP=0x000000010000a6c0
- (id)createDeviceManifest:(id)arg1 forBackup:(_Bool)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000010000a318
- (_Bool)removeDirectory:(id)arg1;	// IMP=0x000000010000a0dc
- (_Bool)prepareDirectory:(id)arg1;	// IMP=0x0000000100009ea0
- (_Bool)clearStagedDeviceAfterUpdateProcess;	// IMP=0x0000000100009c98
- (_Bool)stageDeviceForUpdateProcess;	// IMP=0x0000000100009a90
- (_Bool)migratePreferencesFile;	// IMP=0x0000000100009888
- (void)handleMessage:(id)arg1;	// IMP=0x0000000100009698
- (id)init;	// IMP=0x00000001000093f8

@end

