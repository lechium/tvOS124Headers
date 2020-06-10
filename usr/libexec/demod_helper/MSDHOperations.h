//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDSignedManifest;
@protocol OS_os_transaction;

@interface MSDHOperations : NSObject
{
    MSDSignedManifest *_signedManifest;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100014348
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) MSDSignedManifest *signedManifest; // @synthesize signedManifest=_signedManifest;
- (void).cxx_destruct;	// IMP=0x0000000100016c74
- (_Bool)quitHelper;	// IMP=0x0000000100016c34
- (_Bool)restoreAttributesUnder:(id)arg1 fromManifest:(id)arg2;	// IMP=0x00000001000168d8
- (_Bool)restoreAppDataAttributesUnder:(id)arg1 containerType:(id)arg2 identifier:(id)arg3;	// IMP=0x00000001000165ac
- (_Bool)restoreBackupAttributesUnder:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000001000164b4
- (_Bool)reboot;	// IMP=0x0000000100016408
- (_Bool)moveStagingToFinal:(id)arg1;	// IMP=0x0000000100015dc0
- (_Bool)disableLaunchdServicesForWatch;	// IMP=0x0000000100015af0
- (_Bool)manageDemoVolume:(id)arg1;	// IMP=0x0000000100015994
- (_Bool)updateDataVolume:(id)arg1;	// IMP=0x0000000100015664
- (_Bool)deleteNvram:(id)arg1;	// IMP=0x0000000100015510
- (_Bool)cloneFile:(id)arg1 stagingPath:(id)arg2 expectingHash:(id)arg3 expectingTarget:(id)arg4;	// IMP=0x0000000100015438
- (_Bool)createDeviceManifest:(id)arg1 forBackup:(_Bool)arg2 range:(struct _NSRange)arg3;	// IMP=0x0000000100014fd4
- (_Bool)removeDirectory:(id)arg1;	// IMP=0x0000000100014f3c
- (_Bool)prepareDirectory:(id)arg1 writableByMobile:(_Bool)arg2;	// IMP=0x0000000100014a58
- (_Bool)migratePreferencesFile;	// IMP=0x0000000100014764
- (void)dealloc;	// IMP=0x000000010001442c
- (id)init;	// IMP=0x00000001000143c8

@end
