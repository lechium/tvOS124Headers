/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampleTaskData.h>

@interface PASampleTaskDataKPerf : PASampleTaskData {

	BOOL isSentinel;
	BOOL filledState;
	BOOL filledMem;
	BOOL filledLatencyQoS;
	PASampleTaskDataKPerf* previousSampleTask;

}

@property (assign) BOOL isSentinel; 
@property (__weak) PASampleTaskDataKPerf * previousSampleTask; 
@property (assign) BOOL filledState; 
@property (assign) BOOL filledMem; 
@property (assign) BOOL filledLatencyQoS; 
-(BOOL)isSentinel;
-(void)setIsSentinel:(BOOL)arg1 ;
-(void)setPrivateData:(id)arg1 ;
-(id)privateData;
-(PASampleTaskDataKPerf *)previousSampleTask;
-(void)setPreviousSampleTask:(PASampleTaskDataKPerf *)arg1 ;
-(BOOL)filledState;
-(void)setFilledState:(BOOL)arg1 ;
-(BOOL)filledMem;
-(void)setFilledMem:(BOOL)arg1 ;
-(BOOL)filledLatencyQoS;
-(void)setFilledLatencyQoS:(BOOL)arg1 ;
@end

