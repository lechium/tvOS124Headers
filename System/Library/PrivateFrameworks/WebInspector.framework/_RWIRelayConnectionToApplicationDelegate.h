/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _RWIRelayConnectionToApplicationDelegate <NSObject>
@optional
-(void)xpcConnection:(id)arg1 unhandledMessage:(id)arg2;

@required
-(void)xpcConnectionFailed:(id)arg1;
-(void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;

@end

