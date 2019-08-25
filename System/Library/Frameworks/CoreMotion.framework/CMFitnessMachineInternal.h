/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMFitnessMachineInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;

}
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_feedFitnessMachineData:(id)arg1 ;
-(void)_teardown;
-(id)init;
-(void)dealloc;
@end
