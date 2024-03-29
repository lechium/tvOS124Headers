/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSString;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate> {

	os_unfair_lock_s _lock;
	NSXPCListener* _listener;
	NSMutableArray* _sessions;
	int _connectionNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasActiveSessions;
+(void)startViewServiceSessionManagerAsPlugin:(BOOL)arg1 ;
+(id)__serviceSessionManager;
-(id)init;
-(void)dealloc;
-(id)_initAsPlugIn:(BOOL)arg1 ;
-(BOOL)_hasActiveSessions;
-(void)_startListener;
-(void)_startListenerWithName:(id)arg1 ;
-(void)_registerSessionForDefaultDeputies:(id)arg1 ;
-(void)_startOrStopSystemsForBackgroundRunning;
-(void)_configureSessionForConnection:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

