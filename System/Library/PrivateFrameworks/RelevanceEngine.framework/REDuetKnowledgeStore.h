/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@class _DKKnowledgeStore;

@interface REDuetKnowledgeStore : RESingleton {

	_DKKnowledgeStore* _knowledgeStore;

}
-(id)queryForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sleepInterval;
-(id)queryForPredictedChargingEventsWithMinimumDuration:(double)arg1 ;
-(id)queryForHistoricChargingEventsWithMinimumDuration:(double)arg1 inThePastDays:(unsigned long long)arg2 ;
-(id)queryForAllRelevantShortcuts;
-(void)executeQuerySynchronouslyWithBatching:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createTimelineFromPredictionTimeline:(id)arg1 filterEmptyData:(BOOL)arg2 ;
-(id)_duetChargingEventStream;
-(id)_createEventsFromDuetEvents:(id)arg1 ;
-(id)queryForDonatedActionsAfterDate:(id)arg1 ;
-(id)_duetDonationsStreams;
-(id)_queryForDonatedActionsAfterDate:(id)arg1 streams:(id)arg2 ;
-(id)_duetQueryForDonatedActionsAfterDate:(id)arg1 onStreams:(id)arg2 withPredicate:(id)arg3 ;
-(id)_createActionsFromDuetEvents:(id)arg1 ;
-(id)_createTombstonesFromDuetEvents:(id)arg1 ;
-(void)_executeQuery:(id)arg1 responseQueue:(id)arg2 synchronouslyWithBatching:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)queryForAllDonatedActions;
-(id)queryForDeletedActionsAfterDate:(id)arg1 ;
-(id)_queryForUnfilteredDonationsForStream:(id)arg1 ;
-(id)queryForDuetEventWithIdentifier:(id)arg1 ;
-(id)queryForUnfilteredUserActivityDonations;
-(id)queryForUnfilteredIntentDonations;
-(id)queryForUnfilteredRelevantShortcutDonations;
-(id)init;
@end

