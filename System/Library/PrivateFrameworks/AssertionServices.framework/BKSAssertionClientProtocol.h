/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSAssertionClientProtocol <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> assertionQueue; 
@required
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(void)registerClientHandler:(id)arg1 forAssertionIdentifier:(id)arg2;
-(void)unregisterClientHandlerForAssertionIdentifier:(id)arg1;
-(BOOL)sendCreateEvent:(id)arg1 error:(id*)arg2;
-(void)sendUpdateEvent:(id)arg1;
-(void)sendDestroyEvent:(id)arg1;

@end

