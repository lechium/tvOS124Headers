/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarFoundation/CalendarFoundation-Structs.h>
@interface CalDateLocalization : NSObject
+(void)initializeFormatters;
+(void)rebuildFormatters;
+(void)rebuildWeekendDays;
+(void)generateLocalizedDateTimeFormats;
+(BOOL)weekdayIsWeekend:(long long)arg1 ;
+(id)weekendDays;
+(id)sharedDateFormatter;
+(id)ICUFormats;
+(BOOL)hasAMPM;
+(BOOL)uses24HourTime;
+(BOOL)shouldUseHourMinutesWithoutAMPMForHours;
+(void)setupFormatter:(CFDateFormatterRef)arg1 forKey:(id)arg2 ;
+(void)setupFormat:(id)arg1 forKey:(id)arg2 locale:(id)arg3 ;
+(void)setupFormatTemplate:(id)arg1 forKey:(id)arg2 locale:(id)arg3 ;
+(id)_hourSymbolInFormat:(id)arg1 ;
+(void)generateStandardFormatters:(id)arg1 ;
+(void)generateAdditionalPrecodedFormatters:(id)arg1 ;
+(void)generateDerivedTimeFormats:(id)arg1 ;
+(void)generatePreferedOrders;
+(id)dateFormatters;
+(id)calendarDayFormatter;
+(id)dateFormatterForKey:(id)arg1 formatString:(id)arg2 ;
+(BOOL)dateIsWeekend:(id)arg1 ;
+(id)formatKeyForHourString;
+(id)sizeOrderedDateFormats;
+(id)sizeOrderedDateFormatsWithYear;
+(id)sizeOrderedDateFormatsWithoutYear;
+(id)sizeOrderedAllDateFormatsWithoutYear;
+(id)ICUFormatForKey:(id)arg1 ;
+(CFDateFormatterRef)dateFormatterForKey:(id)arg1 ;
+(id)intervalStringFromDate:(id)arg1 toDate:(id)arg2 withFormat:(id)arg3 options:(int)arg4 ;
@end

