/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationTrigger.h>

@class NSDate, NSTimeZone, NSCalendar;

@interface UNLegacyNotificationTrigger : UNNotificationTrigger {

	int _remainingRepeatCount;
	int _totalRepeatCount;
	NSDate* _date;
	NSTimeZone* _timeZone;
	NSCalendar* _repeatCalendar;
	unsigned long long _repeatInterval;

}

@property (nonatomic,copy) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy) NSCalendar * repeatCalendar;                      //@synthesize repeatCalendar=_repeatCalendar - In the implementation block
@property (assign,nonatomic) int remainingRepeatCount;                       //@synthesize remainingRepeatCount=_remainingRepeatCount - In the implementation block
@property (assign,nonatomic) int totalRepeatCount;                           //@synthesize totalRepeatCount=_totalRepeatCount - In the implementation block
@property (assign,nonatomic) unsigned long long repeatInterval;              //@synthesize repeatInterval=_repeatInterval - In the implementation block
+(id)triggerWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6 ;
+(BOOL)supportsSecureCoding;
+(id)triggerWithDate:(id)arg1 timeZone:(id)arg2 repeatInterval:(unsigned long long)arg3 repeatCalendar:(id)arg4 ;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(double)_retroactiveTriggerHysteresis;
-(id)_initWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6 ;
-(int)remainingRepeatCount;
-(int)totalRepeatCount;
-(id)_nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 defaultTimeZone:(id)arg3 ;
-(void)setRemainingRepeatCount:(int)arg1 ;
-(void)setTotalRepeatCount:(int)arg1 ;
-(BOOL)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setRepeatInterval:(unsigned long long)arg1 ;
-(void)setRepeatCalendar:(NSCalendar *)arg1 ;
-(unsigned long long)repeatInterval;
-(NSCalendar *)repeatCalendar;
@end

