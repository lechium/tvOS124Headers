//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WhitelistChecker : NSObject
{
    NSDictionary *_domains;	// 8 = 0x8
}

@property(retain, nonatomic) NSDictionary *domains; // @synthesize domains=_domains;
- (void).cxx_destruct;	// IMP=0x00000001000193cc
- (_Bool)handleSystemContainerFiles:(id)arg1 withMetadata:(id)arg2;	// IMP=0x0000000100019144
- (_Bool)shouldRestoreSystemContainer_WatchAndTV:(id)arg1 shared:(_Bool)arg2;	// IMP=0x000000010001909c
- (_Bool)shouldRestoreSystemContainer_iOS:(id)arg1 shared:(_Bool)arg2;	// IMP=0x0000000100018e6c
- (_Bool)file:(id)arg1 blacklisted:(id)arg2;	// IMP=0x0000000100018c4c
- (_Bool)file:(id)arg1 whitelisted:(id)arg2;	// IMP=0x0000000100018ad4
- (id)createFullPathList:(id)arg1 rootPath:(id)arg2 isAllowList:(_Bool)arg3;	// IMP=0x000000010001881c
- (_Bool)annotated:(id)arg1;	// IMP=0x000000010001869c
- (_Bool)checkFile_WatchAndTV:(id)arg1 withMetaData:(id)arg2;	// IMP=0x00000001000184f8
- (_Bool)checkFile_iOS:(id)arg1 withMetaData:(id)arg2;	// IMP=0x0000000100017ea8
- (_Bool)checkManifest:(id)arg1;	// IMP=0x0000000100017cbc
- (_Bool)checkManifestFile:(id)arg1;	// IMP=0x0000000100017adc
- (_Bool)load;	// IMP=0x0000000100017a10

@end
