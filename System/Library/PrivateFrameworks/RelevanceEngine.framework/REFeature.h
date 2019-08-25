/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REFeature : NSObject <NSCopying>

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long featureType; 
+(id)groupFeature;
+(id)workoutStateFeature;
+(id)appUsageFeature;
+(id)recentSiriActionFeature;
+(id)siriActionPerformedCountFeature;
+(id)conditionalFeature;
+(id)dailyRoutineFeature;
+(id)isInDailyRoutineFeature;
+(id)dateFeature;
+(id)dateOccursTodayFeature;
+(id)featureWithName:(id)arg1 featureType:(unsigned long long)arg2 ;
+(id)forcedFeature;
+(id)geofenceFeature;
+(id)relevanceThresholdFeature;
+(id)locationFeature;
+(id)sentimentAnalysisFeature;
+(id)negativeSentimentAnalysisFeature;
+(id)sentimentAnalysisCertaintyFeature;
+(id)portraitFeature;
+(id)noContentFeature;
+(id)siriDomainFeature;
+(id)priorityFeature;
+(id)dataSourceFeature;
+(id)sessionFeature;
+(id)isDeveloperDonationFeature;
+(id)siriActionRoleFeature;
+(id)siriActionDailyAveragePerformedCountFeature;
+(id)siriActionHasRelevanceProvidersFeature;
+(id)dailyAverageWorkoutCountFeature;
+(id)performedWorkoutCountFeature;
+(id)currentlyPlayingMediaDonationFeature;
+(id)isSiriActionFeature;
+(id)transformedFeatureWithTransformer:(id)arg1 features:(id)arg2 ;
+(id)itemIdentifierFeature;
+(id)crossedFeatureWithFeatures:(id)arg1 ;
+(id)locationOfInterestFeature;
+(id)knownLocationOfInterestFeature;
+(id)currentTimeFeature;
+(id)dayOfWeekFeature;
+(id)isWeekendFeature;
+(id)currentlyPlayingFromAppFeature;
+(id)activeWorkoutFeature;
+(id)activeEnergyCompletionFeature;
+(id)exerciseTimeCompletionFeature;
+(id)standHourCompletionFeature;
+(id)interactionFeature;
+(id)nowPlayingStateFeature;
+(id)sectionFeature;
+(id)travelingFeature;
+(id)isStationaryFeature;
+(id)motionFeature;
-(unsigned long long)featureType;
-(long long)_bitCount;
-(id)_rootFeatures;
-(id)_dependentFeatures;
-(void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2 ;
-(id)featureByUsingTransformer:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
