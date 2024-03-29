/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSNumber, NSArray, SSURLBagContext;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {

	NSString* _accountName;
	BOOL _accountNameEditable;
	long long _accountScope;
	BOOL _allowsBioAuthentication;
	BOOL _allowsBootstrapCellularData;
	BOOL _allowsRetry;
	BOOL _allowsSilentAuthentication;
	NSString* _altDSID;
	NSString* _cancelButtonLabel;
	BOOL _canCreateNewAccount;
	BOOL _canSetActiveAccount;
	NSString* _clientIdentifierHeader;
	BOOL _displaysOnLockScreen;
	BOOL _forceDaemonAuthentication;
	NSDictionary* _httpHeaders;
	NSString* _logUUID;
	NSString* _password;
	NSString* _passwordEquivalentToken;
	NSString* _okButtonLabel;
	BOOL _persistsAcrossDeviceLock;
	BOOL _persistsPasswordFallback;
	NSString* _preferredITunesStoreClient;
	NSString* _promptTitle;
	long long _promptStyle;
	NSString* _reasonDescription;
	NSDictionary* _requestParameters;
	NSNumber* _requiredUniqueIdentifier;
	BOOL _shouldCreateNewSession;
	BOOL _shouldFollowAccountButtons;
	BOOL _shouldIgnoreProtocol;
	BOOL _shouldPersonalizeResponseActions;
	BOOL _shouldSuppressDialogs;
	NSDictionary* _signupRequestParameters;
	long long _tokenType;
	NSString* _touchIDContinueToken;
	NSArray* _userAgentComponents;
	BOOL _demoAccount;

}

@property (nonatomic,readonly) BOOL allowsBioAuthentication;                                       //@synthesize allowsBioAuthentication=_allowsBioAuthentication - In the implementation block
@property (nonatomic,readonly) BOOL allowsBootstrapCellularData;                                   //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (nonatomic,copy,readonly) NSString * cancelButtonLabel;                                  //@synthesize cancelButtonLabel=_cancelButtonLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifierHeader;                             //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (nonatomic,readonly) BOOL displaysOnLockScreen;                                          //@synthesize displaysOnLockScreen=_displaysOnLockScreen - In the implementation block
@property (getter=isDemoAccount,nonatomic,readonly) BOOL demoAccount;                              //@synthesize demoAccount=_demoAccount - In the implementation block
@property (readonly) NSString * logUUID;                                                           //@synthesize logUUID=_logUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * okButtonLabel;                                      //@synthesize okButtonLabel=_okButtonLabel - In the implementation block
@property (nonatomic,readonly) BOOL persistsAcrossDeviceLock;                                      //@synthesize persistsAcrossDeviceLock=_persistsAcrossDeviceLock - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptTitle;                                        //@synthesize promptTitle=_promptTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * reasonDescription;                                  //@synthesize reasonDescription=_reasonDescription - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreProtocol;                                          //@synthesize shouldIgnoreProtocol=_shouldIgnoreProtocol - In the implementation block
@property (nonatomic,readonly) long long tokenType;                                                //@synthesize tokenType=_tokenType - In the implementation block
@property (nonatomic,readonly) SSURLBagContext * URLBagContext; 
@property (nonatomic,readonly) BOOL forceDaemonAuthentication;                                     //@synthesize forceDaemonAuthentication=_forceDaemonAuthentication - In the implementation block
@property (nonatomic,readonly) BOOL shouldPersonalizeResponseActions;                              //@synthesize shouldPersonalizeResponseActions=_shouldPersonalizeResponseActions - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountName;                                        //@synthesize accountName=_accountName - In the implementation block
@property (readonly) long long accountScope;                                                       //@synthesize accountScope=_accountScope - In the implementation block
@property (getter=isAccountNameEditable,nonatomic,readonly) BOOL accountNameEditable;              //@synthesize accountNameEditable=_accountNameEditable - In the implementation block
@property (nonatomic,readonly) BOOL allowsRetry;                                                   //@synthesize allowsRetry=_allowsRetry - In the implementation block
@property (nonatomic,readonly) BOOL allowsSilentAuthentication;                                    //@synthesize allowsSilentAuthentication=_allowsSilentAuthentication - In the implementation block
@property (nonatomic,copy,readonly) NSString * altDSID;                                            //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) BOOL canCreateNewAccount;                                           //@synthesize canCreateNewAccount=_canCreateNewAccount - In the implementation block
@property (nonatomic,readonly) BOOL canSetActiveAccount;                                           //@synthesize canSetActiveAccount=_canSetActiveAccount - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * HTTPHeaders;                                    //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;                                           //@synthesize password=_password - In the implementation block
@property (nonatomic,copy,readonly) NSString * passwordEquivalentToken;                            //@synthesize passwordEquivalentToken=_passwordEquivalentToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialPassword; 
@property (nonatomic,readonly) BOOL persistsPasswordFallback;                                      //@synthesize persistsPasswordFallback=_persistsPasswordFallback - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredITunesStoreClient;                         //@synthesize preferredITunesStoreClient=_preferredITunesStoreClient - In the implementation block
@property (nonatomic,readonly) long long promptStyle;                                              //@synthesize promptStyle=_promptStyle - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requestParameters;                              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * requiredUniqueIdentifier;                         //@synthesize requiredUniqueIdentifier=_requiredUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldCreateNewSession;                                        //@synthesize shouldCreateNewSession=_shouldCreateNewSession - In the implementation block
@property (nonatomic,readonly) BOOL shouldFollowAccountButtons;                                    //@synthesize shouldFollowAccountButtons=_shouldFollowAccountButtons - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressDialogs;                                         //@synthesize shouldSuppressDialogs=_shouldSuppressDialogs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * signupRequestParameters;                        //@synthesize signupRequestParameters=_signupRequestParameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * touchIDContinueToken;                               //@synthesize touchIDContinueToken=_touchIDContinueToken - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userAgentComponents;                                 //@synthesize userAgentComponents=_userAgentComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextForSignIn;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDictionary *)HTTPHeaders;
-(BOOL)displaysOnLockScreen;
-(BOOL)isDemoAccount;
-(long long)accountScope;
-(NSString *)passwordEquivalentToken;
-(NSString *)logUUID;
-(BOOL)forceDaemonAuthentication;
-(id)accountStoreOptions;
-(long long)tokenType;
-(NSNumber *)requiredUniqueIdentifier;
-(long long)promptStyle;
-(BOOL)_allowCreateAccount;
-(id)_initSSAuthenticationContext;
-(BOOL)allowsSilentAuthentication;
-(BOOL)canCreateNewAccount;
-(BOOL)canSetActiveAccount;
-(BOOL)shouldSuppressDialogs;
-(NSString *)reasonDescription;
-(NSString *)promptTitle;
-(NSString *)okButtonLabel;
-(NSDictionary *)signupRequestParameters;
-(NSString *)preferredITunesStoreClient;
-(NSArray *)userAgentComponents;
-(BOOL)allowsBootstrapCellularData;
-(void)_copyIvarsToCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(BOOL)allowsRetry;
-(NSString *)cancelButtonLabel;
-(NSString *)clientIdentifierHeader;
-(BOOL)isAccountNameEditable;
-(BOOL)persistsAcrossDeviceLock;
-(BOOL)persistsPasswordFallback;
-(NSDictionary *)requestParameters;
-(BOOL)shouldCreateNewSession;
-(BOOL)shouldFollowAccountButtons;
-(BOOL)shouldIgnoreProtocol;
-(NSString *)touchIDContinueToken;
-(SSURLBagContext *)URLBagContext;
-(NSString *)initialPassword;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(BOOL)allowsBioAuthentication;
-(BOOL)shouldPersonalizeResponseActions;
-(id)initWithAccount:(id)arg1 ;
-(NSString *)altDSID;
-(NSString *)accountName;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)password;
@end

