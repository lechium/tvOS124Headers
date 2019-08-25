/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class APSConnection, NSMutableSet, NSString, NSHashTable, NSLock, NSObject, NSArray;

@interface PDPushNotificationManager : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	NSMutableSet* _registeredTopics;
	NSString* _pushToken;
	NSHashTable* _consumers;
	NSLock* _consumersLock;
	NSObject*<OS_dispatch_queue> _replyQueue;

}

@property (nonatomic,copy) NSString * pushToken;                        //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) NSArray * topics; 
@property (nonatomic,readonly) NSArray * currentConsumers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPushToken:(NSString *)arg1 ;
-(void)registerConsumer:(id)arg1 ;
-(void)recalculatePushTopics;
-(void)unregisterConsumer:(id)arg1 ;
-(void)unregisterAllConsumers;
-(NSArray *)topics;
-(NSArray *)currentConsumers;
-(void)simulatePushForTopic:(id)arg1 ;
-(NSString *)pushToken;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)connect;
@end

