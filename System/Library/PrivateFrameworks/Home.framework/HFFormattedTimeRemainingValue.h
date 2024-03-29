/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFSynchronizedTimerObserver.h>
#import <libobjc.A.dylib/HFDynamicFormattingValue.h>

@protocol HFStringGenerator;
@class NSMapTable, NSDate, NSDateComponentsFormatter, NSString;

@interface HFFormattedTimeRemainingValue : NSObject <HFSynchronizedTimerObserver, HFDynamicFormattingValue> {

	NSMapTable* _observationBlocks;
	NSDate* _value;
	NSDateComponentsFormatter* _formatter;
	id<HFStringGenerator> _currentFormattedValue;

}

@property (nonatomic,readonly) NSMapTable * observationBlocks;                         //@synthesize observationBlocks=_observationBlocks - In the implementation block
@property (nonatomic,retain) id<HFStringGenerator> currentFormattedValue;              //@synthesize currentFormattedValue=_currentFormattedValue - In the implementation block
@property (nonatomic,readonly) NSDate * value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDateComponentsFormatter * formatter;                  //@synthesize formatter=_formatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)valueWithRemainingDuration:(double)arg1 relativeToDate:(id)arg2 ;
+(id)defaultFormatter;
-(NSDateComponentsFormatter *)formatter;
-(id)initWithFireDate:(id)arg1 ;
-(id)initWithFireDate:(id)arg1 formatter:(id)arg2 ;
-(double)_timeRemaining;
-(id)_generateFormattedValue;
-(NSMapTable *)observationBlocks;
-(void)_updateTimerState;
-(void)setCurrentFormattedValue:(id<HFStringGenerator>)arg1 ;
-(void)countdownTimerDidFire:(id)arg1 ;
-(id)observeFormattedValueChangesWithBlock:(/*^block*/id)arg1 ;
-(id<HFStringGenerator>)currentFormattedValue;
-(NSDate *)value;
-(void)_stopTimer;
@end

