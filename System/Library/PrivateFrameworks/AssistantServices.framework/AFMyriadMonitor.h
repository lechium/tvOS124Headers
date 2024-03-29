/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableArray, AFNotifyObserver, NSString;

@interface AFMyriadMonitor : NSObject <AFNotifyObserverDelegate> {

	long long _state;
	NSObject*<OS_dispatch_source> _timer;
	CFNotificationCenterRef _center;
	NSObject*<OS_dispatch_queue> _myriadMonitorQueue;
	NSMutableArray* _completions;
	AFNotifyObserver* _wonObserver;
	AFNotifyObserver* _lostObserver;
	AFNotifyObserver* _beganObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
+(void)waitForMyriadDecisionWithCompletion:(/*^block*/id)arg1 ;
+(void)clear;
-(void)resultSeenWithValue:(BOOL)arg1 ;
-(void)setDecisionIsPending;
-(void)_flushCompletions:(BOOL)arg1 ;
-(void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)clear;
@end

