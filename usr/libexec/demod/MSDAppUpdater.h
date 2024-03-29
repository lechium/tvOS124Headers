//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDContentServerConnectionFreeSpaceDelegate-Protocol.h"

@class MSDContentServer, MSDSignedManifest, NSString;

@interface MSDAppUpdater : NSObject <MSDContentServerConnectionFreeSpaceDelegate>
{
    MSDSignedManifest *_manifest;	// 8 = 0x8
    MSDContentServer *_server;	// 16 = 0x10
    NSString *_currentApp;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100029ab8
@property(retain, nonatomic) NSString *currentApp; // @synthesize currentApp=_currentApp;
@property(retain, nonatomic) MSDContentServer *server; // @synthesize server=_server;
@property(retain, nonatomic) MSDSignedManifest *manifest; // @synthesize manifest=_manifest;
- (void).cxx_destruct;	// IMP=0x000000010002d524
- (long long)freeSpaceNeeded:(long long)arg1;	// IMP=0x000000010002d358
- (long long)sizeToReserve;	// IMP=0x000000010002d2a8
- (_Bool)stopAllAppsExcept:(id)arg1;	// IMP=0x000000010002d00c
- (_Bool)installAndVerifyApp:(id)arg1 fullIPAHash:(id)arg2 UID:(id)arg3 currentUID:(id)arg4 fromServer:(id)arg5 error:(id *)arg6;	// IMP=0x000000010002cc4c
- (_Bool)verifyApp:(id)arg1 expectedUID:(id)arg2;	// IMP=0x000000010002c864
- (_Bool)installApp:(id)arg1 fullIPAHash:(id)arg2 UID:(id)arg3 currentUID:(id)arg4 fromServer:(id)arg5 error:(id *)arg6;	// IMP=0x000000010002c6c4
- (_Bool)IXInstallApp:(id)arg1 fullIPAHash:(id)arg2 UID:(id)arg3 currentUID:(id)arg4 fromServer:(id)arg5 error:(id *)arg6;	// IMP=0x000000010002b944
- (_Bool)LSInstallApp:(id)arg1 fullIPAHash:(id)arg2 UID:(id)arg3 currentUID:(id)arg4 fromServer:(id)arg5 error:(id *)arg6;	// IMP=0x000000010002b2f0
- (_Bool)updateOrInstallAppAndData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002a544
- (_Bool)removeAppsNotInManifest:(id *)arg1;	// IMP=0x0000000100029d60
- (id)installedApps;	// IMP=0x0000000100029b38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

