/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol FLFollowUpControllerDelegate;
@class NSString, NSXPCListener;

@interface FLFollowUpController : NSObject <NSXPCListenerDelegate> {

	NSString* _clientIdentifier;
	NSString* _machServiceName;
	NSXPCListener* _listener;
	id<FLFollowUpControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FLFollowUpControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 xpcEndpoint:(id)arg2 ;
-(unsigned long long)countOfPendingFollowUpItems:(id*)arg1 ;
-(BOOL)clearNotificationForItem:(id)arg1 error:(id*)arg2 ;
-(void)countOfPendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)clearPendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_postHSA2LoginNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_postHSA2PasswordChangeForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_postHSA2LoginCode:(id)arg1 withNotification:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1 ;
-(void)_postHSA2PasswordResetNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didActivateHSA2LoginNotification:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 machServiceName:(id)arg2 delegate:(id)arg3 ;
-(BOOL)clearPendingFollowUpItems:(id*)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)postFollowUpItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)pendingFollowUpItems:(id*)arg1 ;
-(BOOL)postFollowUpItem:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<FLFollowUpControllerDelegate>)arg1 ;
-(id<FLFollowUpControllerDelegate>)delegate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
