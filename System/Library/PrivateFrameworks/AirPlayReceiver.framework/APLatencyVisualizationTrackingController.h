/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class APLatencyVisualizationLayer, NSObject;

@interface APLatencyVisualizationTrackingController : NSObject {

	APLatencyVisualizationLayer* _layer;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init:(id)arg1 ;
-(void)draw;
-(void)dealloc;
-(id)layer;
@end

