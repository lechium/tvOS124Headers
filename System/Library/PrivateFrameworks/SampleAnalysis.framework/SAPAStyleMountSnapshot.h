/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAMountSnapshot;

@interface SAPAStyleMountSnapshot : NSObject {

	SAMountSnapshot* _mountSnapshot;

}

@property (retain) SAMountSnapshot * mountSnapshot;              //@synthesize mountSnapshot=_mountSnapshot - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA23*)arg1 bufferLength:(unsigned long long)arg2 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA23*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(SAMountSnapshot *)mountSnapshot;
-(void)setMountSnapshot:(SAMountSnapshot *)arg1 ;
@end
