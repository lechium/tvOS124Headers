/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CalDateRange;

@interface EKConflictDetails : NSObject {

	NSArray* _conflictingDates;
	NSArray* _conflictingEvents;
	NSArray* _needsActionEvents;
	unsigned long long _totalOccurrencesInSeries;
	unsigned long long _totalConflictsInSeries;
	unsigned long long _totalConflictingEvents;
	unsigned long long _totalNeedsActionEvents;
	CalDateRange* _conflictPeriodForSeries;

}

@property (retain) NSArray * conflictingDates;                               //@synthesize conflictingDates=_conflictingDates - In the implementation block
@property (retain) NSArray * conflictingEvents;                              //@synthesize conflictingEvents=_conflictingEvents - In the implementation block
@property (retain) NSArray * needsActionEvents;                              //@synthesize needsActionEvents=_needsActionEvents - In the implementation block
@property (assign) unsigned long long totalOccurrencesInSeries;              //@synthesize totalOccurrencesInSeries=_totalOccurrencesInSeries - In the implementation block
@property (assign) unsigned long long totalConflictsInSeries;                //@synthesize totalConflictsInSeries=_totalConflictsInSeries - In the implementation block
@property (assign) unsigned long long totalConflictingEvents;                //@synthesize totalConflictingEvents=_totalConflictingEvents - In the implementation block
@property (assign) unsigned long long totalNeedsActionEvents;                //@synthesize totalNeedsActionEvents=_totalNeedsActionEvents - In the implementation block
@property (retain) CalDateRange * conflictPeriodForSeries;                   //@synthesize conflictPeriodForSeries=_conflictPeriodForSeries - In the implementation block
+(id)infoWithConflicts:(long long)arg1 needsAction:(long long)arg2 event:(id)arg3 ;
+(id)infoWithConflictsInSeries:(long long)arg1 outOf:(long long)arg2 withPeriod:(id)arg3 ;
+(id)_dateRangeToScanForConflictsForEvent:(id)arg1 dateForNow:(id)arg2 ;
+(double)_maxRangeLengthForRule:(id)arg1 ;
+(id)dateRangeToScanForConflictsForEvent:(id)arg1 ;
+(id)calendarIdentifiersToScanForConflictsForEvent:(id)arg1 ;
-(void)setTotalOccurrencesInSeries:(unsigned long long)arg1 ;
-(void)setTotalConflictsInSeries:(unsigned long long)arg1 ;
-(void)setConflictPeriodForSeries:(CalDateRange *)arg1 ;
-(void)setConflictingEvents:(NSArray *)arg1 ;
-(void)setNeedsActionEvents:(NSArray *)arg1 ;
-(void)setConflictingDates:(NSArray *)arg1 ;
-(void)setTotalConflictingEvents:(unsigned long long)arg1 ;
-(void)setTotalNeedsActionEvents:(unsigned long long)arg1 ;
-(unsigned long long)totalConflictsInSeries;
-(unsigned long long)totalOccurrencesInSeries;
-(id)initWithConflictingDates:(id)arg1 conflictingEvents:(id)arg2 needsActionEvents:(id)arg3 totalOccurrencesInSeries:(unsigned long long)arg4 conflictPeriodForSeries:(id)arg5 ;
-(NSArray *)conflictingDates;
-(NSArray *)conflictingEvents;
-(NSArray *)needsActionEvents;
-(unsigned long long)totalConflictingEvents;
-(unsigned long long)totalNeedsActionEvents;
-(CalDateRange *)conflictPeriodForSeries;
-(id)description;
@end

