/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDAccountInfoProvider.h>

@protocol OS_dispatch_queue;
@class CKAccountOverrideInfo, ACAccountType, CKDBackingAccount, CKDClientContext, NSObject, NSString, NSPersonNameComponents, ACAccountStore;

@interface CKDAccount : NSObject <CKDAccountInfoProvider> {

	BOOL _isUnitTestingAccount;
	BOOL _accountWantsPushRegistration;
	BOOL _accountWantsFlowControl;
	BOOL _isAnonymousAccount;
	BOOL _haveWarnedAboutServerPreferredPushEnvironment;
	CKAccountOverrideInfo* _fakeAccountInfo;
	ACAccountType* _acAccountType;
	CKDBackingAccount* _backingAccount;
	CKDClientContext* _context;
	NSObject*<OS_dispatch_queue> _authTokenCallbackQueue;
	NSString* _lastFailedCloudKitAuthToken;
	NSString* _lastFailediCloudAuthToken;

}

@property (nonatomic,retain) ACAccountType * acAccountType;                                    //@synthesize acAccountType=_acAccountType - In the implementation block
@property (nonatomic,readonly) NSString * accountID; 
@property (nonatomic,readonly) CKDBackingAccount * backingAccount;                             //@synthesize backingAccount=_backingAccount - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;                                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isAnonymousAccount;                                          //@synthesize isAnonymousAccount=_isAnonymousAccount - In the implementation block
@property (assign,nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment;               //@synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> authTokenQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> authTokenCallbackQueue;              //@synthesize authTokenCallbackQueue=_authTokenCallbackQueue - In the implementation block
@property (nonatomic,copy) NSString * lastFailedCloudKitAuthToken;                             //@synthesize lastFailedCloudKitAuthToken=_lastFailedCloudKitAuthToken - In the implementation block
@property (nonatomic,copy) NSString * lastFailediCloudAuthToken;                               //@synthesize lastFailediCloudAuthToken=_lastFailediCloudAuthToken - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier; 
@property (nonatomic,readonly) NSPersonNameComponents * fullName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSString * formattedUsername; 
@property (nonatomic,readonly) CKAccountOverrideInfo * fakeAccountInfo;                        //@synthesize fakeAccountInfo=_fakeAccountInfo - In the implementation block
@property (nonatomic,readonly) BOOL isFakeAccount; 
@property (assign,nonatomic) BOOL isUnitTestingAccount;                                        //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (assign,nonatomic) BOOL accountWantsPushRegistration;                                //@synthesize accountWantsPushRegistration=_accountWantsPushRegistration - In the implementation block
@property (assign,nonatomic) BOOL accountWantsFlowControl;                                     //@synthesize accountWantsFlowControl=_accountWantsFlowControl - In the implementation block
@property (nonatomic,readonly) BOOL iCloudDriveAllowsCellularAccess; 
@property (nonatomic,readonly) BOOL canAuthWithCloudKit; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canAccessAccount; 
@property (nonatomic,readonly) BOOL isCarryAccount; 
@property (nonatomic,readonly) BOOL isiCloudDevEnvironmentAccount; 
+(id)globalAuthTokenQueue;
-(NSPersonNameComponents *)fullName;
-(id)deviceName;
-(NSString *)accountID;
-(BOOL)isAnonymousAccount;
-(id)containerID;
-(BOOL)isCarryAccount;
-(void)iCloudAuthTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cloudKitAuthTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)isUnitTestingAccount;
-(BOOL)canAuthWithCloudKit;
-(id)serverPreferredPushEnvironment;
-(void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)primaryEmail;
-(NSString *)formattedUsername;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(CKAccountOverrideInfo *)fakeAccountInfo;
-(id)initAnonymousAccountWithContext:(id)arg1 ;
-(id)initFakeAccountWithAccountOverrideInfo:(id)arg1 context:(id)arg2 ;
-(id)initPrimaryAccountWithContext:(id)arg1 ;
-(void)setIsUnitTestingAccount:(BOOL)arg1 ;
-(BOOL)accountWantsPushRegistration;
-(void)setAccountWantsPushRegistration:(BOOL)arg1 ;
-(BOOL)iCloudDriveAllowsCellularAccess;
-(BOOL)isFakeAccount;
-(BOOL)canAccessAccount;
-(id)containerScopedUserID;
-(id)mescalSession;
-(BOOL)accountWantsFlowControl;
-(id)hardwareID;
-(void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 failedToken:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 failedToken:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)resetMescalSession;
-(void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2 ;
-(void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchDeviceIDForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldFailAllTasks;
-(void)noteTimeSpentInNetworking:(double)arg1 ;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 ;
-(CKDBackingAccount *)backingAccount;
-(id)displayedHostname;
-(void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_userCloudDBURLisInCarryPartition;
-(void)_fetchContainerInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)haveWarnedAboutServerPreferredPushEnvironment;
-(void)setHaveWarnedAboutServerPreferredPushEnvironment:(BOOL)arg1 ;
-(id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)authTokenQueue;
-(NSObject*<OS_dispatch_queue>)authTokenCallbackQueue;
-(void)setLastFailedCloudKitAuthToken:(NSString *)arg1 ;
-(id)_lockedCloudKitAuthTokenWithError:(id*)arg1 ;
-(void)_lockedRenewTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 tokenFetchBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)lastFailedCloudKitAuthToken;
-(void)setLastFailediCloudAuthToken:(NSString *)arg1 ;
-(id)_lockediCloudAuthTokenWithError:(id*)arg1 ;
-(NSString *)lastFailediCloudAuthToken;
-(void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)sharingURLHostname;
-(id)trafficContainerIdentifier;
-(BOOL)isiCloudDevEnvironmentAccount;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(id)initWithAccountID:(id)arg1 context:(id)arg2 ;
-(void)setAccountWantsFlowControl:(BOOL)arg1 ;
-(ACAccountType *)acAccountType;
-(void)setAcAccountType:(ACAccountType *)arg1 ;
-(void)setIsAnonymousAccount:(BOOL)arg1 ;
-(void)setAuthTokenCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)dsid;
-(ACAccountStore *)accountStore;
-(NSString *)accountIdentifier;
-(NSString *)description;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientContext *)context;
-(id)_initWithContext:(id)arg1 ;
-(id)bundleID;
-(id)languageCode;
-(id)regionCode;
-(NSString *)username;
-(id)config;
@end

