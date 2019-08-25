/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface AVCaptureDeviceControlRequestQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _mutableArray;

}
-(void)enqueueRequest:(id)arg1 ;
-(id)head;
-(id)dequeue;
-(id)init;
-(void)dealloc;
@end

