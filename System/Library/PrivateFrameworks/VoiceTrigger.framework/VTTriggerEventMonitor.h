/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTTriggerEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSHashTable, NSString;

@interface VTTriggerEventMonitor : NSObject <VTTriggerEventMonitorDelegate> {

	int _notifyToken;
	int _notifyTokenLegacyTrigger;
	int _notifyTokenLegacyEarlyDetect;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(void)_invalidateConnection;
-(void)voiceTriggered;
-(void)earlyDetected;
-(void)_attemptConnection;
-(void)_enableTriggerEventXPCNotification:(BOOL)arg1 ;
-(void)_voiceTriggered;
-(void)_earlyDetected;
-(void)_attemptConnectionInQueue;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

