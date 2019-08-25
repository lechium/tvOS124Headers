/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@class FBServiceClientAuthenticator;

@interface FBSystemAppProxyServiceServer : FBSServiceFacility {

	FBServiceClientAuthenticator* _badgeValueAuthenticator;
	FBServiceClientAuthenticator* _deleteSnapshotsAuthenticator;
	FBServiceClientAuthenticator* _shutdownAuthenticator;
	FBServiceClientAuthenticator* _keyboardFocusAuthenticator;
	FBServiceClientAuthenticator* _dataResetAuthenticator;

}
+(id)sharedInstance;
-(id)_initWithQueue:(id)arg1 ;
-(void)_handleUIAppCheckIn:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetBadgeValue:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetBadgeValue:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSystemApplicationBundleIdentifier:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg1 forClient:(id)arg2 ;
-(void)_handleCanActivateApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleActivateApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetProcessHandle:(id)arg1 forClient:(id)arg2 ;
-(void)_handleActions:(id)arg1 forClient:(id)arg2 ;
-(void)_handleTerminateApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleTerminateApplicationGroup:(id)arg1 forClient:(id)arg2 ;
-(void)_handleShutdown:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetKeyboardFocusApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleDeleteAllApplicationSnapshots:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSuspendApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleDataReset:(id)arg1 forClient:(id)arg2 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
@end
