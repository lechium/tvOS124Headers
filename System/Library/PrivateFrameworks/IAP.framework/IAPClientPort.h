/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface IAPClientPort : NSObject {

	NSString* _uuid;
	/*^block*/id _sendDataHandler;
	NSObject*<OS_dispatch_queue> _sendDataHandlerQueue;
	NSObject*<OS_dispatch_queue> _clientPortEventQueue;

}

@property (nonatomic,readonly) NSString * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sendDataHandlerQueue;              //@synthesize sendDataHandlerQueue=_sendDataHandlerQueue - In the implementation block
@property (assign,nonatomic) id sendDataHandler;                                               //@synthesize sendDataHandler=_sendDataHandler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientPortEventQueue;              //@synthesize clientPortEventQueue=_clientPortEventQueue - In the implementation block
-(id)sendDataHandler;
-(id)initWithUUID:(id)arg1 queue:(id)arg2 sendHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)sendDataHandlerQueue;
-(NSObject*<OS_dispatch_queue>)clientPortEventQueue;
-(void)setSendDataHandler:(id)arg1 ;
-(void)dealloc;
-(NSString *)uuid;
@end

