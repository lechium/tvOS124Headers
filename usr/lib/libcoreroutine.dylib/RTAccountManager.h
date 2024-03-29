/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@class ACAccountStore, RTAccount, RTInvocationDispatcher, RTDefaultsManager, RTLifeCycleManager, RTDarwinNotificationHelper, AFPreferences;

@interface RTAccountManager : RTService {

	BOOL _ready;
	BOOL _siriCloudSyncEnabled;
	BOOL _cloudSyncProvisionedForAccount;
	ACAccountStore* _accountStore;
	RTAccount* _account;
	RTInvocationDispatcher* _dispatcher;
	RTDefaultsManager* _defaultsManager;
	RTLifeCycleManager* _lifecycleManager;
	long long _cloudSyncAuthorizationState;
	RTDarwinNotificationHelper* _notificationHelper;
	AFPreferences* _siriPreferences;
	double _authorizationChangeExitTimeInterval;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) RTAccount * account;                                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                          //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                          //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTLifeCycleManager * lifecycleManager;                        //@synthesize lifecycleManager=_lifecycleManager - In the implementation block
@property (assign,nonatomic) long long cloudSyncAuthorizationState;                        //@synthesize cloudSyncAuthorizationState=_cloudSyncAuthorizationState - In the implementation block
@property (assign,nonatomic) BOOL siriCloudSyncEnabled;                                    //@synthesize siriCloudSyncEnabled=_siriCloudSyncEnabled - In the implementation block
@property (assign,nonatomic) BOOL cloudSyncProvisionedForAccount;                          //@synthesize cloudSyncProvisionedForAccount=_cloudSyncProvisionedForAccount - In the implementation block
@property (nonatomic,retain) RTDarwinNotificationHelper * notificationHelper;              //@synthesize notificationHelper=_notificationHelper - In the implementation block
@property (nonatomic,retain) AFPreferences * siriPreferences;                              //@synthesize siriPreferences=_siriPreferences - In the implementation block
@property (assign,nonatomic) double authorizationChangeExitTimeInterval;                   //@synthesize authorizationChangeExitTimeInterval=_authorizationChangeExitTimeInterval - In the implementation block
+(BOOL)supportsNotificationName:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setup;
-(long long)accountStatus;
-(RTAccount *)account;
-(void)setAccount:(RTAccount *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)_setup;
-(id)_primaryiCloudAccount;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchCloudSyncAuthorizationState:(/*^block*/id)arg1 ;
-(void)updateCloudSyncProvisionedForAccount:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithLifecycleManager:(id)arg1 defaultsManager:(id)arg2 ;
-(RTDefaultsManager *)defaultsManager;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(long long)cloudSyncAuthorizationState;
-(RTLifeCycleManager *)lifecycleManager;
-(void)setLifecycleManager:(RTLifeCycleManager *)arg1 ;
-(id)initWithAccountStore:(id)arg1 lifecycleManager:(id)arg2 defaultsManager:(id)arg3 ;
-(void)updateCloudSyncAuthorizationState:(BOOL)arg1 ;
-(void)onDefaultsUpdate:(id)arg1 ;
-(void)_lookupAccount:(/*^block*/id)arg1 ;
-(void)_updateCloudSyncAuthorizationState:(BOOL)arg1 ;
-(void)currentAccount:(/*^block*/id)arg1 ;
-(void)_handleSiriCloudSyncPreferenceChangedNotification;
-(void)_onDefaultsUpdate:(id)arg1 ;
-(void)lookupAccount:(/*^block*/id)arg1 ;
-(void)handleSiriCloudSyncPreferenceChangedNotification;
-(void)setCloudSyncAuthorizationState:(long long)arg1 ;
-(BOOL)siriCloudSyncEnabled;
-(void)setSiriCloudSyncEnabled:(BOOL)arg1 ;
-(BOOL)cloudSyncProvisionedForAccount;
-(void)setCloudSyncProvisionedForAccount:(BOOL)arg1 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)setNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(AFPreferences *)siriPreferences;
-(void)setSiriPreferences:(AFPreferences *)arg1 ;
-(double)authorizationChangeExitTimeInterval;
-(void)setAuthorizationChangeExitTimeInterval:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
@end

