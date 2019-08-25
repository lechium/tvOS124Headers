/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface SFAppleIDClient : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	NSXPCConnection* _xpcAuthCnx;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)_invalidated;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)myAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)personInfoWithEmailOrPhone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)statusInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_copyCertificateForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_copyIdentityForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_myAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_personInfoWithEmailOrPhone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ensureAuthXPCStarted;
-(void)authenticateAccountWithAppleID:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyCertificateForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)copyIdentityForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
@end
