/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMDaemon : NSObject
-(void)registerXPCEventHandlers;
-(void)startupWithCompletion:(/*^block*/id)arg1 ;
-(id)xpcDarwinEventHandlers;
-(id)xpcDistributedEventHandlers;
-(id)verifyLaunchEventsConfiguration:(id)arg1 withExclusions:(id)arg2 ;
-(void)startup;
-(void)initialize;
-(void)run;
@end

