/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPStateUIProvider.h>

@protocol OS_dispatch_queue;
@class CDPContext, CDPStateController, NSObject, SFSession, NSString;

@interface SFDeviceOperationHandlerCDPSetup : NSObject <CDPStateUIProvider> {

	CDPContext* _cdpContext;
	CDPStateController* _cdpController;
	BOOL _invalidateCalled;
	/*^block*/id _responseHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFSession* _sfSession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFSession * sfSession;                                   //@synthesize sfSession=_sfSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_activate;
-(SFSession *)sfSession;
-(void)setSfSession:(SFSession *)arg1 ;
-(void)_handleCDPSetupRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2 ;
-(void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5 ;
-(void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptToInformUserOfAccountUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptToInformUserOfAccountLockOutWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(/*^block*/id)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)invalidate;
-(void)activate;
@end
