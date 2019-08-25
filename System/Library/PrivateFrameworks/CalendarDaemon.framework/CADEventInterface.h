/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADEventInterface
@required
-(void)CADOccurrenceCacheSearchWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(/*^block*/id)arg4;
-(void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1;
-(void)CADDatabaseGetDefaultLocalCalendarWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseGetDefaultCalendarForNewEventsWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseSetDefaultCalendarForNewEvents:(id)arg1;
-(void)CADDatabaseGetEventWithEventIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetEventWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetCountOfUnacknowledgedEvents:(/*^block*/id)arg1;
-(void)CADDatabaseGetCountOfNotifiableEvents:(/*^block*/id)arg1;
-(void)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:(id)arg1 timeZone:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1;
-(void)CADDatabaseGetSuggestedEventCalendarWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseCanModifySuggestedEventCalendar:(/*^block*/id)arg1;
-(void)CADDatabaseInsertSuggestedEventCalendarWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseActOnSuggestedEvent:(id)arg1 action:(int)arg2 reply:(/*^block*/id)arg3;
-(void)CADDatabaseGetBirthdayContactIdentifierForEvent:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(/*^block*/id)arg1;
-(void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)arg1 onDay:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg1 nearestDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADOccurrenceCacheDoEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(/*^block*/id)arg4;
-(void)CADOccurrencesExistInRangeForEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4 timezone:(id)arg5 reply:(/*^block*/id)arg6;
-(void)CADDatabaseShouldWhitelistOrganizerEmailFromJunkChecks:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseShouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)arg1 reply:(/*^block*/id)arg2;

@end

