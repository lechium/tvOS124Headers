/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface NEIPC : NSObject {

	/*^block*/id _messageHandler;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _listener;

}

@property (copy) id messageHandler;                                  //@synthesize messageHandler=_messageHandler - In the implementation block
@property (retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_xpc_object> listener;                //@synthesize listener=_listener - In the implementation block
@property (readonly) BOOL connected; 
-(BOOL)connected;
-(void)logMessageType:(unsigned)arg1 data:(id)arg2 actionString:(id)arg3 ;
-(void)handleMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setupMessageHandlingWithQueue:(id)arg1 ;
-(id)startInListenModeWithQueue:(id)arg1 messageHandler:(/*^block*/id)arg2 ;
-(void)startWithEndpoint:(id)arg1 queue:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(BOOL)sendMessageWithType:(unsigned)arg1 data:(id)arg2 replyQueue:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(void)setMessageHandler:(id)arg1 ;
-(id)messageHandler;
-(void)stop;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)listener;
-(void)setListener:(NSObject*<OS_xpc_object>)arg1 ;
@end

