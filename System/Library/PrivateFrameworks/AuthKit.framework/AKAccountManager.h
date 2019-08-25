/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AuthKit/AuthKit-Structs.h>
@class ACAccountStore, NSObject, ACAccountType;

@interface AKAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_queue> _accountQueue;
	ACAccountType* _authKitAccountType;
	os_unfair_lock_s _authKitAccountTypeLock;
	ACAccountType* _appleIDAccountType;
	os_unfair_lock_s _appleIDAccountTypeLock;
	ACAccountType* _iCloudAccountType;
	os_unfair_lock_s _iCloudAccountTypeLock;

}

@property (nonatomic,readonly) ACAccountType * appleIDAccountType; 
@property (nonatomic,retain) ACAccountStore * store;                            //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccountType * authKitAccountType; 
+(BOOL)isAccountsFrameworkAvailable;
+(id)stringRepresentationForService:(long long)arg1 ;
+(id)sharedInstance;
-(BOOL)_setUsername:(id)arg1 forAccount:(id)arg2 ;
-(void)setAliases:(id)arg1 forAccount:(id)arg2 ;
-(id)appleIDAccountWithAltDSID:(id)arg1 ;
-(id)iCloudAccountForAltDSID:(id)arg1 ;
-(id)hearbeatTokenForAccount:(id)arg1 error:(id*)arg2 ;
-(id)continuationTokenForAccount:(id)arg1 error:(id*)arg2 ;
-(id)passwordResetTokenForAccount:(id)arg1 error:(id*)arg2 ;
-(id)passwordResetTokenBackupForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_tokenWithName:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(void)_removeTokenKey:(id)arg1 forAccount:(id)arg2 ;
-(ACAccountType *)authKitAccountType;
-(ACAccountType *)appleIDAccountType;
-(void)_removeTokenForKeys:(id)arg1 forAccount:(id)arg2 ;
-(id)servicesUsingAccount:(id)arg1 ;
-(id)iCloudAccountForAppleID:(id)arg1 ;
-(BOOL)isPrimaryiCloudAccount:(id)arg1 ;
-(id)_iCloudAccountType;
-(id)_aliasesForiCloudAccount:(id)arg1 ;
-(id)_altDSIDForiCloudAccount:(id)arg1 ;
-(void)setAltDSID:(id)arg1 forAccount:(id)arg2 ;
-(void)setDSID:(id)arg1 forAccount:(id)arg2 ;
-(void)updateUsername:(id)arg1 forAccountsWithAltDSID:(id)arg2 ;
-(void)setSecurityLevel:(unsigned long long)arg1 forAccount:(id)arg2 ;
-(unsigned long long)authenticationModeForAccount:(id)arg1 ;
-(void)setAuthenticationMode:(unsigned long long)arg1 forAccount:(id)arg2 ;
-(BOOL)needsRepairForAccount:(id)arg1 ;
-(unsigned long long)repairStateForAccount:(id)arg1 ;
-(void)setRepairState:(unsigned long long)arg1 forAccount:(id)arg2 ;
-(id)hearbeatTokenForAccount:(id)arg1 ;
-(id)continuationTokenForAccount:(id)arg1 ;
-(id)passwordResetTokenForAccount:(id)arg1 ;
-(id)passwordResetTokenBackupForAccount:(id)arg1 ;
-(id)masterTokenForAccount:(id)arg1 ;
-(void)removeMasterTokenForAccount:(id)arg1 ;
-(id)authKitAccountWithDSID:(id)arg1 ;
-(id)authKitAccountWithAppleID:(id)arg1 ;
-(id)appleIDAccountWithAppleID:(id)arg1 ;
-(id)mostRecentlyUsedAuthKitAccount;
-(void)removeAllPasswordResetTokens;
-(void)removeContinuationTokenForAccount:(id)arg1 ;
-(void)setAccount:(id)arg1 inUse:(BOOL)arg2 byService:(long long)arg3 ;
-(id)activeServiceNamesForAccount:(id)arg1 ;
-(void)removeUnusedAndDuplicateAuthKitAccountsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasPrimaryiCloudAccountForAppleID:(id)arg1 ;
-(BOOL)hasPrimaryiCloudAccountForAltDSID:(id)arg1 ;
-(id)altDSIDForAccount:(id)arg1 ;
-(id)DSIDForAccount:(id)arg1 ;
-(id)allAuthKitAccounts;
-(id)aliasesForAccount:(id)arg1 ;
-(ACAccountStore *)store;
-(id)transportableAuthKitAccount:(id)arg1 ;
-(id)authKitAccountWithAltDSID:(id)arg1 ;
-(unsigned long long)securityLevelForAccount:(id)arg1 ;
-(void)setStore:(ACAccountStore *)arg1 ;
-(BOOL)saveAccount:(id)arg1 error:(id*)arg2 ;
-(id)init;
@end

