/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class NSMutableArray, NSString, NSArray;

@interface SAMountStatus : NSObject {

	NSMutableArray* _snapshots;
	NSString* _path;
	NSString* _type;

}

@property (readonly) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (readonly) NSString * type;                  //@synthesize type=_type - In the implementation block
@property (readonly) NSArray * snapshots;              //@synthesize snapshots=_snapshots - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA31*)arg1 bufferLength:(unsigned long long)arg2 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA31*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA31*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)applyMachTimebase:(mach_timebase_info)arg1 ;
-(void)populateReferencesUsingPAStyleSerializedMountStatus:(const SCD_Struct_SA22*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)enumerateSnapshotsBetweenStartTime:(id)arg1 endTime:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithName:(id)arg1 andType:(id)arg2 ;
-(void)addStatus:(netfs_status*)arg1 atTimestamp:(id)arg2 ;
-(BOOL)isBlockingThread:(unsigned long long)arg1 betweenStartTime:(id)arg2 andEndTime:(id)arg3 ;
-(BOOL)isUnresponsiveBetweenStartTime:(id)arg1 andEndTime:(id)arg2 ;
-(id)copyName;
-(id)copySanitizedName;
-(NSString *)type;
-(NSString *)path;
-(NSArray *)snapshots;
@end

