/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface WRMClientInterface : NSObject {

	NSObject*<OS_xpc_object> mConnection;
	int mProcessId;
	NSObject*<OS_dispatch_queue> mQueue;
	/*^block*/id mNotificationBlock;

}
-(void)unregisterClient;
-(void)registerClient:(int)arg1 queue:(id)arg2 notificationHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
@end

