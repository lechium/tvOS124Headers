/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAAssetProcessingJob.h>

@interface PHAAcknowledgeDeletionsWorkerJob : PHAAssetProcessingJob
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(void)_deleteStateRecordsForLocalUUIDs:(id)arg1 ;
-(void)_deleteStateRecordsForSuccessfulResults;
-(void)prepare;
-(void)finish;
@end

