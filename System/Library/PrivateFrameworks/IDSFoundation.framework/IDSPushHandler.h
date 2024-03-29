/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class APSConnection, NSData, NSMutableSet, NSMapTable, NSObject, NSString;

@interface IDSPushHandler : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	NSData* _cachedPushToken;
	Class _APSConnectionClass;
	NSMutableSet* _topicsCache;
	NSMapTable* _handlerMap;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	BOOL _shouldWaitToSetTopics;

}

@property (nonatomic,retain) Class APSConnectionClass;                //@synthesize APSConnectionClass=_APSConnectionClass - In the implementation block
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (assign,nonatomic) BOOL shouldWaitToSetTopics;              //@synthesize shouldWaitToSetTopics=_shouldWaitToSetTopics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstanceWithPortName:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)isConnected;
-(void)_updateTopicsOnIvarQueue;
-(void)_recalculateTopicsCacheOnIvarQueue;
-(BOOL)_validateHandler:(id)arg1 withSelector:(SEL)arg2 topic:(id)arg3 command:(id)arg4 ;
-(id)_apsConnectionPushToken;
-(void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4 ;
-(void)setTopics:(id)arg1 forListener:(id)arg2 ;
-(void)setCommands:(id)arg1 forListener:(id)arg2 ;
-(void)setShouldWaitToSetTopics:(BOOL)arg1 ;
-(void)configureAsMacNotificationCenterObserver:(id)arg1 withPushToWakeTopics:(id)arg2 ;
-(void)configureAsMacNotificationCenterObserver:(id)arg1 ;
-(BOOL)shouldWaitToSetTopics;
-(Class)APSConnectionClass;
-(void)setAPSConnectionClass:(Class)arg1 ;
-(NSData *)pushToken;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithPort:(id)arg1 ;
@end

