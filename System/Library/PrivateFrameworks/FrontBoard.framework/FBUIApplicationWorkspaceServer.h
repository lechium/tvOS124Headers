/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBWorkspaceServer.h>

@interface FBUIApplicationWorkspaceServer : FBWorkspaceServer
-(void)sendLaunchEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendExitEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendProcessAssertionExpirationImminent;
-(BOOL)_queue_handleMessage:(id)arg1 withType:(long long)arg2 ;
@end

