/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMActivityAlarm : NSObject {

	BOOL fIsValid;
	CFRunLoopRef fRunLoop;
	NSObject*<OS_dispatch_queue> fQueue;
	/*^block*/id fHandler;
	unsigned _trigger;
	double _duration;

}

@property (assign,nonatomic) double duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned trigger;              //@synthesize trigger=_trigger - In the implementation block
+(id)activityAlarmInfo;
+(BOOL)activityAlarmAvailable;
-(id)initWithTrigger:(unsigned)arg1 duration:(double)arg2 onRunLoop:(CFRunLoopRef)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)setTrigger:(unsigned)arg1 ;
-(id)initWithTrigger:(unsigned)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)setDuration:(double)arg1 ;
-(void)invalidate;
-(double)duration;
-(unsigned)trigger;
-(BOOL)isValid;
-(void)fire;
@end

