/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFAnalyticsService <NSObject>
@optional
-(oneway void)stageEvent:(id)arg1;
-(oneway void)stageEvents:(id)arg1;

@required
-(oneway void)stageEvents:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
-(oneway void)beginEventsGrouping;
-(oneway void)endEventsGrouping;

@end

