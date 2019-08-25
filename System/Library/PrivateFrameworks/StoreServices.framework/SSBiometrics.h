/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSBiometrics : NSObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	SSXPCConnection* _connection;

}
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setEnabled:(BOOL)arg1 withAuthToken:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getAllCachedBiometricHTTPHeadersWithToken:(id)arg1 accountID:(id)arg2 evict:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getCachedBiometricAuthenticationContextWithToken:(id)arg1 evict:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getCachedBiometricHTTPHeadersWithToken:(id)arg1 accountID:(id)arg2 evict:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)renewPurchaseTokenWithAuthToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resetAccount:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)resetWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setEnabled:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setAllowed:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)tokenUpdateDidFinishWithLogKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tokenUpdateShouldStartWithLogKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tokenUpdateStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getIdentityMapCountWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)isIdentityMapValidForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveIdentityMapForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
@end

