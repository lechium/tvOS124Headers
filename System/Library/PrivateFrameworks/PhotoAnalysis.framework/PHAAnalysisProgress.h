/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PHAAnalysisProgress : NSObject {

	NSDictionary* _countDictionariesByWorkerType;
	NSDictionary* _countOfDeletionsByWorkerType;
	NSDictionary* _totalProgressCountsByWorkerType;

}
+(void)requestCurrentProgressWithLibrary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)statusAsDictionary;
-(float)_progressFromProcessedCount:(long long)arg1 outOfPossibleCount:(long long)arg2 ;
-(id)initWithCounts:(id)arg1 totalProgressCounts:(id)arg2 countOfDeletionsByWorkerType:(id)arg3 ;
-(float)percentAnalyzedForWorkerType:(short)arg1 ;
-(float)localPercentAnalyzedForWorkerType:(short)arg1 ;
-(unsigned long long)countOfDeletionsForWorkerType:(short)arg1 ;
-(id)init;
-(id)description;
@end

