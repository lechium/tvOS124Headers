/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSUUID, NSArray, NSString;

@interface SASharedCache : NSObject <SAJSONSerialization, SASerializable> {

	NSUUID* _uuid;
	unsigned long long _slide;
	NSArray* _binaryLoadInfos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSArray * binaryLoadInfos;                                  //@synthesize binaryLoadInfos=_binaryLoadInfos - In the implementation block
@property (readonly) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long slide;                                 //@synthesize slide=_slide - In the implementation block
@property (readonly) unsigned long long textSegmentsStartAddress; 
@property (readonly) unsigned long long textSegmentsEndAddress; 
+(void)clearCaches;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA11*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)currentSharedCache;
+(id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 ;
+(void)addDSCSymData:(id)arg1 ;
+(void)_doSharedCachesWork:(/*^block*/id)arg1 ;
+(void)_doDscSymDirsWork:(/*^block*/id)arg1 ;
+(id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 findMappingsIfUnknown:(BOOL)arg3 ;
+(id)dscSymDirs;
+(void)applyBinaryLoadInfos:(id)arg1 sharedCacheUUID:(id)arg2 slide:(unsigned long long)arg3 ;
+(void)addDscSymDir:(id)arg1 ;
+(id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 binaryLoadInfos:(id)arg3 ;
-(unsigned long long)slide;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)textSegmentsStartAddress;
-(unsigned long long)textSegmentsEndAddress;
-(NSArray *)binaryLoadInfos;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA11*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA11*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary*)arg3 andDataBufferDictionary:(NSMutableDictionary*)arg4 ;
-(BOOL)matchesUUID:(unsigned char)arg1 slide:(unsigned long long)arg2 ;
-(void)setBinaryLoadInfos:(NSArray *)arg1 ;
-(void)_findSharedCacheMappings;
-(id)initWithUUID:(id)arg1 slide:(unsigned long long)arg2 ;
-(NSString *)debugDescription;
-(NSUUID *)uuid;
@end

