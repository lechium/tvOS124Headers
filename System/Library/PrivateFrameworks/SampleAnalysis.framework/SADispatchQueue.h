/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, NSString, NSArray;

@interface SADispatchQueue : NSObject <SASerializable> {

	NSMutableArray* _dispatchQueueStates;
	BOOL _isConcurrent;
	unsigned long long _dispatchQueueId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL isConcurrent;                                 //@synthesize isConcurrent=_isConcurrent - In the implementation block
@property (readonly) unsigned long long dispatchQueueId;              //@synthesize dispatchQueueId=_dispatchQueueId - In the implementation block
@property (readonly) NSArray * dispatchQueueStates;                   //@synthesize dispatchQueueStates=_dispatchQueueStates - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA32*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)dispatchQueueWithId:(unsigned long long)arg1 ;
-(unsigned long long)addStates:(id)arg1 ;
-(BOOL)isConcurrent;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA32*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA32*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary*)arg3 andDataBufferDictionary:(NSMutableDictionary*)arg4 ;
-(unsigned long long)dispatchQueueId;
-(unsigned long long)addState:(id)arg1 ;
-(void)setIsConcurrent:(BOOL)arg1 ;
-(void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(void)paDeserializationAppendState:(id)arg1 ;
-(id)initWithId:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFirstDispatchQueueStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)indexOfLastDispatchQueueStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)firstDispatchQueueStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)lastDispatchQueueStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(NSArray *)dispatchQueueStates;
-(NSString *)debugDescription;
@end

