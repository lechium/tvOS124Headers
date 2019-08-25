/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTrigger.h>

@class NSDate, NSTimeZone, NSString, NSDateComponents, NSArray, NSTimer;

@interface HMDTimerTrigger : HMDTrigger {

	NSDate* _fireDate;
	NSTimeZone* _fireDateTimeZone;
	NSString* _significantEvent;
	NSDateComponents* _significantEventOffset;
	NSDateComponents* _fireRepeatInterval;
	NSArray* _recurrences;
	NSString* _timerID;
	NSDate* _currentFireDate;
	NSTimer* _timer;

}

@property (nonatomic,copy) NSDate * fireDate;                                      //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * fireDateTimeZone;                          //@synthesize fireDateTimeZone=_fireDateTimeZone - In the implementation block
@property (nonatomic,copy) NSString * significantEvent;                            //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,copy) NSDateComponents * significantEventOffset;              //@synthesize significantEventOffset=_significantEventOffset - In the implementation block
@property (nonatomic,copy) NSDateComponents * fireRepeatInterval;                  //@synthesize fireRepeatInterval=_fireRepeatInterval - In the implementation block
@property (nonatomic,copy) NSArray * recurrences;                                  //@synthesize recurrences=_recurrences - In the implementation block
@property (nonatomic,retain) NSString * timerID;                                   //@synthesize timerID=_timerID - In the implementation block
@property (nonatomic,retain) NSDate * currentFireDate;                             //@synthesize currentFireDate=_currentFireDate - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                      //@synthesize timer=_timer - In the implementation block
+(id)logCategory;
+(id)validateTriggerModel:(id)arg1 message:(id)arg2 currentFireDate:(id)arg3 ;
+(id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2 ;
+(id)getCalendar:(id)arg1 ;
+(id)validateRecurrence:(id)arg1 calendar:(id)arg2 fireDate:(id)arg3 ;
+(id)validateRecurrences:(id)arg1 ;
+(id)validateSignificantOffset:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(BOOL)shouldActivateOnLocalDevice;
-(id)dumpState;
-(id)emptyModelObject;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_registerForMessages;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3 ;
-(unsigned long long)triggerType;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(NSString *)timerID;
-(void)completeConfiguration;
-(void)setRecurrences:(NSArray *)arg1 ;
-(NSString *)significantEvent;
-(NSTimeZone *)fireDateTimeZone;
-(NSDateComponents *)fireRepeatInterval;
-(NSArray *)recurrences;
-(NSDateComponents *)significantEventOffset;
-(void)setTimerID:(NSString *)arg1 ;
-(void)_timerTriggered;
-(id)getCalendar;
-(id)getFireInterval;
-(void)setCurrentFireDate:(NSDate *)arg1 ;
-(void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1 ;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setSignificantEventOffset:(NSDateComponents *)arg1 ;
-(void)setFireDateTimeZone:(NSTimeZone *)arg1 ;
-(void)setFireRepeatInterval:(NSDateComponents *)arg1 ;
-(id)_serializeForAdd;
-(void)_handleUpdateTimerTriggerPropertiesModel:(id)arg1 message:(id)arg2 ;
-(BOOL)_reactivateFireDateTrigger;
-(BOOL)_reactivateSignificantEventTrigger;
-(id)_nextFireDate;
-(void)_disableTimerOffReactivationFailure;
-(void)_startTimerWithFireDate:(id)arg1 ;
-(id)_nextSignificantEventFireDate;
-(void)_startTimerWithSignificantEventDate:(id)arg1 ;
-(void)_reactiveTriggerAfterDelay;
-(void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id*)arg5 returnDateAfter:(id*)arg6 ;
-(BOOL)_shouldExecuteActionSet;
-(BOOL)_reactivateTrigger;
-(void)_handleTimerTriggerUpdate:(id)arg1 message:(id)arg2 ;
-(void)timerTriggered;
-(void)nsTimerTriggered:(id)arg1 ;
-(NSDate *)currentFireDate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)_stopTimer;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)timerFired:(id)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(NSDate *)fireDate;
-(void)_startTimer:(id)arg1 ;
@end

