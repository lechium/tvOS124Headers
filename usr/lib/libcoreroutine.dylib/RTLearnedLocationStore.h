/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTStore.h>

@class RTDistanceCalculator;

@interface RTLearnedLocationStore : RTStore {

	RTDistanceCalculator* _distanceCalculator;

}

@property (nonatomic,retain) RTDistanceCalculator * distanceCalculator;              //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
+(id)filterPlaces:(id)arg1 ;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)clearWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchRecentLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)fetchAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTDistanceCalculator *)distanceCalculator;
-(id)initWithDistanceCalculator:(id)arg1 persistenceManager:(id)arg2 ;
-(void)fetchPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchTransitionsWithHandler:(/*^block*/id)arg1 ;
-(id)migrateLegacyMapItemsWithEnumerationBlock:(/*^block*/id)arg1 ;
-(void)fetchLastVisitWithHandler:(/*^block*/id)arg1 ;
-(void)_clearWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 location:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestVisitedFirstWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationOfInterestVisitedLastWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)storePlaces:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPlaceWithMapItem:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 place:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)storeVisits:(id)arg1 place:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeTransitionsReferencingVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removePlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateExpirationDateOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)logLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)updateTransitionWithIdentifier:(id)arg1 motionActivityType:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPlaceWithMapItemIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPlacesWithinDistance:(double)arg1 location:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchCountOfVisitsToPlaceWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLastVisitToPlaceWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)storeVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)storeTransitions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchDominantDeviceClassWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPlacesThatHaveVisitsWithDeviceClass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitsToPlace:(id)arg1 deviceClass:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchTransitionsOriginatingFromVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)replaceWithLocationsOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeRecordsExpiredBeforeDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeUnreferencedMapItems:(/*^block*/id)arg1 ;
-(void)removePlacesWithoutVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)updatePlaces:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchMetricsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPlacesWithType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitsWithoutPlacesForCurrentDeviceWithHandler:(/*^block*/id)arg1 ;
-(void)associatePlacesToVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_storeVisits:(id)arg1 place:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_associatePlacesToVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_migrateLegacyMapItemsWithEnumerationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_refreshMapItemsWithEnumerationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 place:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_updateExpirationDateOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_updateTransitionWithIdentifier:(id)arg1 motionActivityType:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPlacesWithType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchPlaceOfVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchPlacesWithMapItem:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchPlacesWithinDistance:(double)arg1 location:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchPlaceWithMapItemIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchVisitsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchVisitsToPlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLastVisitWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchLastVisitToPlaceWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchCountOfVisitsToPlaceWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchTransitionsOriginatingFromVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_learnedLocationsOfInterestFromLearnedLocationsOfInterestMO:(id)arg1 context:(id)arg2 ;
-(void)_fetchLocationsOfInterestWithinDistance:(double)arg1 location:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 includePlaceholders:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchLocationOfInterestVisitedFirstWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchLocationOfInterestVisitedLastWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchLocationOfInterestWithPlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLocationOfInterestTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchMetricsWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchDominantDeviceClassWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPlacesThatHaveVisitsWithDeviceClass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchVisitsToPlace:(id)arg1 deviceClass:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchVisitsWithoutPlacesForCurrentDeviceWithHandler:(/*^block*/id)arg1 ;
-(void)_removePlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_removePlacesWithoutVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)_removeVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)_removeTransitionsWithHandler:(/*^block*/id)arg1 ;
-(void)_removeTransitionsReferencingVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeRecordsExpiredBeforeDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)_removeAllMapItems:(/*^block*/id)arg1 ;
-(void)_replaceWithLocationsOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeUnreferencedMapItems:(/*^block*/id)arg1 ;
-(void)__removeUnreferencedExtendedAttributes:(/*^block*/id)arg1 ;
-(void)__removeUnreferencedAddresses:(/*^block*/id)arg1 ;
-(void)__removeUnreferencedMapItems:(/*^block*/id)arg1 ;
-(void)_fetchEntityAsDictionaryWithEntityName:(id)arg1 propertiesToFetch:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_logLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(id)refreshMapItemsWithEnumerationBlock:(/*^block*/id)arg1 ;
-(void)fetchPlaceOfVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPlacesWithMapItem:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitsToPlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestWithPlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)removeVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)removeTransitionsWithHandler:(/*^block*/id)arg1 ;
-(void)removeAllMapItems:(/*^block*/id)arg1 ;
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(id)init;
@end

