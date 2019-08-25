/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString, NSArray;

@interface CEMPasscodeLoginWindowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadSHOWFULLNAME;
	NSNumber* _payloadHideLocalUsers;
	NSNumber* _payloadIncludeNetworkUser;
	NSNumber* _payloadHideAdminUsers;
	NSNumber* _payloadSHOWOTHERUSERSMANAGED;
	NSString* _payloadAdminHostInfo;
	NSArray* _payloadAllowList;
	NSArray* _payloadDenyList;
	NSNumber* _payloadHideMobileAccounts;
	NSNumber* _payloadShutDownDisabled;
	NSNumber* _payloadRestartDisabled;
	NSNumber* _payloadSleepDisabled;
	NSNumber* _payloadDisableConsoleAccess;
	NSString* _payloadLoginwindowText;
	NSNumber* _payloadShutDownDisabledWhileLoggedIn;
	NSNumber* _payloadRestartDisabledWhileLoggedIn;
	NSNumber* _payloadPowerOffDisabledWhileLoggedIn;
	NSNumber* _payloadLogOutDisabledWhileLoggedIn;
	NSNumber* _payloadDisableScreenLockImmediate;

}

@property (nonatomic,copy) NSNumber * payloadSHOWFULLNAME;                               //@synthesize payloadSHOWFULLNAME=_payloadSHOWFULLNAME - In the implementation block
@property (nonatomic,copy) NSNumber * payloadHideLocalUsers;                             //@synthesize payloadHideLocalUsers=_payloadHideLocalUsers - In the implementation block
@property (nonatomic,copy) NSNumber * payloadIncludeNetworkUser;                         //@synthesize payloadIncludeNetworkUser=_payloadIncludeNetworkUser - In the implementation block
@property (nonatomic,copy) NSNumber * payloadHideAdminUsers;                             //@synthesize payloadHideAdminUsers=_payloadHideAdminUsers - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSHOWOTHERUSERSMANAGED;                      //@synthesize payloadSHOWOTHERUSERSMANAGED=_payloadSHOWOTHERUSERSMANAGED - In the implementation block
@property (nonatomic,copy) NSString * payloadAdminHostInfo;                              //@synthesize payloadAdminHostInfo=_payloadAdminHostInfo - In the implementation block
@property (nonatomic,copy) NSArray * payloadAllowList;                                   //@synthesize payloadAllowList=_payloadAllowList - In the implementation block
@property (nonatomic,copy) NSArray * payloadDenyList;                                    //@synthesize payloadDenyList=_payloadDenyList - In the implementation block
@property (nonatomic,copy) NSNumber * payloadHideMobileAccounts;                         //@synthesize payloadHideMobileAccounts=_payloadHideMobileAccounts - In the implementation block
@property (nonatomic,copy) NSNumber * payloadShutDownDisabled;                           //@synthesize payloadShutDownDisabled=_payloadShutDownDisabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRestartDisabled;                            //@synthesize payloadRestartDisabled=_payloadRestartDisabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSleepDisabled;                              //@synthesize payloadSleepDisabled=_payloadSleepDisabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisableConsoleAccess;                       //@synthesize payloadDisableConsoleAccess=_payloadDisableConsoleAccess - In the implementation block
@property (nonatomic,copy) NSString * payloadLoginwindowText;                            //@synthesize payloadLoginwindowText=_payloadLoginwindowText - In the implementation block
@property (nonatomic,copy) NSNumber * payloadShutDownDisabledWhileLoggedIn;              //@synthesize payloadShutDownDisabledWhileLoggedIn=_payloadShutDownDisabledWhileLoggedIn - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRestartDisabledWhileLoggedIn;               //@synthesize payloadRestartDisabledWhileLoggedIn=_payloadRestartDisabledWhileLoggedIn - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPowerOffDisabledWhileLoggedIn;              //@synthesize payloadPowerOffDisabledWhileLoggedIn=_payloadPowerOffDisabledWhileLoggedIn - In the implementation block
@property (nonatomic,copy) NSNumber * payloadLogOutDisabledWhileLoggedIn;                //@synthesize payloadLogOutDisabledWhileLoggedIn=_payloadLogOutDisabledWhileLoggedIn - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisableScreenLockImmediate;                 //@synthesize payloadDisableScreenLockImmediate=_payloadDisableScreenLockImmediate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withSHOWFULLNAME:(id)arg2 withHideLocalUsers:(id)arg3 withIncludeNetworkUser:(id)arg4 withHideAdminUsers:(id)arg5 withSHOWOTHERUSERSMANAGED:(id)arg6 withAdminHostInfo:(id)arg7 withAllowList:(id)arg8 withDenyList:(id)arg9 withHideMobileAccounts:(id)arg10 withShutDownDisabled:(id)arg11 withRestartDisabled:(id)arg12 withSleepDisabled:(id)arg13 withDisableConsoleAccess:(id)arg14 withLoginwindowText:(id)arg15 withShutDownDisabledWhileLoggedIn:(id)arg16 withRestartDisabledWhileLoggedIn:(id)arg17 withPowerOffDisabledWhileLoggedIn:(id)arg18 withLogOutDisabledWhileLoggedIn:(id)arg19 withDisableScreenLockImmediate:(id)arg20 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadSHOWFULLNAME:(NSNumber *)arg1 ;
-(void)setPayloadHideLocalUsers:(NSNumber *)arg1 ;
-(void)setPayloadIncludeNetworkUser:(NSNumber *)arg1 ;
-(void)setPayloadHideAdminUsers:(NSNumber *)arg1 ;
-(void)setPayloadSHOWOTHERUSERSMANAGED:(NSNumber *)arg1 ;
-(void)setPayloadAdminHostInfo:(NSString *)arg1 ;
-(void)setPayloadAllowList:(NSArray *)arg1 ;
-(void)setPayloadDenyList:(NSArray *)arg1 ;
-(void)setPayloadHideMobileAccounts:(NSNumber *)arg1 ;
-(void)setPayloadShutDownDisabled:(NSNumber *)arg1 ;
-(void)setPayloadRestartDisabled:(NSNumber *)arg1 ;
-(void)setPayloadSleepDisabled:(NSNumber *)arg1 ;
-(void)setPayloadDisableConsoleAccess:(NSNumber *)arg1 ;
-(void)setPayloadLoginwindowText:(NSString *)arg1 ;
-(void)setPayloadShutDownDisabledWhileLoggedIn:(NSNumber *)arg1 ;
-(void)setPayloadRestartDisabledWhileLoggedIn:(NSNumber *)arg1 ;
-(void)setPayloadPowerOffDisabledWhileLoggedIn:(NSNumber *)arg1 ;
-(void)setPayloadLogOutDisabledWhileLoggedIn:(NSNumber *)arg1 ;
-(void)setPayloadDisableScreenLockImmediate:(NSNumber *)arg1 ;
-(NSNumber *)payloadSHOWFULLNAME;
-(NSNumber *)payloadHideLocalUsers;
-(NSNumber *)payloadIncludeNetworkUser;
-(NSNumber *)payloadHideAdminUsers;
-(NSNumber *)payloadSHOWOTHERUSERSMANAGED;
-(NSString *)payloadAdminHostInfo;
-(NSArray *)payloadAllowList;
-(NSArray *)payloadDenyList;
-(NSNumber *)payloadHideMobileAccounts;
-(NSNumber *)payloadShutDownDisabled;
-(NSNumber *)payloadRestartDisabled;
-(NSNumber *)payloadSleepDisabled;
-(NSNumber *)payloadDisableConsoleAccess;
-(NSString *)payloadLoginwindowText;
-(NSNumber *)payloadShutDownDisabledWhileLoggedIn;
-(NSNumber *)payloadRestartDisabledWhileLoggedIn;
-(NSNumber *)payloadPowerOffDisabledWhileLoggedIn;
-(NSNumber *)payloadLogOutDisabledWhileLoggedIn;
-(NSNumber *)payloadDisableScreenLockImmediate;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

