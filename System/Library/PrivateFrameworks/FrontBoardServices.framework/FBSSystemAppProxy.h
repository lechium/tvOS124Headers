/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@class FBSProcessHandle;

@interface FBSSystemAppProxy : FBSServiceFacilityClient {

	FBSProcessHandle* _processHandle;

}
+(id)sharedInstance;
-(void)checkInUIApplication;
-(void)fireCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)_sendMessageType:(long long)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(BOOL)canActivateApplication:(id)arg1 reason:(out long long*)arg2 ;
-(void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)processHandleForApplication:(id)arg1 ;
-(void)deleteAllSnapshotsForApplication:(id)arg1 ;
-(void)dataResetWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)openApplication:(id)arg1 options:(id)arg2 clientHandle:(id)arg3 withResult:(/*^block*/id)arg4 ;
-(void)fireCompletion:(/*^block*/id)arg1 openAppErrorCode:(long long)arg2 ;
-(void)_handleConnect:(id)arg1 ;
-(id)systemApplicationBundleIdentifier;
-(void)sendActions:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)shutdownWithOptions:(id)arg1 ;
-(id)clientCallbackQueue;
-(id)badgeValueForBundleID:(id)arg1 ;
-(void)setBadgeValue:(id)arg1 forBundleID:(id)arg2 ;
-(id)init;
-(void)suspendCurrentApplication;
-(BOOL)isPasscodeLockedOrBlocked;
@end

