/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMUBacktrace : NSObject <NSCopying> {

	int _flavor;
	SCD_Struct_VM12* _callstack;

}
-(void)setEndTime:(double)arg1 ;
-(unsigned)backtraceLength;
-(unsigned long long*)stackFramePointers;
-(CSTypeRef)_symbolicator;
-(id)initWithSamplingContext:(sampling_context_tRef)arg1 thread:(unsigned)arg2 recordFramePointers:(BOOL)arg3 ;
-(void)fixupStackWithSamplingContext:(sampling_context_tRef)arg1 symbolicator:(CSTypeRef)arg2 ;
-(unsigned long long)dispatchQueueSerialNumber;
-(id)initWithTask:(unsigned)arg1 thread:(unsigned)arg2 is64Bit:(BOOL)arg3 ;
-(void)setLengthTime:(double)arg1 ;
-(unsigned)thread;
-(unsigned long long*)backtrace;
-(int)threadState;
-(void)setThreadState:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStartTime:(double)arg1 ;
@end

