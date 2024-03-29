/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFPipelineStage.h>

@class PFSerialQueue, NSMutableArray;

@interface PFPipelineStage0 : PFPipelineStage {

	PFSerialQueue* _generatorQueue;
	NSMutableArray* _jobGenerators;

}
-(void)runQueuedJobs;
-(void)setConcurrentJobLimit:(unsigned long long)arg1 ;
-(void)generateNextJob:(unsigned)arg1 ;
-(unsigned long long)indexOfMaxQOSAvailableGenerator;
-(void)addJobs:(unsigned long long)arg1 withQOS:(unsigned)arg2 generator:(/*^block*/id)arg3 pipeline:(id)arg4 ;
-(id)init;
-(id)description;
@end

