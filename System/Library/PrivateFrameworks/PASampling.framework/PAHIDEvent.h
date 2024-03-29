/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@class NSMutableArray, NSArray;

@interface PAHIDEvent : NSObject {

	NSMutableArray* _steps;
	unsigned _hidEventType;
	unsigned long long _hidEventMachAbs;
	double _hidEventTimestamp;

}

@property (readonly) unsigned long long hidEventMachAbs;              //@synthesize hidEventMachAbs=_hidEventMachAbs - In the implementation block
@property (readonly) double hidEventTimestamp;                        //@synthesize hidEventTimestamp=_hidEventTimestamp - In the implementation block
@property (readonly) unsigned hidEventType;                           //@synthesize hidEventType=_hidEventType - In the implementation block
@property (readonly) NSArray * steps;                                 //@synthesize steps=_steps - In the implementation block
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)hidEventWithHIDEventType:(unsigned)arg1 atMachTime:(double)arg2 andMachAbs:(unsigned long long)arg3 ;
+(id)classDictionaryKey;
+(void)parseKTrace:(ktrace_sessionRef)arg1 findingHIDEvents:(/*^block*/id)arg2 ;
-(NSArray *)steps;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithHIDEventType:(unsigned)arg1 atMachTime:(double)arg2 andMachAbs:(unsigned long long)arg3 ;
-(unsigned long long)hidEventMachAbs;
-(id)initWithSerializedHIDEvent:(const SCD_Struct_PA8*)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(double)hidEventTimestamp;
-(unsigned)hidEventType;
-(void)addKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
-(id)debugDescription;
@end

