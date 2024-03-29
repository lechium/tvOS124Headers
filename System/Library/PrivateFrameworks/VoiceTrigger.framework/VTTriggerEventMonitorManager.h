/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface VTTriggerEventMonitorManager : NSObject {

	NSMutableSet* _connections;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedManager;
-(void)addConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(void)notifyVoiceTrigger;
-(void)notifyEarlyDetect;
-(id)init;
@end

