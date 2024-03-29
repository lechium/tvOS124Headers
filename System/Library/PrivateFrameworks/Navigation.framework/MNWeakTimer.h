/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface MNWeakTimer : NSObject {

	id _target;
	SEL _selector;
	NSTimer* _timer;

}

@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                  //@synthesize selector=_selector - In the implementation block
@property (readonly) NSTimer * timer;                       //@synthesize timer=_timer - In the implementation block
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)_timerDidFire;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)target;
-(SEL)selector;
-(void)invalidate;
-(NSTimer *)timer;
@end

