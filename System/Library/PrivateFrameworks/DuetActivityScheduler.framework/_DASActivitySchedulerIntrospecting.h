/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DASActivitySchedulerIntrospecting <NSObject>
@required
-(id)submittedActivities;
-(void)forceRunActivities:(id)arg1;
-(void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;
-(id)runningActivities;
-(id)runningGroupActivities;
-(id)scoresForActivityWithName:(id)arg1;
-(id)activityRunStatistics;
-(id)currentPredictions;
-(double)remainingBalanceForBudgetWithName:(id)arg1;
-(void)pauseWithParameters:(id)arg1;

@end

