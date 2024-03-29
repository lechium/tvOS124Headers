/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <Foundation/NSOperation.h>

@class ACAccountStore, NSMutableDictionary, NSString;

@interface BirthdayCalendarUpdater : NSOperation {

	CalDatabase* _database;
	void* _calendar;
	void* _facebookCalendar;
	void* _addressBook;
	ACAccountStore* _accountStore;
	NSMutableDictionary* _accountIdentifiersToIsFacebook;
	NSString* _birthdaySummary;
	long long _defaultAlarmOffset;

}
-(id)copyBirthdayEventSummaryForPerson:(void*)arg1 ;
-(BOOL)setBirthday:(id)arg1 forEvent:(void*)arg2 ;
-(void)addDefaultAlarmToEvent:(void*)arg1 ;
-(BOOL)_isPersonFromFacebook:(void*)arg1 ;
-(id)copyNormalizedBirthdaysForPerson:(void*)arg1 ;
-(BOOL)_isYearlessBirthday:(id)arg1 ;
-(id)_birthdayCalendarForCalendarScale:(id)arg1 ;
-(id)_birthdayCalendarForCalendarScale:(id)arg1 useCurrentTimezone:(BOOL)arg2 ;
-(void*)newBirthdayEventForBirthday:(id)arg1 andPerson:(void*)arg2 ;
-(id)copyOldestNormalizedBirthdaysForPerson:(void*)arg1 ;
-(BOOL)_areNormalizedBirthdaysTheSame:(id)arg1 birthday2:(id)arg2 ;
-(int)_pruneEventsFromCalendar:(void*)arg1 matchingFacebookStatus:(BOOL)arg2 andStoreInRecord:(id)arg3 ;
-(int)_processPerson:(void*)arg1 withBirthdays:(id)arg2 forCalendar:(void*)arg3 preExistingEvents:(id)arg4 addedBirthdayRecord:(id)arg5 ;
-(id)init;
-(void)dealloc;
-(void)main;
@end

