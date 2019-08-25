/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMGestureManagerInternal : NSObject {

	int fPriority;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fGestureHandler;
	NSObject*<OS_dispatch_source> fWatchDogTimer;
	NSObject*<OS_dispatch_queue> fPrivateQueue;

}
-(void)stopWatchdogCheckinsPrivate;
-(void)startWatchdogCheckinsPrivate;
-(void)startGestureUpdatesWithHandlerPrivate:(/*^block*/id)arg1 ;
-(void)stopGestureUpdatesPrivate;
-(id)initWithPriority:(int)arg1 ;
-(void)dealloc;
@end

