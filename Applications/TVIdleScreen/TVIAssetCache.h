//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSURL;

@interface TVIAssetCache : NSObject
{
    unsigned long long _guaranteedAssetLimit;	// 8 = 0x8
    NSMutableDictionary *_assetToURLMap;	// 16 = 0x10
    NSMutableSet *_internalProtectedAssets;	// 24 = 0x18
    NSCountedSet *_protectedAssets;	// 32 = 0x20
    NSURL *_protectedDirectory;	// 40 = 0x28
    NSURL *_purgeableDirectory;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQ;	// 56 = 0x38
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQ; // @synthesize workQ=_workQ;
@property(retain, nonatomic) NSURL *purgeableDirectory; // @synthesize purgeableDirectory=_purgeableDirectory;
@property(retain, nonatomic) NSURL *protectedDirectory; // @synthesize protectedDirectory=_protectedDirectory;
@property(retain, nonatomic) NSCountedSet *protectedAssets; // @synthesize protectedAssets=_protectedAssets;
@property(retain, nonatomic) NSMutableSet *internalProtectedAssets; // @synthesize internalProtectedAssets=_internalProtectedAssets;
@property(retain, nonatomic) NSMutableDictionary *assetToURLMap; // @synthesize assetToURLMap=_assetToURLMap;
@property(nonatomic) unsigned long long guaranteedAssetLimit; // @synthesize guaranteedAssetLimit=_guaranteedAssetLimit;
- (void).cxx_destruct;	// IMP=0x000000010000f3f4
- (_Bool)_createPurgeableDirectoryWithError:(id *)arg1;	// IMP=0x000000010000f26c
- (id)_assetIdentifierForFile:(id)arg1;	// IMP=0x000000010000f214
- (id)_filenameForAssetWithIdentifier:(id)arg1 extension:(id)arg2;	// IMP=0x000000010000f1ac
- (unsigned long long)_countForProtectedAssetWithIdentifier:(id)arg1;	// IMP=0x000000010000f194
- (void)_removeProtectedAssetWithIdentifier:(id)arg1;	// IMP=0x000000010000f17c
- (void)_addProtectedAssetWithIdentifier:(id)arg1;	// IMP=0x000000010000f164
- (_Bool)_isAssetWithIdentifierProtected:(id)arg1;	// IMP=0x000000010000f14c
- (_Bool)_isAssetWithIdentiferExternallyProtected:(id)arg1;	// IMP=0x000000010000f0b0
- (void)_cleanupInternallyProtectedAssets;	// IMP=0x000000010000ec70
- (void)_removeInternallyProtectedAssetWithIdentifier:(id)arg1;	// IMP=0x000000010000ec58
- (void)_addInternallyProtectedAssetWithIdentifier:(id)arg1;	// IMP=0x000000010000ec40
- (_Bool)_isAssetWithIdentifierInternallyProtected:(id)arg1;	// IMP=0x000000010000ec28
- (_Bool)_markAssetWithIdentifier:(id)arg1 asProtected:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010000eb2c
- (_Bool)_markAssetWithIdentifier:(id)arg1 asInternallyProtected:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010000ea7c
- (void)_removeURLForAssetIdentifier:(id)arg1;	// IMP=0x000000010000ea64
- (void)_setURL:(id)arg1 forAssetIdentifier:(id)arg2;	// IMP=0x000000010000ea08
- (id)_urlForAssetIdentifier:(id)arg1;	// IMP=0x000000010000e90c
- (unsigned long long)_count;	// IMP=0x000000010000e8f4
- (_Bool)_containsAssetWithIdentifier:(id)arg1;	// IMP=0x000000010000e8b8
- (id)_allAssetIdentifiers;	// IMP=0x000000010000e8a0
- (_Bool)_removeAssetWithIdentifier:(id)arg1;	// IMP=0x000000010000e68c
- (void)_enumerateAssetFilesInDirectory:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e240
- (_Bool)_moveAssetWithIdentifier:(id)arg1 atURL:(id)arg2 toDirectory:(id)arg3 filename:(id)arg4 error:(id *)arg5;	// IMP=0x000000010000de88
- (_Bool)_moveAssetWithIdentifier:(id)arg1 toDirectory:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000dd74
- (id)_cacheTimestampKeyForAssetWithIdentifier:(id)arg1;	// IMP=0x000000010000dd3c
- (id)_cacheTimestampForAssetWithIdentifier:(id)arg1;	// IMP=0x000000010000dc7c
- (void)_setCacheTimestamp:(id)arg1 forAssetWithIdentifier:(id)arg2;	// IMP=0x000000010000dbdc
- (void)_initializeCache;	// IMP=0x000000010000d6f4
- (_Bool)removeAssetWithIdentifier:(id)arg1;	// IMP=0x000000010000d550
- (_Bool)addAsset:(id)arg1 atURL:(id)arg2 extension:(id)arg3;	// IMP=0x000000010000cf08
- (_Bool)markAsset:(id)arg1 asProtected:(_Bool)arg2;	// IMP=0x000000010000ccb8
- (id)urlForProtectedAsset:(id)arg1;	// IMP=0x000000010000caec
- (_Bool)containsAsset:(id)arg1;	// IMP=0x000000010000c9c8
- (id)initWithDirectory:(id)arg1 guaranteedAssetLimit:(unsigned long long)arg2;	// IMP=0x000000010000c694

@end

