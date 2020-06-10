//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSDictionary, NSURL;
@protocol ASAssetMetadataUpdatePolicy, OS_dispatch_queue;

@interface ASAssetRepository : NSObject
{
    NSURL *_repositoryURL;	// 8 = 0x8
    NSURL *_supplementalAssetMetadataDirectoryURL;	// 16 = 0x10
    id <ASAssetMetadataUpdatePolicy> _updatePolicy;	// 24 = 0x18
    double _automaticMetadataUpdateIntervalOverride;	// 32 = 0x20
    NSDictionary *_assetTypeDescriptors;	// 40 = 0x28
    NSCache *_availableAssetsMetadataCache;	// 48 = 0x30
    NSCache *_installedAssetsMetadataCache;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    CDUnknownBlockType _assetUpdateAvailableHandler;	// 72 = 0x48
}

@property(copy, nonatomic) CDUnknownBlockType assetUpdateAvailableHandler; // @synthesize assetUpdateAvailableHandler=_assetUpdateAvailableHandler;
- (_Bool)importAssetTypeDescriptors:(id)arg1;	// IMP=0x000000010003a208
- (id)_assetTypeDescriptorsURL;	// IMP=0x000000010003a1e8
- (_Bool)updateAllStaleMetadata:(id *)arg1;	// IMP=0x000000010003a010
- (void)scanCachedMetadataForUpdates;	// IMP=0x0000000100039efc
- (void)_updateAllStaleMetadata:(CDUnknownBlockType)arg1;	// IMP=0x0000000100039a30
- (double)timeUntilNextAutomaticMetadataUpdate;	// IMP=0x0000000100039964
- (double)_timeUntilNextAutomaticMetadataUpdate;	// IMP=0x0000000100039710
- (double)_timeUntilNextAutomaticMetadataUpdateForAssetType:(id)arg1 withMetadata:(id)arg2;	// IMP=0x00000001000395a0
- (void)_enumerateCachedMetadataUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000392a8
- (_Bool)writeAssetIntoInstalledAssetMetadata:(id)arg1 assetType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100039124
- (_Bool)_writeAssetIntoInstalledAssetMetadata:(id)arg1 assetType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100038f48
- (_Bool)validateAsset:(id)arg1 ofAssetType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100038da8
- (_Bool)removeAsset:(id)arg1 ofAssetType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100038b64
- (_Bool)_removeAsset:(id)arg1 ofAssetType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100038998
- (id)attributeForKey:(id)arg1 onAssetType:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003879c
- (id)attributesForKeys:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000384ac
- (id)attributeForKey:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000383ec
- (id)_assetMatchingAttributes:(id)arg1 ofAssetType:(id)arg2 atIndex:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x00000001000380c8
- (_Bool)setAttribute:(id)arg1 forKey:(id)arg2 onAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100037f40
- (_Bool)setAttributes:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100037cdc
- (_Bool)_setAttributes:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000379dc
- (_Bool)setAttribute:(id)arg1 forKey:(id)arg2 onAsset:(id)arg3 ofAssetType:(id)arg4 error:(id *)arg5;	// IMP=0x000000010003771c
- (id)installedAndDownloadingAssetsOfAssetType:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100037578
- (id)_installedAndDownloadingAssetsOfAssetType:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100037310
- (_Bool)performDataMigrationAndReturnError:(id *)arg1;	// IMP=0x0000000100036d74
- (_Bool)enumerateInstalledAssetsOfAssetType:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100036c2c
- (_Bool)enumerateInstalledAssetsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100036810
- (_Bool)_enumerateInstalledAssetsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000361c4
- (id)assetsOfAssetType:(id)arg1 matchingPredicate:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100036094
- (id)_assetsOfAssetType:(id)arg1 matchingPredicate:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000359cc
- (id)_metadataForAvailableAssetsOfAssetType:(id)arg1;	// IMP=0x0000000100035980
- (void)resetRepositoryForAssetType:(id)arg1;	// IMP=0x00000001000356e8
- (void)resetCaches;	// IMP=0x0000000100035678
- (void)_discardCachedAssetMetadata;	// IMP=0x0000000100035630
- (void)_cacheAssetMetadata:(id)arg1 forAssetType:(id)arg2;	// IMP=0x00000001000355cc
- (id)_cachedAssetMetadataForAssetType:(id)arg1;	// IMP=0x00000001000354f4
- (_Bool)_setInstalledAssetAttributes:(id)arg1 forAssetType:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000354d8
- (_Bool)_setInstalledAssetsMetadataValue:(id)arg1 forKey:(id)arg2 onAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000352c0
- (id)_installedAssetMetadataForAssetType:(id)arg1;	// IMP=0x00000001000351e8
- (id)_supplementalAssetMetadataForAssetType:(id)arg1;	// IMP=0x000000010003514c
- (void)updateMetadataForAssetType:(id)arg1 overRide:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000350a4
- (void)_updateMetadataForAssetType:(id)arg1 overRide:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100034d1c
- (void)_downloadMetadataForAssetType:(id)arg1 fromURL:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100034560
- (_Bool)_lastModifiedDateIsValid:(id)arg1;	// IMP=0x0000000100034530
- (void)_scanAssets:(id)arg1 forUpdatesForAssetType:(id)arg2;	// IMP=0x0000000100034418
- (void)_findUpdatesForAssets:(id)arg1 withAvailableAssets:(id)arg2 usingDescriptor:(id)arg3;	// IMP=0x0000000100033ed8
- (_Bool)_assetTypeDescriptorSupportsAutomaticAssetUpdates:(id)arg1;	// IMP=0x0000000100033e50
- (id)_lastDownloadedDateForAssetMetadataType:(id)arg1 fromURL:(id)arg2;	// IMP=0x0000000100033d90
- (id)lastDownloadedDateForAssetMetadataType:(id)arg1;	// IMP=0x0000000100033d24
- (void)_downloadResourceAtURL:(id)arg1 withOptions:(id)arg2 ifNewerThan:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100033a88
- (int)_verifyAssetMetadata:(id)arg1;	// IMP=0x0000000100033a80
- (id)_URLForInstalledAssetMetadataForAssetType:(id)arg1;	// IMP=0x0000000100033a38
- (id)_URLForCachedAssetMetadataForAssetType:(id)arg1;	// IMP=0x00000001000339f0
- (id)_remoteURLForAssetType:(id)arg1 relativeTo:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003387c
- (id)_relativePathToMetadataForAssetType:(id)arg1 extension:(id)arg2;	// IMP=0x0000000100033810
- (id)directoryURLForAssetsOfAssetType:(id)arg1;	// IMP=0x00000001000336b8
@property(readonly, nonatomic) NSArray *assetTypeDescriptors;
- (id)_assetTypeDescriptors;	// IMP=0x000000010003350c
- (id)_assetTypeDescriptorForAssetType:(id)arg1;	// IMP=0x000000010003347c
@property(nonatomic) double automaticMetadataUpdateIntervalOverride;
@property(retain, nonatomic) id <ASAssetMetadataUpdatePolicy> updatePolicy;
@property(copy, nonatomic) NSURL *supplementalAssetMetadataDirectoryURL;
- (id)getRepoState;	// IMP=0x0000000100032d40
@property(copy, nonatomic) NSURL *repositoryURL;
- (void)dealloc;	// IMP=0x0000000100032a4c
- (id)initWithRepositoryURL:(id)arg1;	// IMP=0x0000000100032938

@end
