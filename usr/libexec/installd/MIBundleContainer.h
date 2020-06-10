//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MIContainer.h"

@class MIBundleMetadata, MIExecutableBundle;

@interface MIBundleContainer : MIContainer
{
    MIExecutableBundle *_bundle;	// 8 = 0x8
    MIBundleMetadata *_bundleMetadata;	// 16 = 0x10
}

+ (_Bool)updateiTunesMetadataForAppWithIdentifier:(id)arg1 plistData:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005b494
+ (id)updateSinfDataForAppWithIdentifier:(id)arg1 sinfData:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005b2c0
+ (id)allVPNPluginBundleContainersWithError:(id *)arg1;	// IMP=0x000000010005b288
+ (id)allAppBundleContainersWithError:(id *)arg1;	// IMP=0x000000010005b250
+ (id)tempPluginKitPluginBundleContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b23c
+ (id)tempVPNPluginBundleContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b228
+ (id)tempAppBundleContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b214
+ (id)pluginKitPluginBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000010005b1f8
+ (id)vpnPluginBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000010005b1dc
+ (id)appBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000010005b1c0
@property(copy, nonatomic) MIBundleMetadata *bundleMetadata; // @synthesize bundleMetadata=_bundleMetadata;
@property(readonly, nonatomic) MIExecutableBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;	// IMP=0x000000010005c300
@property(readonly, nonatomic) unsigned int bundleMaxLinkedSDKVersion;
- (_Bool)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x000000010005bf70
- (_Bool)captureBundleByMoving:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010005bc2c
- (_Bool)saveBundleMetadataWithError:(id *)arg1;	// IMP=0x000000010005bb34
- (id)bundleMetadataWithError:(id *)arg1;	// IMP=0x000000010005b980
- (id)_bundleMetadataURL;	// IMP=0x000000010005b920
- (id)initWithContainer:(id)arg1;	// IMP=0x000000010005b6fc

@end
