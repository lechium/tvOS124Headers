/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSBackgroundActivityScheduler : NSObject {

	id _private1;
	id _private2;
	id _private3;
	long long _flags;

}

@property (getter=isPreregistered) BOOL preregistered; 
@property (assign) double delay; 
@property (assign) id checkInHandler; 
@property (getter=_isAppRefresh) BOOL _appRefresh; 
@property (copy,readonly) NSString * identifier; 
@property (assign) long long qualityOfService; 
@property (assign) BOOL repeats; 
@property (assign) double interval; 
@property (assign) double tolerance; 
@property (readonly) BOOL shouldDefer; 
-(void)setTolerance:(double)arg1 ;
-(void)setPreregistered:(BOOL)arg1 ;
-(id)checkInHandler;
-(void)setCheckInHandler:(id)arg1 ;
-(void)setRepeats:(BOOL)arg1 ;
-(BOOL)_isAppRefresh;
-(void)_updateCriteria:(id)arg1 ;
-(BOOL)isPreregistered;
-(void)_updateCriteriaForCompletedActivity:(id)arg1 ;
-(void)set_appRefresh:(BOOL)arg1 ;
-(void)_setAdditionalXPCActivityProperties:(id)arg1 ;
-(void)scheduleWithBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldDefer;
-(long long)qualityOfService;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)invalidate;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(BOOL)repeats;
-(void)setQualityOfService:(long long)arg1 ;
-(double)tolerance;
@end

