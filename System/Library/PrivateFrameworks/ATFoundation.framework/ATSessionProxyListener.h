/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <ATFoundation/ATSessionObserver.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, ATSession, NSString;

@interface ATSessionProxyListener : NSObject <NSXPCListenerDelegate, ATSessionObserver> {

	NSXPCListener* _listener;
	NSMutableArray* _connections;
	NSObject*<OS_dispatch_queue> _queue;
	ATSession* _session;

}

@property (nonatomic,readonly) ATSession * session;                 //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ATSession *)session;
-(id)initWithSession:(id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
-(void)stop;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

