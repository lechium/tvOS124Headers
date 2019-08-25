/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACMAppleConnectImpl.h>
@class ACMAppleConnectImplComponents, UIView;


@protocol ACMAppleConnectImpl <NSObject>
@property (readonly) ACMAppleConnectImplComponents * components; 
@property (readonly) unsigned long long signInDialogContentStyle; 
@property (readonly) UIView * managerApprovalDialogSummaryView; 
@required
-(unsigned long long)signInDialogContentStyle;
-(void)logoutUser:(id)arg1 inRealm:(id)arg2;
-(void)updateLogLevel;
-(UIView *)managerApprovalDialogSummaryView;
-(ACMAppleConnectImplComponents *)components;

@end

#import <libobjc.A.dylib/ACMUIControllerDelegate.h>

@class ACMAppleConnectImplComponents, UIView, NSError, NSMutableSet, NSString;

@interface ACMAppleConnectImpl : NSObject <ACMAppleConnectImpl, ACMUIControllerDelegate> {

	NSError* _memoryError;
	NSMutableSet* _handlers;

}

@property (assign) long long logLevel; 
@property (retain,readonly) NSMutableSet * handlers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) ACMAppleConnectImplComponents * components; 
@property (readonly) unsigned long long signInDialogContentStyle; 
@property (readonly) UIView * managerApprovalDialogSummaryView; 
-(void)setLogLevel:(long long)arg1 ;
-(long long)logLevel;
-(void)cancelRequests;
-(NSMutableSet *)handlers;
-(unsigned long long)signInDialogContentStyle;
-(void)scheduleHandler:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)unscheduleHandler:(id)arg1 ;
-(void)logoutUser:(id)arg1 inRealm:(id)arg2 ;
-(void)updateLogLevel;
-(UIView *)managerApprovalDialogSummaryView;
-(void)authenticateRunningOnMainThreadWithRequest:(id)arg1 ;
-(void)unscheduleAllHandlers;
-(void)changeGestureRunningOnMainThreadWithRequest:(id)arg1 ;
-(void)changePasswordRunningOnMainThreadWithRequest:(id)arg1 ;
-(void)uiControllerOnLogOut:(id)arg1 ;
-(unsigned long long)uiControllerSignInDialogContentStyle:(id)arg1 ;
-(id)uiControllerManagerApprovalDialogSummaryView:(id)arg1 ;
-(id)memoryError;
-(void)changeUserPasswordWithRequest:(id)arg1 isGesture:(BOOL)arg2 ;
-(BOOL)shouldReleaseOnMemoryWarning;
-(void)authenticate:(id)arg1 ;
-(void)verifyServiceTicket:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(ACMAppleConnectImplComponents *)components;
@end

