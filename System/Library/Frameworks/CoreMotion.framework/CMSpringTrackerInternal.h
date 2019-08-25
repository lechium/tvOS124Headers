/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSpringTrackerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	BOOL fTrackingStarted;
	/*^block*/id fHandler;

}
-(void)_startWithHandler:(/*^block*/id)arg1 ;
-(void)_handleStartStopResponse:(shared_ptr<CLConnectionMessage>*)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopWithHandler:(/*^block*/id)arg1 ;
-(void)_querySpringDataFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_isTracking;
-(void)_teardown;
-(id)init;
-(void)dealloc;
@end

