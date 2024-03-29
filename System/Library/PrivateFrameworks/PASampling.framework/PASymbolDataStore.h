/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSMutableDictionary, NSMutableSet, PAImageInfo, NSString, NSMutableArray, PABinaryLocator;

@interface PASymbolDataStore : NSObject <PASerializable> {

	NSMutableDictionary* _uuidToSymbolOwnerDictionary;
	NSMutableDictionary* _uuidToSharedCacheImageInfoDictionary;
	NSMutableSet* _sharedCacheUUIDsAlreadySearchedFor;
	NSMutableDictionary* _uuidToCSSymbolOwnerCache;
	NSMutableDictionary* _pidToCSSymbolicatorCache;
	PAImageInfo* _sharedCache64bit;
	PAImageInfo* _sharedCache32bit;
	PAImageInfo* _kernelCache;
	NSString* _dscSymDir;
	NSMutableArray* _dsymPaths;
	PABinaryLocator* _binaryLocator;
	BOOL _shouldSymbolicate;
	BOOL _shouldUseDsymForUUIDToFindBinaries;
	CSRange _sharedCache64bitRange;
	CSRange _sharedCache32bitRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) PAImageInfo * sharedCache64bit;                       //@synthesize sharedCache64bit=_sharedCache64bit - In the implementation block
@property (retain) PAImageInfo * sharedCache32bit;                       //@synthesize sharedCache32bit=_sharedCache32bit - In the implementation block
@property (retain) NSString * dscSymDir;                                 //@synthesize dscSymDir=_dscSymDir - In the implementation block
@property (retain) PAImageInfo * kernelCache;                            //@synthesize kernelCache=_kernelCache - In the implementation block
@property (assign) BOOL shouldSymbolicate;                               //@synthesize shouldSymbolicate=_shouldSymbolicate - In the implementation block
@property (assign) BOOL shouldUseDsymForUUIDToFindBinaries;              //@synthesize shouldUseDsymForUUIDToFindBinaries=_shouldUseDsymForUUIDToFindBinaries - In the implementation block
+(void)takeOwnershipOfCoreSymbolicationCachingPolicies;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)classDictionaryKey;
-(CSTypeRef)csSymbolicatorForPid:(int)arg1 ;
-(void)_addNewSymbolOwnerForCSSymbolOwnerRef:(CSTypeRef)arg1 ;
-(void)_fillUUIDCacheWithKernelSymbolOwners;
-(id)symbolHandleForAddress:(unsigned long long)arg1 inLivingPid:(int)arg2 ;
-(id)_symbolHandleForOffsetInBinary:(unsigned long long)arg1 inImageUUID:(id)arg2 andImageMappingSlide:(unsigned long long)arg3 andPidHint:(int)arg4 ;
-(id)_PACSSymbolOwnerForImageUUID:(id)arg1 andPath:(id)arg2 andPidHint:(int)arg3 ;
-(id)_symbolHandleForOffsetIntoSymbolOwner:(unsigned long long)arg1 withSymbolOwner:(id)arg2 andSymbolOwnerBaseAddress:(unsigned long long)arg3 andPidHint:(int)arg4 ;
-(id)sharedCacheForArch:(CSArchitecture)arg1 ;
-(id)_sharedCacheMappingsForSharedCacheUUID:(id)arg1 ;
-(CSRange)rangeOfSharedCacheWithArchitecture:(CSArchitecture)arg1 ;
-(id)_symbolHandleForAddress:(unsigned long long)arg1 withImageUUIDMappings:(id)arg2 andImageMappingSlide:(unsigned long long)arg3 andPidHint:(int)arg4 ;
-(id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 withBinaryOffsetInTask:(unsigned long long)arg3 inLivingPid:(int)arg4 ;
-(id)symbolHandleForAddress:(unsigned long long)arg1 withSymbolicator:(CSTypeRef)arg2 ;
-(void)makeSureKernelBinariesAreKnown;
-(id)addDSCSymFromBuffer:(const void*)arg1 withLength:(unsigned long long)arg2 ;
-(id)symbolHandleForAddress:(unsigned long long)arg1 inSampleTask:(id)arg2 isLiving:(BOOL)arg3 ;
-(id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inLivingPid:(int)arg3 ;
-(id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inSampleTask:(id)arg3 isLiving:(BOOL)arg4 ;
-(id)symbolHandleForOffset:(unsigned long long)arg1 inBinary:(id)arg2 inLivingPid:(int)arg3 ;
-(void)cacheSymbolicatorForPid:(int)arg1 ;
-(void)flushCachedSymbolicatorForPid:(int)arg1 ;
-(void)flushSymbolicatorCache;
-(void)flushCachedSymbolOwnerForUUID:(id)arg1 ;
-(void)flushSymbolOwnerCache;
-(BOOL)shouldSymbolicate;
-(void)setShouldSymbolicate:(BOOL)arg1 ;
-(id)copyImageInfosForLivingPid:(int)arg1 ;
-(BOOL)_isLikelyToBeKernelAddress:(unsigned long long)arg1 ;
-(BOOL)shouldUseDsymForUUIDToFindBinaries;
-(void)setShouldUseDsymForUUIDToFindBinaries:(BOOL)arg1 ;
-(PAImageInfo *)sharedCache64bit;
-(void)setSharedCache64bit:(PAImageInfo *)arg1 ;
-(PAImageInfo *)sharedCache32bit;
-(void)setSharedCache32bit:(PAImageInfo *)arg1 ;
-(NSString *)dscSymDir;
-(void)setDscSymDir:(NSString *)arg1 ;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)ownerContainingSymbol:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(PAImageInfo *)kernelCache;
-(void)addSymbolsFromTailspin:(id)arg1 ;
-(void)addDsymPaths:(id)arg1 ;
-(void)setKernelCache:(PAImageInfo *)arg1 ;
-(id)init;
-(void)dealloc;
@end

