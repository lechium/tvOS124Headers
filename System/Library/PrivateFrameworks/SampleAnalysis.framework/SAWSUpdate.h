/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@interface SAWSUpdate : NSObject {

	double _frameStartTime;
	double _deferStartTime;
	double _workStartTime;
	double _workEndTime;

}

@property (readonly) double frameStartTime;              //@synthesize frameStartTime=_frameStartTime - In the implementation block
@property (readonly) double waitStartTime; 
@property (readonly) double waitEndTime; 
@property (readonly) double deferStartTime;              //@synthesize deferStartTime=_deferStartTime - In the implementation block
@property (readonly) double deferEndTime; 
@property (readonly) double workStartTime;               //@synthesize workStartTime=_workStartTime - In the implementation block
@property (readonly) double workEndTime;                 //@synthesize workEndTime=_workEndTime - In the implementation block
@property (readonly) double frameEndTime; 
@property (readonly) double waitDuration; 
@property (readonly) double workDuration; 
@property (readonly) double deferDuration; 
@property (readonly) double frameDuration; 
@property (readonly) BOOL wasIdle; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(void)printASCIIBarLegendToStream:(id)arg1 ;
-(double)frameDuration;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(double)frameStartTime;
-(double)deferStartTime;
-(double)waitEndTime;
-(double)waitStartTime;
-(double)waitDuration;
-(double)workStartTime;
-(double)workEndTime;
-(double)deferEndTime;
-(double)frameEndTime;
-(double)workDuration;
-(double)deferDuration;
-(BOOL)wasIdle;
-(void)printFPSASCIIBarToStream:(id)arg1 ;
@end

