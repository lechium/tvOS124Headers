/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMSkiData;

@interface CMSkiTrackerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	BOOL fStartedUpdates;
	CMSkiData* fMostRecentRecord;
	/*^block*/id fHandler;
	double fRunDistanceOffset;
	double fRunElevationDescendedOffset;

}
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopUpdates;
-(void)_queryUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_handleUpdates:(id)arg1 ;
-(void)_teardown;
-(id)init;
-(void)dealloc;
@end

