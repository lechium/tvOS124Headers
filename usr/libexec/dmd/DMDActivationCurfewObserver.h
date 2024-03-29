//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDActivationPredicateObserver.h"

@class NSMutableArray, NSSet, NSString;

@interface DMDActivationCurfewObserver : DMDActivationPredicateObserver
{
    NSString *_calendarIdentifier;	// 8 = 0x8
    NSSet *_notificationTimes;	// 16 = 0x10
    NSMutableArray *_expiredNotificationTimes;	// 24 = 0x18
    NSMutableArray *_scheduledAlarmIdentifiers;	// 32 = 0x20
    long long _startDay;	// 40 = 0x28
    long long _startHour;	// 48 = 0x30
    long long _startMinute;	// 56 = 0x38
    long long _startSecond;	// 64 = 0x40
    long long _endDay;	// 72 = 0x48
    long long _endHour;	// 80 = 0x50
    long long _endMinute;	// 88 = 0x58
    long long _endSecond;	// 96 = 0x60
}

@property(nonatomic) long long endSecond; // @synthesize endSecond=_endSecond;
@property(nonatomic) long long endMinute; // @synthesize endMinute=_endMinute;
@property(nonatomic) long long endHour; // @synthesize endHour=_endHour;
@property(nonatomic) long long endDay; // @synthesize endDay=_endDay;
@property(nonatomic) long long startSecond; // @synthesize startSecond=_startSecond;
@property(nonatomic) long long startMinute; // @synthesize startMinute=_startMinute;
@property(nonatomic) long long startHour; // @synthesize startHour=_startHour;
@property(nonatomic) long long startDay; // @synthesize startDay=_startDay;
@property(retain, nonatomic) NSMutableArray *scheduledAlarmIdentifiers; // @synthesize scheduledAlarmIdentifiers=_scheduledAlarmIdentifiers;
@property(retain, nonatomic) NSMutableArray *expiredNotificationTimes; // @synthesize expiredNotificationTimes=_expiredNotificationTimes;
@property(retain, nonatomic) NSSet *notificationTimes; // @synthesize notificationTimes=_notificationTimes;
@property(copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
- (void).cxx_destruct;	// IMP=0x000000010000ea7c
- (id)_nextDateAfter:(id)arg1 matchingWeekday:(long long)arg2 hour:(long long)arg3 minute:(long long)arg4 second:(long long)arg5 inCalendar:(id)arg6;	// IMP=0x000000010000e7e0
- (id)_datesForNextCurfewBoundary;	// IMP=0x000000010000e384
- (void)_registerPredicateObserver;	// IMP=0x000000010000dfa0
- (_Bool)_extractComponentsFromPredicate:(id)arg1;	// IMP=0x000000010000d688
- (id)metadata;	// IMP=0x000000010000d540
- (void)updateObserverRegistration;	// IMP=0x000000010000d534
- (void)invalidate;	// IMP=0x000000010000d3b0
- (id)evaluatePredicateWithError:(id *)arg1;	// IMP=0x000000010000ceb0
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 curfewPredicate:(id)arg3;	// IMP=0x000000010000cd6c

@end

