/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKTravelEngineUtilities : NSObject
+(id)effectiveTravelAdvisoryTravelTimeDateForHypothesis:(id)arg1 ;
+(id)geoTrafficDensityAsString:(unsigned long long)arg1 ;
+(BOOL)date:(id)arg1 representsApproachingDepartureDateForHypothesis:(id)arg2 ;
+(BOOL)date:(id)arg1 representsLatenessForHypothesis:(id)arg2 ;
+(BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1 ;
+(id)formattedLocationCoordinates:(id)arg1 ;
+(long long)geoRouteHypothesisTravelStateForString:(id)arg1 ;
+(id)geoTransportTypeAsString:(int)arg1 ;
+(int)geoTransportTypeForString:(id)arg1 ;
+(unsigned long long)geoTrafficDensityForString:(id)arg1 ;
+(id)authorizationStatusAsString:(int)arg1 ;
+(int)geoTransportTypeForCalLocationRoutingMode:(long long)arg1 ;
+(BOOL)date:(id)arg1 representsImmediateDepartureForHypothesis:(id)arg2 ;
+(double)effectiveTravelAdvisoryTravelTimeForHypothesis:(id)arg1 ;
+(double)maximumAllowableTravelTime;
+(double)minimumAllowableTravelTime;
@end

