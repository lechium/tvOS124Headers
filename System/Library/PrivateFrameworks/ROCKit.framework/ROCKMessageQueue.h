/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class ROCKConnection, NSObject, NSPointerArray;

@interface ROCKMessageQueue : NSObject {

	unsigned _semaphore;
	ROCKConnection* _connection;
	unsigned long long _invocationMode;
	NSObject*<OS_dispatch_queue> _messageFlushQueue;
	NSObject*<OS_dispatch_queue> _messageHandlerQueue;
	NSObject*<OS_xpc_object> _messages;
	NSPointerArray* _notifiers;

}

@property (assign,nonatomic) unsigned long long invocationMode;                             //@synthesize invocationMode=_invocationMode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> messageFlushQueue;                //@synthesize messageFlushQueue=_messageFlushQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> messageHandlerQueue;              //@synthesize messageHandlerQueue=_messageHandlerQueue - In the implementation block
@property (assign,nonatomic) unsigned semaphore;                                            //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) ROCKConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> messages;                             //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) NSPointerArray * notifiers;                                    //@synthesize notifiers=_notifiers - In the implementation block
+(id)messageQueueWithConnection:(id)arg1 invocationMode:(unsigned long long)arg2 ;
-(void)setMessages:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)messages;
-(NSPointerArray *)notifiers;
-(void)setNotifiers:(NSPointerArray *)arg1 ;
-(unsigned)semaphore;
-(void)setSemaphore:(unsigned)arg1 ;
-(id)initWithConnection:(id)arg1 invocationMode:(unsigned long long)arg2 ;
-(void)setInvocationMode:(unsigned long long)arg1 ;
-(void)setMessageFlushQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMessageHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)invocationMode;
-(NSObject*<OS_dispatch_queue>)messageFlushQueue;
-(NSObject*<OS_dispatch_queue>)messageHandlerQueue;
-(void)dealloc;
-(ROCKConnection *)connection;
-(void)setConnection:(ROCKConnection *)arg1 ;
@end

