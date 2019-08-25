/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKTTLEventTracker : NSObject
+(void)trackSignificantEventHasSuggestedLocation:(BOOL)arg1 isOnSharedCalendar:(BOOL)arg2 ;
+(void)trackTTLCandidateEventHasSuggestedLocation:(BOOL)arg1 isOnSharedCalendar:(BOOL)arg2 ;
+(void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(BOOL)arg5 isOnSharedCalendar:(BOOL)arg6 ;
+(void)trackIsTTLEnabled:(BOOL)arg1 ;
+(void)trackDirectionsEngagedForTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 hasSuggestedLocation:(BOOL)arg4 isOnSharedCalendar:(BOOL)arg5 ;
+(id)_boolEnumMapping;
+(id)_alertTypeMapping;
+(id)_transportTypeMapping;
+(id)_etaTypeMapping;
+(id)_travelStateMapping;
@end
