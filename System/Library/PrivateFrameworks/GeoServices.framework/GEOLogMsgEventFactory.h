/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableDictionary;

@interface GEOLogMsgEventFactory : NSObject {

	NSMutableDictionary* _appStateTransitionData;
	NSMutableDictionary* _appStateTransitionTimingData;

}
+(id)sharedInstance;
-(id)logMsgEventForNetworkService:(int)arg1 requestAppId:(id)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 requestDataSize:(int)arg5 responseDataSize:(int)arg6 responseTime:(int)arg7 httpResponseStatusCode:(int)arg8 remoteAddressAndPort:(id)arg9 ;
-(int)_bucketValueForTimeDelta:(double)arg1 ;
-(int)_bucketValueForTravelTime:(double)arg1 ;
-(void)clearStateTimingData;
-(id)logMsgEventForUserAction:(id)arg1 eventValue:(id)arg2 eventTarget:(int)arg3 ;
-(id)logMsgEventForMapLaunch:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(BOOL)arg3 ttlEventTime:(id)arg4 ;
-(id)logMsgEventForStaleResources:(id)arg1 userSessionSnapshot:(id)arg2 ;
-(id)logMsgEventForStateTransition:(id)arg1 generateOnlyIfStateChanged:(BOOL)arg2 userSessionSnapshot:(id)arg3 ;
-(id)logMsgEventForTileSetState:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4 ;
-(id)logMsgEventForPlaceDataCacheFromAppWithID:(id)arg1 ;
-(id)logMsgEventForGridDuration:(double)arg1 endState:(int)arg2 errors:(id)arg3 previousState:(int)arg4 displayType:(int)arg5 ;
-(id)logMsgEventForTileUsageWithRequestAppId:(id)arg1 andTileUsageInfo:(id)arg2 ;
-(id)logMsgEventForGenericAppErrorDomain:(id)arg1 appErrorCode:(long long)arg2 ;
-(id)logMsgEventForCacheHitWithCacheType:(int)arg1 cacheHitCount:(unsigned)arg2 cacheMissCount:(unsigned)arg3 ;
-(id)logMsgEventForDirectionsFeedbacks:(id)arg1 finalLocation:(id)arg2 arrivedAtDestination:(BOOL)arg3 navigationAudioFeedback:(GEONavigationAudioFeedback)arg4 durationOfTrip:(double)arg5 durationsInNavigationModes:(id)arg6 ;
-(id)logMsgEventForTransitAppLaunchWithBundleId:(id)arg1 sourceLocation:(id)arg2 destinationLocation:(id)arg3 userSessionSnapshot:(id)arg4 ;
-(id)logMsgEventForTimeToLeaveHypothesisWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6 ;
-(id)logMsgEventForTimeToLeaveIntialTravelTime:(double)arg1 ;
-(id)logMsgEventForLogFrameworkMetricType:(int)arg1 metricState:(int)arg2 purgeReason:(int)arg3 logCollectionRequest:(id)arg4 ;
-(id)logMsgEventForLogFrameworkMetricType:(int)arg1 metricState:(int)arg2 purgeReason:(int)arg3 logMessageType:(int)arg4 ;
-(id)logMsgEventForListInteractionSessionOfType:(int)arg1 listResultItems:(id)arg2 searchString:(id)arg3 ;
-(id)logMsgEventForRefineSearchSessionOfType:(int)arg1 refineSearchType:(int)arg2 suggestionItems:(id)arg3 searchString:(id)arg4 ;
-(id)logMsgsEventForMapsWidgetsInteractionForType:(int)arg1 endState:(int)arg2 widgetSpecificObject:(id)arg3 wasLocked:(BOOL)arg4 startDate:(id)arg5 forDuration:(double)arg6 ;
-(id)logMsgEventForProactiveSuggestionInteractionForType:(int)arg1 items:(id)arg2 interactedWithItemIndex:(int)arg3 forDuration:(double)arg4 ;
-(id)logMsgEventForCommuteDoomWindow:(id)arg1 exitTime:(id)arg2 destinations:(id)arg3 reason:(long long)arg4 networkRequests:(unsigned long long)arg5 alerts:(unsigned long long)arg6 ;
-(id)logMsgEventForSessionId:(id)arg1 statusIssue:(int)arg2 ridebookingEndState:(int)arg3 endView:(int)arg4 rideAppId:(id)arg5 rideAppVersion:(id)arg6 originBlurred:(id)arg7 destinationBlurred:(id)arg8 exploredOtherOptions:(BOOL)arg9 rideType:(id)arg10 distanceToPickupInMeters:(double)arg11 paymentIsApplePay:(BOOL)arg12 numberOfAvailableExtensions:(unsigned long long)arg13 switchedApp:(BOOL)arg14 comparedRideOptions:(BOOL)arg15 showedSurgePricingAlert:(BOOL)arg16 durationOfSessionInSeconds:(double)arg17 installedApp:(BOOL)arg18 timestamp:(long long)arg19 unavailable:(BOOL)arg20 movedPickupLocation:(BOOL)arg21 errorMessages:(id)arg22 numberOfAppsInstalled:(unsigned long long)arg23 enabled:(unsigned long long)arg24 intentResponseFailures:(id)arg25 ;
-(id)logMsgEventForRidebookedWithSessionId:(id)arg1 statusIssue:(int)arg2 bookedUsingMaps:(BOOL)arg3 cancelled:(BOOL)arg4 contactedDriver:(BOOL)arg5 viewedInProactiveTray:(BOOL)arg6 tappedProactiveTrayItem:(BOOL)arg7 viewedDetails:(BOOL)arg8 invalidVehicleLocation:(BOOL)arg9 missingVehicleLocation:(BOOL)arg10 rideAppId:(id)arg11 rideAppVersion:(id)arg12 numberOfAppsInstalled:(unsigned long long)arg13 enabled:(unsigned long long)arg14 intentResponseFailures:(id)arg15 ;
-(id)logMsgEventForTablebookingWithSessionID:(id)arg1 endState:(int)arg2 endView:(int)arg3 bookTableAppId:(id)arg4 muid:(unsigned long long)arg5 blurredReservationTimestamp:(long long)arg6 blurredBookingTimestamp:(long long)arg7 durationOfSessionInSeconds:(double)arg8 installNeeded:(BOOL)arg9 installNeededTappedAppId:(id)arg10 installCompleted:(BOOL)arg11 tableSize:(unsigned)arg12 addedSpecialRequest:(BOOL)arg13 swipedAvailableTimes:(BOOL)arg14 tappedDatePicker:(BOOL)arg15 errorMessages:(id)arg16 ;
-(id)logMsgEventForTablebookedSessionWithSessionID:(id)arg1 bookedTables:(id)arg2 ;
-(id)bookedTableWithBookedUsingMaps:(BOOL)arg1 cancelled:(BOOL)arg2 viewedInProactiveTray:(BOOL)arg3 tappedProactiveTrayItem:(BOOL)arg4 viewedInPlacecard:(BOOL)arg5 viewedDetailsInPlacecard:(BOOL)arg6 isAsync:(BOOL)arg7 bookedAppId:(id)arg8 muid:(unsigned long long)arg9 called:(BOOL)arg10 routed:(BOOL)arg11 tappedChangeReservation:(BOOL)arg12 tappedCancelReservation:(BOOL)arg13 ;
-(id)logMsgEventForFullNavTraceWithData:(id)arg1 ;
-(id)logMsgEventForTelemetricWithEventKey:(int)arg1 eventValue:(unsigned long long)arg2 eventDetail:(id)arg3 ;
-(id)logMsgEventForTelemetricWithEntities:(id)arg1 ;
-(id)logMsgEventForClientACSuggestionsWithQuery:(id)arg1 queryTokens:(id)arg2 acSuggestionEntries:(id)arg3 selectedIndex:(int)arg4 ;
-(id)logMsgEventForClientACResponseWithQuery:(id)arg1 queryTokens:(id)arg2 acSuggestionEntries:(id)arg3 ;
-(id)logMsgEventForClientACKeypressWithQuery:(id)arg1 queryTokens:(id)arg2 acSuggestionEntries:(id)arg3 keyPressStatus:(int)arg4 ;
-(id)logMsgEventForWiFiConnectionQuality:(id)arg1 ;
-(id)logMsgEventForRealtimeTrafficProbes:(id)arg1 ;
-(id)logMsgEventForBatchTrafficProbes:(id)arg1 ;
-(id)logMsgEventForParkedCarAtLocation:(id)arg1 atTime:(double)arg2 withUncertainty:(double)arg3 ;
-(id)logMsgEventForTileCacheHitAnalyticForRequestReason:(int)arg1 tileSource:(int)arg2 hitCount:(unsigned)arg3 hitByteCount:(unsigned)arg4 ;
-(id)logMsgEventForTileCacheMissAnalyticForRequestReason:(int)arg1 missType:(int)arg2 missCount:(unsigned)arg3 missByteCount:(unsigned)arg4 httpStatus:(unsigned)arg5 errors:(id)arg6 ;
-(id)init;
@end

