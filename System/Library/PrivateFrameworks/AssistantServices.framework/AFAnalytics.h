/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group, AFAnalyticsService;
#import <AssistantServices/AssistantServices-Structs.h>
@class NSObject;

@interface AFAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	id<AFAnalyticsService> _service;

}
+(id)sharedAnalytics;
-(void)setService:(id)arg1 ;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
-(void)logEvent:(id)arg1 ;
-(void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3 ;
-(void)barrier:(/*^block*/id)arg1 ;
-(void)beginEventsGrouping;
-(void)endEventsGrouping;
-(void)logEventWithType:(long long)arg1 contextProvider:(/*^block*/id)arg2 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(BOOL)arg4 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(/*^block*/id)arg3 contextProvidingQueue:(id)arg4 ;
-(void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnContext:(id)arg3 ;
-(void)_stageEvent:(id)arg1 ;
-(id)_service:(BOOL)arg1 ;
-(void)_stageEvents:(id)arg1 ;
-(void)logEventWithType:(long long)arg1 contextProvider:(/*^block*/id)arg2 contextProvidingQueue:(id)arg3 ;
-(void)logInstrumentation:(id)arg1 turnContext:(id)arg2 ;
-(void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(NSUUID*)arg3 ;
-(void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2 ;
-(void)logEvents:(id)arg1 ;
-(void)logClientFeedbackPresented:(id)arg1 ;
-(id)createTurnBasedInstrumentationContext;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 ;
-(id)init;
-(id)_init;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 ;
@end

