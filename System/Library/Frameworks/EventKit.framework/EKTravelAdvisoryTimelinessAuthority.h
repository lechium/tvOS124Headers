/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalActivatable.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDate;

@interface EKTravelAdvisoryTimelinessAuthority : NSObject <CalActivatable> {

	BOOL _internalActive;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_source> _timer;
	NSDate* _startOfLeaveNowPeriod;
	NSDate* _startOfRunningLatePeriod;
	unsigned long long _internalPeriod;
	/*^block*/id _internalPeriodChangedCallback;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * startOfLeaveNowPeriod;                          //@synthesize startOfLeaveNowPeriod=_startOfLeaveNowPeriod - In the implementation block
@property (nonatomic,retain) NSDate * startOfRunningLatePeriod;                       //@synthesize startOfRunningLatePeriod=_startOfRunningLatePeriod - In the implementation block
@property (assign,nonatomic) BOOL internalActive;                                     //@synthesize internalActive=_internalActive - In the implementation block
@property (assign,nonatomic) unsigned long long internalPeriod;                       //@synthesize internalPeriod=_internalPeriod - In the implementation block
@property (nonatomic,copy) id internalPeriodChangedCallback;                          //@synthesize internalPeriodChangedCallback=_internalPeriodChangedCallback - In the implementation block
@property (nonatomic,copy) id periodChangedCallback; 
@property (nonatomic,readonly) unsigned long long period; 
+(id)stringForPeriod:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(unsigned long long)period;
-(void)_uninstallTimer;
-(BOOL)internalActive;
-(void)setInternalActive:(BOOL)arg1 ;
-(void)setStartOfLeaveNowPeriod:(NSDate *)arg1 ;
-(void)setStartOfRunningLatePeriod:(NSDate *)arg1 ;
-(NSDate *)startOfLeaveNowPeriod;
-(NSDate *)startOfRunningLatePeriod;
-(void)setInternalPeriodChangedCallback:(id)arg1 ;
-(id)internalPeriodChangedCallback;
-(unsigned long long)internalPeriod;
-(void)_refreshPeriod;
-(void)setInternalPeriod:(unsigned long long)arg1 ;
-(void)_refreshOnDate:(id)arg1 ;
-(void)updateWithHypothesis:(id)arg1 ;
-(void)setPeriodChangedCallback:(id)arg1 ;
-(id)periodChangedCallback;
-(void)_refreshTimer;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_refresh;
-(id)init;
-(void)dealloc;
-(BOOL)active;
-(void)activate;
-(void)deactivate;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
@end

