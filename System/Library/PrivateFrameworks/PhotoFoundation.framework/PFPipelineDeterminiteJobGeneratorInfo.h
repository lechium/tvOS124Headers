/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFPipelineJobGeneratorInfo.h>

@interface PFPipelineDeterminiteJobGeneratorInfo : PFPipelineJobGeneratorInfo {

	unsigned long long _remainingJobCount;

}

@property (readonly) unsigned long long remainingJobCount;              //@synthesize remainingJobCount=_remainingJobCount - In the implementation block
-(id)nextJob;
-(BOOL)hasMoreJobs;
-(id)initWithPipeline:(id)arg1 jobCount:(unsigned long long)arg2 qos:(unsigned)arg3 generator:(/*^block*/id)arg4 ;
-(BOOL)isDeterminite;
-(unsigned long long)remainingJobCount;
@end
