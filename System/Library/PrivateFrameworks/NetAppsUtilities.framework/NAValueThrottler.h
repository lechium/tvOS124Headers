/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAScheduler, NACancelable;
@class NSMutableSet;

@interface NAValueThrottler : NSObject {

	double _throttleInterval;
	id<NAScheduler> _updateScheduler;
	id _value;
	NSMutableSet* _observerBlocks;
	id<NACancelable> _valueUpdateCancelationToken;

}

@property (nonatomic,readonly) NSMutableSet * observerBlocks;                           //@synthesize observerBlocks=_observerBlocks - In the implementation block
@property (nonatomic,retain) id<NACancelable> valueUpdateCancelationToken;              //@synthesize valueUpdateCancelationToken=_valueUpdateCancelationToken - In the implementation block
@property (nonatomic,readonly) double throttleInterval;                                 //@synthesize throttleInterval=_throttleInterval - In the implementation block
@property (nonatomic,retain) id<NAScheduler> updateScheduler;                           //@synthesize updateScheduler=_updateScheduler - In the implementation block
@property (nonatomic,retain) id value;                                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingValueChange; 
-(id<NAScheduler>)updateScheduler;
-(id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2 ;
-(id)initWithThrottleInterval:(double)arg1 ;
-(id<NACancelable>)valueUpdateCancelationToken;
-(void)_enqueueValueUpdateIfNecessary;
-(void)setValueUpdateCancelationToken:(id<NACancelable>)arg1 ;
-(double)throttleInterval;
-(void)_notifyObserversOfValueUpdate;
-(NSMutableSet *)observerBlocks;
-(void)setUpdateScheduler:(id<NAScheduler>)arg1 ;
-(id)observeValueChangesWithBlock:(/*^block*/id)arg1 ;
-(void)flushValueChanges;
-(BOOL)hasPendingValueChange;
-(id)init;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
@end

