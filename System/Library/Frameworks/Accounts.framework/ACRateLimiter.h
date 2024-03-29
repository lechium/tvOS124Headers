/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDate;

@interface ACRateLimiter : NSObject {

	BOOL _isVacuumInProgress;
	unsigned long long _maximum;
	double _timeInterval;
	NSObject*<OS_dispatch_queue> _instanceQueue;
	NSObject*<OS_dispatch_queue> _vacuumQueue;
	NSMutableDictionary* _keyToSimpleRateLimiter;
	double _vacuumTimeInterval;
	NSDate* _nextVacuumDate;

}

@property (readonly) NSObject*<OS_dispatch_queue> instanceQueue;              //@synthesize instanceQueue=_instanceQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> vacuumQueue;                //@synthesize vacuumQueue=_vacuumQueue - In the implementation block
@property (retain) NSMutableDictionary * keyToSimpleRateLimiter;              //@synthesize keyToSimpleRateLimiter=_keyToSimpleRateLimiter - In the implementation block
@property (readonly) double vacuumTimeInterval;                               //@synthesize vacuumTimeInterval=_vacuumTimeInterval - In the implementation block
@property (assign) BOOL isVacuumInProgress;                                   //@synthesize isVacuumInProgress=_isVacuumInProgress - In the implementation block
@property (retain) NSDate * nextVacuumDate;                                   //@synthesize nextVacuumDate=_nextVacuumDate - In the implementation block
@property (readonly) unsigned long long maximum;                              //@synthesize maximum=_maximum - In the implementation block
@property (readonly) double timeInterval;                                     //@synthesize timeInterval=_timeInterval - In the implementation block
-(id)simpleRateLimiterForKey:(id)arg1 ;
-(void)vacuumIfNeeded;
-(NSObject*<OS_dispatch_queue>)instanceQueue;
-(NSMutableDictionary *)keyToSimpleRateLimiter;
-(BOOL)isVacuumInProgress;
-(NSDate *)nextVacuumDate;
-(void)setIsVacuumInProgress:(BOOL)arg1 ;
-(void)_vacuumQueue_vacuum;
-(double)vacuumTimeInterval;
-(void)setNextVacuumDate:(NSDate *)arg1 ;
-(BOOL)_vacuumQueue_vacuumKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)vacuumQueue;
-(void)setKeyToSimpleRateLimiter:(NSMutableDictionary *)arg1 ;
-(id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(BOOL)reservePerformActionForKey:(id)arg1 ;
-(unsigned long long)maximum;
-(double)timeInterval;
@end

