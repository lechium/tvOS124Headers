/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@interface CLSCalendar : NSObject
+(id)startOfDayForDate:(id)arg1 ;
+(BOOL)isCountryCodePartOfNorthernHemisphere:(id)arg1 ;
+(BOOL)isCountryCodePartOfSouthernHemisphere:(id)arg1 ;
+(long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3 ;
+(id)dateComponentsWithUniversalDates:(id)arg1 atLocation:(id)arg2 ;
+(id)localDateFromUniversalDate:(id)arg1 inTimeZone:(id)arg2 ;
+(id)startOfWeekForDate:(id)arg1 ;
+(id)s_seasonCountryCodesDictionary;
+(id)northernMeteorologicalSeasonNameForDateComponents:(id)arg1 ;
+(id)southernMeteorologicalSeasonNameForDateComponents:(id)arg1 ;
+(BOOL)supportsSeasonsWithLocale:(id)arg1 ;
+(id)universalDateFromLocalDate:(id)arg1 atLocation:(id)arg2 ;
+(id)endOfWeekForDate:(id)arg1 ;
+(long long)yearForWeekOfYearFromDate:(id)arg1 ;
+(long long)hourFromDate:(id)arg1 ;
+(id)dateFromComponents:(unsigned long long)arg1 ofDate:(id)arg2 ;
+(BOOL)isLastWeekOfMonthForLocalDate:(id)arg1 ;
+(BOOL)isSecondHalfOfSeasonForLocalDate:(id)arg1 ;
+(long long)yearFromDate:(id)arg1 ;
+(id)localDateFromUniversalDate:(id)arg1 atLocation:(id)arg2 ;
+(id)localDateFromUniversalDate:(id)arg1 ;
+(id)dateByAddingMonths:(long long)arg1 toDate:(id)arg2 ;
+(long long)monthFromDate:(id)arg1 ;
+(long long)weekOfMonthFromDate:(id)arg1 ;
+(id)dateByAddingDays:(long long)arg1 toDate:(id)arg2 ;
+(id)universalDateFromLocalDate:(id)arg1 ;
+(id)dateByAddingYears:(long long)arg1 toDate:(id)arg2 ;
+(long long)dayFromDate:(id)arg1 ;
+(id)dateFromComponents:(id)arg1 inTimeZone:(id)arg2 ;
+(id)seasonNameForLocalDate:(id)arg1 locale:(id)arg2 ;
+(id)currentLocalDate;
+(id)componentsFromDate:(id)arg1 inTimeZone:(id)arg2 ;
+(BOOL)currentLocaleSupportsSeasons;
+(BOOL)isMiddleMonthOfSeasonForLocalDate:(id)arg1 ;
+(BOOL)isLastTwoWeeksOfMonthForLocalDate:(id)arg1 ;
+(BOOL)isFirstMonthOfSeasonForLocalDate:(id)arg1 ;
+(BOOL)isLastMonthOfSeasonForLocalDate:(id)arg1 ;
+(BOOL)isFirstTwoWeeksOfMonthForLocalDate:(id)arg1 ;
+(id)dateBySettingYear:(long long)arg1 ofDate:(id)arg2 ;
+(long long)weekdayFromDate:(id)arg1 ;
+(id)dateByAddingWeeksOfYear:(long long)arg1 toDate:(id)arg2 ;
+(id)endOfDayForDate:(id)arg1 ;
+(BOOL)isFirstTenDaysOfSeasonForLocalDate:(id)arg1 ;
+(long long)weekOfYearFromDate:(id)arg1 ;
+(id)localStartSeasonDateForLocalDate:(id)arg1 ;
+(id)dateComponentsWithUniversalDate:(id)arg1 atLocation:(id)arg2 ;
+(id)seasonNameForDateComponents:(id)arg1 locale:(id)arg2 ;
+(id)universalDateFromLocalDate:(id)arg1 inTimeZone:(id)arg2 ;
+(id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4 ;
+(void)initialize;
+(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
+(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
@end

