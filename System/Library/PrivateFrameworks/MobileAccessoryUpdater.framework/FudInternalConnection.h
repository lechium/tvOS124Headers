/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FudConnection.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface FudInternalConnection : NSObject <FudConnection> {

	NSString* clientIdentifier;
	NSObject*<OS_dispatch_queue> handlerQueue;
	/*^block*/id messageHandler;
	NSMutableDictionary* pendingRequests;
	BOOL didStop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendMessageToFud:(id)arg1 ;
-(void)sendMessageToFud:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 handlerQueue:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)handleInboundNotification:(id)arg1 ;
-(long long)getNextMessageID;
-(void)dealloc;
-(void)stop;
@end

