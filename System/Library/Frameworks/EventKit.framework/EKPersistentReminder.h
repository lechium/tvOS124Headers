/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentReminder : EKPersistentCalendarItem
+(id)reminderWithRandomUUID;
-(id)dueDate;
-(void)setDueDate:(id)arg1 ;
-(unsigned long long)displayOrder;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(id)completionDate;
-(id)dueDateTimeZone;
-(void)setDueDateTimeZone:(id)arg1 ;
-(BOOL)dueDateAllDay;
-(void)setDueDateAllDay:(BOOL)arg1 ;
-(void)setCompletionDate:(id)arg1 ;
-(id)firstAlertDate;
-(void)setFirstAlertDate:(id)arg1 ;
-(int)entityType;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

