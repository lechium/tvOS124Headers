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

@interface CMStepCounterProxy : NSObject {

	CLConnectionClient* fLocationdConnection;
	BOOL fStartedUpdates;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	long long fStepCountFromStart;
	long long fPrevStepCount;

}
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_queryStepCountStartingFromInternal:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_teardown;
-(id)init;
-(void)dealloc;
@end
