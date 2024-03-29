/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNETADisplayFormatterDelegate;
@class NSTimeZone, MNWeakTimer, NSDate;

@interface MNETADisplayFormatter : NSObject {

	id<MNETADisplayFormatterDelegate> _delegate;
	double _remainingTime;
	NSTimeZone* _timeZone;
	MNWeakTimer* _updateTimer;
	double _displayRemainingTime;
	NSDate* _displayETA;

}

@property (assign,nonatomic,__weak) id<MNETADisplayFormatterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double remainingTime;                                           //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,readonly) double displayRemainingTime;                                  //@synthesize displayRemainingTime=_displayRemainingTime - In the implementation block
@property (nonatomic,readonly) NSDate * displayETA;                                          //@synthesize displayETA=_displayETA - In the implementation block
-(void)setRemainingTime:(double)arg1 ;
-(void)_updateTimerFired;
-(double)remainingTime;
-(NSDate *)displayETA;
-(void)_updateDisplayETA;
-(double)_displayTimeIntervalForTimeInterval:(double)arg1 ;
-(id)_displayDateWithRemainingTime:(double)arg1 ;
-(void)_scheduleUpdateTimer;
-(id)initWithTimeZone:(id)arg1 ;
-(double)displayRemainingTime;
-(void)dealloc;
-(void)setDelegate:(id<MNETADisplayFormatterDelegate>)arg1 ;
-(id<MNETADisplayFormatterDelegate>)delegate;
@end

