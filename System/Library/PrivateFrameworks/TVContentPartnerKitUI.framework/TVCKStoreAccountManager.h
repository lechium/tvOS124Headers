/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ATVAuthenticationContext, SSAccount, NSObject;

@interface TVCKStoreAccountManager : NSObject {

	ATVAuthenticationContext* _pendingAuthenticationContext;
	ATVAuthenticationContext* _activeAuthenticationContext;
	SSAccount* _activeAccount;
	BOOL _makingAccountChanges;
	BOOL _isActiveAccountUpdateScheduled;
	NSObject*<OS_dispatch_queue> _serialAccessQueue;
	NSObject*<OS_dispatch_queue> _authenticationQueue;

}

@property (nonatomic,readonly) SSAccount * activeAccount; 
+(BOOL)automaticallyNotifiesObserversOfActiveAccount;
+(id)sharedInstance;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(id)accountWithAccountName:(id)arg1 ;
-(void)signOutAccount:(id)arg1 ;
-(id)setActiveAccount:(SSAccount *)arg1 ;
-(id)accounts;
-(void)removeAccount:(id)arg1 ;
-(SSAccount *)activeAccount;
-(void)fetchFamilyInfoForActiveAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_authenticateActivityChanged:(id)arg1 ;
-(void)_accountStoreChanged;
-(void)_performSynchronizedBlock:(/*^block*/id)arg1 ;
-(void)_signOutAccount:(id)arg1 eraseKeyChainData:(BOOL)arg2 ;
-(void)authenticateAccount:(id)arg1 withPassword:(id)arg2 allowPrompt:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setAuthenticationContext:(id)arg1 ;
-(void)_dequeueAuthenticationContextAndAuthenticate;
-(id)_popAuthenticationContext;
-(void)_handleAuthenticationContext:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_updateActiveAccount;
-(void)authenticateWithName:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)authenticateAccount:(id)arg1 allowPrompt:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
@end

