/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRTransferServerDelegate.h>

@protocol OS_dispatch_semaphore, TRDeviceSetupServerDelegate;
@class TRTransferServer, NSData, NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface TRDeviceSetupServer : NSObject <TRTransferServerDelegate> {

	TRTransferServer* _transferServer;
	NSData* _dataToSend;
	NSObject*<OS_dispatch_semaphore> _dataToSendSemaphore;
	BOOL _cancelledSetupInProgress;
	int _notifyToken;
	BOOL _notifyTokenIsValid;
	BOOL _setupInProgress;
	BOOL _started;
	id<TRDeviceSetupServerDelegate> _delegate;
	NSMutableArray* _accountsToAuthenticate;
	NSMutableDictionary* _cachedAuthInfo;

}

@property (nonatomic,retain) NSMutableArray * accountsToAuthenticate;                      //@synthesize accountsToAuthenticate=_accountsToAuthenticate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedAuthInfo;                         //@synthesize cachedAuthInfo=_cachedAuthInfo - In the implementation block
@property (assign,nonatomic,__weak) id<TRDeviceSetupServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)server:(id)arg1 didFailToReceiveData:(id)arg2 ;
-(void)serverWillReceiveData:(id)arg1 ;
-(void)server:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)_finishSetupWithError:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_connectWithAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_authenticateWithAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_setUpWithAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_finishWithAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_cancelWithAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_cancelTransferConnection;
-(void)setCachedAuthInfo:(NSMutableDictionary *)arg1 ;
-(void)setAccountsToAuthenticate:(NSMutableArray *)arg1 ;
-(void)_requestAuthenticationForNextAccountWithReplyHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)accountsToAuthenticate;
-(void)_requestAuthenticationForAccount:(unsigned long long)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_requestGeneralSetupWithReplyHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)cachedAuthInfo;
-(void)_authenticateAccount:(unsigned long long)arg1 withAuthInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestAuthenticationFromPeripheralForAccount:(unsigned long long)arg1 lastAttemptAction:(id)arg2 lastAttemptError:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)_sendAction:(id)arg1 sendDataHandler:(/*^block*/id)arg2 shouldSendNilOnFailure:(BOOL)arg3 error:(id*)arg4 ;
-(void)cancelActiveSetup;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<TRDeviceSetupServerDelegate>)arg1 ;
-(id<TRDeviceSetupServerDelegate>)delegate;
-(void)stop;
-(void)start;
@end

