/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCConnectionListenerHandler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FBWorkspaceConnectionListener : NSObject <BSXPCConnectionListenerHandler> {

	NSObject*<OS_dispatch_queue> _connectionDispatcherQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)handleIncomingConnection:(id)arg1 forService:(id)arg2 ;
-(id)init;
@end
