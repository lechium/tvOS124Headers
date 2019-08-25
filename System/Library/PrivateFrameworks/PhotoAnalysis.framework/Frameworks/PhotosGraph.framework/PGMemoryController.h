/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSMutableArray, NSArray, NSMutableIndexSet, NSMutableDictionary, NSMapTable, NSDate, CLLocation, CLSHolidayCalendarEventService, PGManager, NSObject, NSSet;

@interface PGMemoryController : NSObject {

	NSMutableArray* _latentMemories;
	NSArray* _existingMemories;
	NSArray* _blacklistedMemories;
	long long _numberOfDaysSinceLastMemory;
	NSMutableIndexSet* _matchedCategories;
	NSMutableIndexSet* _excludedFeaturedSubcategories;
	NSArray* _existingSuggestions;
	NSMutableDictionary* _numberOfAssetsByMomentIDs;
	NSMutableDictionary* _momentsByMomentIDs;
	NSMutableDictionary* _backingMomentIDsByPHMemoryIDs;
	NSMutableDictionary* _featureVectorByPHMemoryIDs;
	NSMapTable* _numberOfMemoryGenerationDaysByMemory;
	NSDate* _localDate;
	NSDate* _universalDate;
	CLLocation* _location;
	unsigned long long _precision;
	NSDate* _earliestDate;
	NSDate* _latestDate;
	NSDate* _directModeStartDate;
	NSDate* _directModeEndDate;
	CLSHolidayCalendarEventService* _holidayService;
	unsigned long long _currentRandom;
	BOOL _isLastResort;
	BOOL _isFirstTimesAfterUpgrade;
	BOOL _isAttemptingToUpgradeBestOfPastToFeaturedTrip;
	double _forcedBeta;
	BOOL _isCreatingEverMemories;
	BOOL _bypassesCategoryCheckForUpgrades;
	BOOL _ignoresMomentIsInteresting;
	BOOL _ignoresMinimumNumberOfMoments;
	BOOL _ignoresMinimumNumberOfAssets;
	BOOL _skipsAssetCollection;
	BOOL _skipsCuration;
	BOOL _skipsTitleGeneration;
	BOOL _skipsWeekendUpgrades;
	BOOL _skipsMeaningfulEventUpgrades;
	BOOL _skipsBestOfPastUpgradeToFeaturedTrip;
	BOOL _skipsBlacklistedFeatureCheck;
	BOOL _isDryTesting;
	unsigned long long _numberOfNewMemoriesForPeriodicity;
	unsigned long long _numberOfNewMemoriesForUserRequest;
	unsigned long long _minimumNumberOfAssetsForMomentMemory;
	unsigned long long _minimumNumberOfAssetsForDisjointMomentsMemory;
	unsigned long long _minimumNumberOfAssetsForContiguousMomentsMemory;
	PGManager* _manager;
	NSObject*<OS_os_log> _loggingConnection;
	/*^block*/id _progressBlock;
	NSSet* _mandatoryFeatures;
	NSSet* _blacklistedFeatures;
	NSSet* _categoryWhitelist;
	NSSet* _categoryBlacklist;

}

@property (assign) unsigned long long numberOfNewMemoriesForPeriodicity;                                               //@synthesize numberOfNewMemoriesForPeriodicity=_numberOfNewMemoriesForPeriodicity - In the implementation block
@property (assign) unsigned long long numberOfNewMemoriesForUserRequest;                                               //@synthesize numberOfNewMemoriesForUserRequest=_numberOfNewMemoriesForUserRequest - In the implementation block
@property (readonly) unsigned long long minimumNumberOfAssetsForMomentMemory;                                          //@synthesize minimumNumberOfAssetsForMomentMemory=_minimumNumberOfAssetsForMomentMemory - In the implementation block
@property (readonly) unsigned long long minimumNumberOfAssetsForDisjointMomentsMemory;                                 //@synthesize minimumNumberOfAssetsForDisjointMomentsMemory=_minimumNumberOfAssetsForDisjointMomentsMemory - In the implementation block
@property (readonly) unsigned long long minimumNumberOfAssetsForContiguousMomentsMemory;                               //@synthesize minimumNumberOfAssetsForContiguousMomentsMemory=_minimumNumberOfAssetsForContiguousMomentsMemory - In the implementation block
@property (readonly) NSObject*<OS_os_log> loggingConnection;                                                           //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (readonly) id progressBlock;                                                                                 //@synthesize progressBlock=_progressBlock - In the implementation block
@property (readonly) BOOL isCreatingEverMemories;                                                                      //@synthesize isCreatingEverMemories=_isCreatingEverMemories - In the implementation block
@property (assign) BOOL bypassesCategoryCheckForUpgrades;                                                              //@synthesize bypassesCategoryCheckForUpgrades=_bypassesCategoryCheckForUpgrades - In the implementation block
@property (retain) NSSet * blacklistedFeatures;                                                                        //@synthesize blacklistedFeatures=_blacklistedFeatures - In the implementation block
@property (retain) NSSet * categoryWhitelist;                                                                          //@synthesize categoryWhitelist=_categoryWhitelist - In the implementation block
@property (retain) NSSet * categoryBlacklist;                                                                          //@synthesize categoryBlacklist=_categoryBlacklist - In the implementation block
@property (assign) BOOL ignoresMomentIsInteresting;                                                                    //@synthesize ignoresMomentIsInteresting=_ignoresMomentIsInteresting - In the implementation block
@property (assign) BOOL ignoresMinimumNumberOfMoments;                                                                 //@synthesize ignoresMinimumNumberOfMoments=_ignoresMinimumNumberOfMoments - In the implementation block
@property (assign) BOOL ignoresMinimumNumberOfAssets;                                                                  //@synthesize ignoresMinimumNumberOfAssets=_ignoresMinimumNumberOfAssets - In the implementation block
@property (assign) BOOL skipsAssetCollection;                                                                          //@synthesize skipsAssetCollection=_skipsAssetCollection - In the implementation block
@property (assign) BOOL skipsCuration;                                                                                 //@synthesize skipsCuration=_skipsCuration - In the implementation block
@property (assign) BOOL skipsTitleGeneration;                                                                          //@synthesize skipsTitleGeneration=_skipsTitleGeneration - In the implementation block
@property (assign) BOOL skipsWeekendUpgrades;                                                                          //@synthesize skipsWeekendUpgrades=_skipsWeekendUpgrades - In the implementation block
@property (assign) BOOL skipsMeaningfulEventUpgrades;                                                                  //@synthesize skipsMeaningfulEventUpgrades=_skipsMeaningfulEventUpgrades - In the implementation block
@property (assign) BOOL skipsBestOfPastUpgradeToFeaturedTrip;                                                          //@synthesize skipsBestOfPastUpgradeToFeaturedTrip=_skipsBestOfPastUpgradeToFeaturedTrip - In the implementation block
@property (assign) BOOL skipsBlacklistedFeatureCheck;                                                                  //@synthesize skipsBlacklistedFeatureCheck=_skipsBlacklistedFeatureCheck - In the implementation block
@property (readonly) unsigned long long maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets; 
@property (readonly) double minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets; 
@property (assign) BOOL isDryTesting;                                                                                  //@synthesize isDryTesting=_isDryTesting - In the implementation block
@property (nonatomic,__weak,readonly) PGManager * manager;                                                             //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSSet * mandatoryFeatures;                                                                //@synthesize mandatoryFeatures=_mandatoryFeatures - In the implementation block
+(unsigned long long)minimumNumberOfCuratedAssetsForMemories;
+(double)computeBetaWithManager:(id)arg1 ;
+(void)computeMinimumNumbersOfAssetsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(NSObject*<OS_os_log>)loggingConnection;
-(BOOL)skipsBlacklistedFeatureCheck;
-(BOOL)eventIsTimely:(id)arg1 ;
-(BOOL)anyBlacklistedFeatureIsHitByMomentNode:(id)arg1 ;
-(BOOL)isCreatingEverMemories;
-(unsigned)randomNumber;
-(BOOL)isOKToProceedWithEarlyPotentialMemory:(id)arg1 ;
-(BOOL)skipsAssetCollection;
-(BOOL)ignoresMinimumNumberOfAssets;
-(id)momentForMomentID:(id)arg1 ;
-(unsigned long long)minimumNumberOfAssetsForDisjointMomentsMemory;
-(BOOL)canUsePotentialMemory:(id)arg1 isDebug:(BOOL)arg2 ;
-(BOOL)ignoresMinimumNumberOfMoments;
-(BOOL)skipsTitleGeneration;
-(BOOL)skipsCuration;
-(BOOL)ignoresMomentIsInteresting;
-(unsigned long long)minimumNumberOfAssetsForContiguousMomentsMemory;
-(unsigned long long)minimumNumberOfAssetsForMomentMemory;
-(NSSet *)blacklistedFeatures;
-(void)setBlacklistedFeatures:(NSSet *)arg1 ;
-(id)createMemoriesWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)setMandatoryFeatures:(NSSet *)arg1 ;
-(void)setIgnoresMinimumNumberOfMoments:(BOOL)arg1 ;
-(void)setIgnoresMinimumNumberOfAssets:(BOOL)arg1 ;
-(void)setSkipsWeekendUpgrades:(BOOL)arg1 ;
-(void)setSkipsMeaningfulEventUpgrades:(BOOL)arg1 ;
-(void)setSkipsBestOfPastUpgradeToFeaturedTrip:(BOOL)arg1 ;
-(void)setSkipsBlacklistedFeatureCheck:(BOOL)arg1 ;
-(void)setSkipsAssetCollection:(BOOL)arg1 ;
-(void)setSkipsCuration:(BOOL)arg1 ;
-(BOOL)isDryTesting;
-(BOOL)skipsWeekendUpgrades;
-(BOOL)skipsMeaningfulEventUpgrades;
-(void)setBypassesCategoryCheckForUpgrades:(BOOL)arg1 ;
-(unsigned long long)maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
-(double)minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
-(unsigned long long)_numberOfAssetsInMomentsForIDs:(id)arg1 withNumberOfAssetsByMomentIDs:(id)arg2 ;
-(BOOL)isOKToProceedWithDirectEarlyPotentialMemory:(id)arg1 ;
-(id)anyBlacklistedFeatureHitByEarlyPotentialMemory:(id)arg1 ;
-(BOOL)potentialMemory:(id)arg1 isTooSimilarTooSoonToPHMemory:(id)arg2 ;
-(float)_assetOverlapBetweenMomentsForIDs:(id)arg1 andMomentsForIDs:(id)arg2 withNumberOfAssetsByMomentIDs:(id)arg3 ;
-(id)_idsOfMomentsBackingPHMemory:(id)arg1 ;
-(float)_assetOverlapBetweenMomentsForIDs:(id)arg1 andMomentsForIDs:(id)arg2 ;
-(id)anyBlacklistedFeatureHitByCompletePotentialMemory:(id)arg1 ;
-(BOOL)probabilityPassWithThreshold:(double)arg1 ;
-(id)_uuidOfPersonsWithBirthdayOnDate:(id)arg1 ;
-(void)setIsDryTesting:(BOOL)arg1 ;
-(unsigned)randomNumberLessThan:(unsigned long long)arg1 ;
-(BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 eventType:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 oldMemory:(BOOL)arg4 ;
-(BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 eventType:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 oldMemory:(BOOL)arg4 ;
-(BOOL)_wantsFeaturedNeighborWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedPeopleWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedSocialGroupWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedPersonWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedSocialGroupOverTimeWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedPersonOverTimeWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedTripWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedWeekendWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedPastSupersetWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedPeopleVisitingWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedMeaningfulEventWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedMeaningfulEventAggregationWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsPlaceRegionWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedPetWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedBabyWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsPlaceLocationWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsPlaceBusinessWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsPlaceAreaWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedRecurrentTripWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedNeighborBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedPeopleBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedSocialGroupBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedPersonBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedSocialGroupOverTimeBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedPersonOverTimeBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedTripBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedWeekendBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedPastSupersetBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedPeopleVisitingBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doPlaceRegionBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedPetBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedBabyBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doPlaceLocationBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doPlaceBusinessBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doPlaceAreaBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedRecurrentTripBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(unsigned long long)_featuredSubcategoryForGeneratorType:(unsigned long long)arg1 ;
-(BOOL)_wantsFeaturedForType:(unsigned long long)arg1 reason:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 ;
-(BOOL)_doFeaturedForType:(unsigned long long)arg1 beforeLocalDate:(id)arg2 usingLowRequirements:(BOOL)arg3 oldMemory:(BOOL)arg4 ;
-(BOOL)_doContextualWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 ;
-(BOOL)_doRecentPastEventsWithLocalDate:(id)arg1 ;
-(BOOL)_doSometimeInHistory;
-(BOOL)_doTodaysBirthdayWithLocalDate:(id)arg1 ;
-(unsigned long long)_generatorTypeForFeaturedSubcategory:(unsigned long long)arg1 ;
-(BOOL)_hasExhaustedFeatured:(BOOL*)arg1 ;
-(BOOL)_wantsContextualWithReason:(unsigned long long)arg1 location:(id)arg2 peopleNames:(id)arg3 ;
-(BOOL)_wantsRecentPastEventsWithReason:(unsigned long long)arg1 ;
-(BOOL)_wantsUpcomingRelatedEventsWithReason:(unsigned long long)arg1 ;
-(BOOL)_doUpcomingRelatedEventsWithLocalDate:(id)arg1 ;
-(BOOL)_doOneFeaturedWithLocalDate:(id)arg1 reason:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 hasExhaustedFeatured:(BOOL*)arg4 ;
-(BOOL)_wantsTodayInTimeWithReason:(unsigned long long)arg1 ;
-(BOOL)_doTodayInTimeWithLocalDate:(id)arg1 ;
-(BOOL)_wantsTodaysBirthdayWithReason:(unsigned long long)arg1 ;
-(double)updatedBeta:(double)arg1 forNumberOfDaysSinceLastMemory:(long long)arg2 ;
-(BOOL)_wantsBestOfPastWithReason:(unsigned long long)arg1 ;
-(BOOL)_doFeaturedTripBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 ;
-(BOOL)_doBestOfPastWithLocalDate:(id)arg1 ;
-(BOOL)_wantsDayInHistoryWithReason:(unsigned long long)arg1 ;
-(BOOL)_doDayInHistoryWithLocalDate:(id)arg1 ;
-(unsigned long long)_desireLevelForLastSeasonWithLocalDate:(id)arg1 ;
-(BOOL)_doSeasonWithLocalDate:(id)arg1 forType:(unsigned long long)arg2 ;
-(unsigned long long)_desireLevelForYearSummaryWithLocalDate:(id)arg1 ;
-(BOOL)_doYearSummaryWithLocalDate:(id)arg1 ;
-(BOOL)_wantsHomeAggregationWithLocalDate:(id)arg1 reason:(unsigned long long)arg2 ;
-(BOOL)_doHomeAggregationWithLocalDate:(id)arg1 ;
-(BOOL)_wantsThrowbackThursdayWithReason:(unsigned long long)arg1 ;
-(BOOL)_doThrowbackThursdayForLocalDate:(id)arg1 ;
-(BOOL)_wantsNearbyTodayWithReason:(unsigned long long)arg1 location:(id)arg2 ;
-(BOOL)_doNearbyTodayWithLocalDate:(id)arg1 andLocation:(id)arg2 ;
-(unsigned long long)_desireLevelForSeasonInHistoryWithLocalDate:(id)arg1 ;
-(BOOL)_wantsKeyPeopleForUpcomingHolidayEventWithReason:(unsigned long long)arg1 ;
-(BOOL)_doKeyPeopleForUpcomingHolidayEventWithLocalDate:(id)arg1 ;
-(BOOL)_wantsCelebrationOverTimeWithReason:(unsigned long long)arg1 ;
-(BOOL)_doCelebrationOverTimeWithLocalDate:(id)arg1 ;
-(BOOL)_wantsEarlyMomentsWithPeopleWithReason:(unsigned long long)arg1 ;
-(BOOL)_doEarlyMomentsWithPeopleForLocalDate:(id)arg1 ;
-(BOOL)_doBestOfRandomYear;
-(BOOL)_doContextualTodayWidgetWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 ;
-(id)_createPeriodicMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createMoreMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createTodayWidgetMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createFirstEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createSecondEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createThirdEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_createFirstTimesAfterUpgradeMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_doDirectModeWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 parameters:(id)arg4 progress:(/*^block*/id)arg5 ;
-(unsigned long long)subcategoryForString:(id)arg1 ;
-(unsigned long long)_meaningFromString:(id)arg1 ;
-(BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 meaning:(unsigned long long)arg2 lowRequirements:(BOOL)arg3 ;
-(BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 meaning:(unsigned long long)arg2 lowRequirements:(BOOL)arg3 ;
-(id)_createOneMemoryWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 localDate:(id)arg3 location:(id)arg4 peopleNames:(id)arg5 ;
-(BOOL)_memories:(id)arg1 containMemory:(id)arg2 ;
-(BOOL)_memories:(id)arg1 containAssetCollection:(id)arg2 ;
-(BOOL)_assetCollection:(id)arg1 matchesAssetCollection:(id)arg2 ;
-(BOOL)_memories:(id)arg1 coverTypeOfMemory:(id)arg2 ;
-(void)resetIgnoresAndSkips;
-(unsigned long long)numberOfNewMemoriesForPeriodicity;
-(void)setNumberOfNewMemoriesForPeriodicity:(unsigned long long)arg1 ;
-(unsigned long long)numberOfNewMemoriesForUserRequest;
-(void)setNumberOfNewMemoriesForUserRequest:(unsigned long long)arg1 ;
-(BOOL)bypassesCategoryCheckForUpgrades;
-(NSSet *)mandatoryFeatures;
-(NSSet *)categoryWhitelist;
-(void)setCategoryWhitelist:(NSSet *)arg1 ;
-(NSSet *)categoryBlacklist;
-(void)setCategoryBlacklist:(NSSet *)arg1 ;
-(void)setIgnoresMomentIsInteresting:(BOOL)arg1 ;
-(void)setSkipsTitleGeneration:(BOOL)arg1 ;
-(BOOL)skipsBestOfPastUpgradeToFeaturedTrip;
-(id)blacklistableFeaturesForPotentialMemory:(id)arg1 ;
-(id)_holidayFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_dateFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_areaFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_addressFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_localIdentifierOfMainPersonInMomentNode:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_personFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2 ;
-(id)_timeBlacklistableFeatureForPotentialMemory:(id)arg1 ;
-(id)_locationBlacklistableFeatureForPotentialMemory:(id)arg1 ;
-(id)_peopleBlacklistableFeatureForPotentialMemory:(id)arg1 ;
-(id)_holidayFeatureForPotentialMemory:(id)arg1 ;
-(id)_dateFeatureForPotentialMemory:(id)arg1 ;
-(id)_areaFeatureForPotentialMemory:(id)arg1 ;
-(id)_addressFeatureForPotentialMemory:(id)arg1 ;
-(id)_personFeatureForEarlyPotentialMemory:(id)arg1 ;
-(id)progressBlock;
-(PGManager *)manager;
@end

