/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_workloop;
#import <Celestial/Celestial-Structs.h>
@class NSMapTable, NSObject;

@interface BWInferenceScheduler : NSObject {

	os_unfair_lock_s _connectionsLock;
	NSMapTable* _connectionsByIdentifier;
	NSObject*<OS_dispatch_workloop> _inferenceWorkloop;
	NSObject*<OS_dispatch_workloop> _scalingWorkloop;

}
+(void)initialize;
-(id)_queueForJob:(SCD_Struct_BW40*)arg1 fromConnection:(id)arg2 ;
-(void)_processJobsFromFramebuffer:(id)arg1 usingInputSampleBuffer:(opaqueCMSampleBufferRef)arg2 inferencePropagationHandler:(/*^block*/id)arg3 atExecutionTime:(SCD_Struct_BW2)arg4 forConnection:(id)arg5 ;
-(unsigned long long)registerInferenceConnection;
-(void)unregisterInferenceConnection:(unsigned long long)arg1 ;
-(int)prepareForInferenceRequirements:(id)arg1 dependencyProviderSource:(id)arg2 formatProvider:(id)arg3 pixelBufferPoolProvider:(id)arg4 connection:(unsigned long long)arg5 ;
-(int)performInferencesForConnection:(unsigned long long)arg1 usingInputSampleBuffer:(opaqueCMSampleBufferRef)arg2 attachingResultsToSampleBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(id)init;
-(void)dealloc;
@end

