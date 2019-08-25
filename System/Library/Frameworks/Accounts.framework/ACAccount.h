/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class ACAccountStore, NSString, ACAccountType, ACAccountCredential, NSMutableDictionary, NSURL, NSDate, NSArray, ACMutableTrackedSet, NSMutableSet, ACTrackedSet, NSDictionary, NSSet;

@interface ACAccount : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {

	ACAccountStore* _store;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _authenticationType;
	NSString* _credentialType;
	NSString* _clientToken;
	BOOL _haveCheckedForClientToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	BOOL _accountAccessAvailable;
	BOOL _authenticated;
	BOOL _active;
	BOOL _supportsAuthentication;
	BOOL _visible;
	NSURL* _objectID;
	NSDate* _date;
	NSDate* _lastCredentialRenewalRejectionDate;
	NSString* _parentAccountIdentifier;
	ACAccount* _parentAccount;
	BOOL _haveCheckedForParentAccount;
	BOOL _haveCheckedForChildAccounts;
	NSArray* _childAccounts;
	ACMutableTrackedSet* _trackedProvisionedDataclasses;
	BOOL _wasProvisionedDataclassesReset;
	ACMutableTrackedSet* _trackedEnabledDataclasses;
	BOOL _wasEnabledDataclassesReset;
	NSMutableSet* _dirtyProperties;
	NSMutableSet* _dirtyAccountProperties;
	NSMutableSet* _dirtyDataclassProperties;
	id<NSObject> _credentialsDidChangeObserver;
	/*^block*/id _accountPropertiesTransformer;
	BOOL _creatingFromManagedObject;

}

@property (nonatomic,copy) ACTrackedSet * trackedProvisionedDataclasses;               //@synthesize trackedProvisionedDataclasses=_trackedProvisionedDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasProvisionedDataclassesReset;                    //@synthesize wasProvisionedDataclassesReset=_wasProvisionedDataclassesReset - In the implementation block
@property (nonatomic,copy) ACTrackedSet * trackedEnabledDataclasses;                   //@synthesize trackedEnabledDataclasses=_trackedEnabledDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasEnabledDataclassesReset;                        //@synthesize wasEnabledDataclassesReset=_wasEnabledDataclassesReset - In the implementation block
@property (nonatomic,readonly) NSURL * objectID; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,retain) ACAccount * parentAccount; 
@property (nonatomic,readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) NSArray * childAccounts; 
@property (nonatomic,retain) NSMutableSet * enabledDataclasses; 
@property (nonatomic,retain) NSMutableSet * provisionedDataclasses; 
@property (nonatomic,__weak,readonly) NSDictionary * dataclassProperties; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (nonatomic,__weak,readonly) NSDictionary * accountProperties; 
@property (nonatomic,__weak,readonly) ACAccount * displayAccount; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties;                                //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dirtyAccountProperties;                         //@synthesize dirtyAccountProperties=_dirtyAccountProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dirtyDataclassProperties;                       //@synthesize dirtyDataclassProperties=_dirtyDataclassProperties - In the implementation block
@property (nonatomic,readonly) NSString * authenticationType; 
@property (nonatomic,readonly) NSString * credentialType; 
@property (nonatomic,readonly) BOOL supportsPush; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,readonly) NSString * shortDebugName; 
@property (nonatomic,readonly) NSString * clientToken; 
@property (copy) id accountPropertiesTransformer;                                      //@synthesize accountPropertiesTransformer=_accountPropertiesTransformer - In the implementation block
@property (nonatomic,__weak,readonly) NSString * identifier; 
@property (nonatomic,retain) ACAccountType * accountType; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * userFullName; 
@property (nonatomic,retain) ACAccountCredential * credential; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createNewAccountUID;
+(BOOL)supportsSecureCoding;
-(void)_clearCachedChildAccounts;
-(void)_clearCachedCredentials;
-(id)portableCopy;
-(void)setProvisioned:(BOOL)arg1 forDataclass:(id)arg2 ;
-(void)_installCredentialsChangedObserver;
-(void)_unsafe_markPropertyDirty:(id)arg1 ;
-(void)_unsafe_markAccountPropertyDirty:(id)arg1 ;
-(void)_unsafe_markDataclassPropertyDirty:(id)arg1 ;
-(void)credentialsChanged:(id)arg1 ;
-(id)accountPropertiesTransformer;
-(void)_markAccountPropertyDirty:(id)arg1 ;
-(id)_initWithProtobuf:(id)arg1 ;
-(id)_encodeProtobuf;
-(BOOL)_useParentForCredentials;
-(void)_markDataclassPropertyDirty:(id)arg1 ;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(void)setDirty:(BOOL)arg1 forProperty:(id)arg2 ;
-(void)_markCredentialDirty;
-(id)defaultAutodiscoverDomainForChildType:(id)arg1 ;
-(void)setCreatingFromManagedObject:(BOOL)arg1 ;
-(NSString *)shortDebugName;
-(void)setSecIdentity:(SecIdentityRef)arg1 ;
-(void)setSecCertificates:(id)arg1 ;
-(void)setTrackedProvisionedDataclasses:(ACTrackedSet *)arg1 ;
-(void)setTrackedEnabledDataclasses:(ACTrackedSet *)arg1 ;
-(void)setAccountPropertiesTransformer:(id)arg1 ;
-(NSString *)authenticationType;
-(ACAccountCredential *)credential;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(id)fullDescription;
-(NSSet *)dirtyAccountProperties;
-(NSSet *)dirtyDataclassProperties;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(NSString *)clientToken;
-(id)initWithManagedAccount:(id)arg1 ;
-(id)owningBundleID;
-(void)setOwningBundleID:(id)arg1 ;
-(id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2 ;
-(void)_loadAllCachedProperties;
-(id)_initWithManagedAccount:(id)arg1 accountStore:(id)arg2 withDirtyStateFromAccount:(id)arg3 ;
-(id)diffAccount:(id)arg1 ;
-(void)takeValuesFromModifiedAccount:(id)arg1 ;
-(void)setDataclassProperties:(NSDictionary *)arg1 ;
-(BOOL)wasProvisionedDataclassesReset;
-(ACTrackedSet *)trackedProvisionedDataclasses;
-(BOOL)wasEnabledDataclassesReset;
-(ACTrackedSet *)trackedEnabledDataclasses;
-(void)setLastCredentialRenewalRejectionDate:(NSDate *)arg1 ;
-(void)_clearDirtyProperties;
-(void)_markPropertyDirty:(id)arg1 ;
-(void)_loadCachedPropertiesWithoutCredentials;
-(id)accountByCleaningThirdPartyTransformations;
-(NSDate *)lastCredentialRenewalRejectionDate;
-(void)setAccountProperties:(NSDictionary *)arg1 ;
-(BOOL)supportsAuthentication;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(SecIdentityRef)copySecIdentity;
-(id)secCertificates;
-(void)setProperties:(id)arg1 forDataclass:(id)arg2 ;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(NSSet *)dirtyProperties;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)propertiesForDataclass:(id)arg1 ;
-(NSMutableSet *)provisionedDataclasses;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(BOOL)isDirty;
-(ACAccount *)displayAccount;
-(BOOL)isEnabledToSyncDataclass:(id)arg1 ;
-(BOOL)addClientToken:(id)arg1 ;
-(void)setProvisionedDataclasses:(NSMutableSet *)arg1 ;
-(NSString *)parentAccountIdentifier;
-(NSString *)accountDescription;
-(id)credentialWithError:(id*)arg1 ;
-(NSMutableSet *)enabledDataclasses;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
-(NSURL *)objectID;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(id)qualifiedUsername;
-(void)setEnabledDataclasses:(NSMutableSet *)arg1 ;
-(void)_setAccountStore:(id)arg1 ;
-(BOOL)supportsPush;
-(BOOL)authenticated;
-(NSArray *)childAccounts;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(NSDictionary *)accountProperties;
-(NSDictionary *)dataclassProperties;
-(id)initWithAccountType:(id)arg1 ;
-(void)setParentAccount:(ACAccount *)arg1 ;
-(ACAccount *)parentAccount;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)isAuthenticated;
-(ACAccountStore *)accountStore;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(ACAccountType *)accountType;
-(void)setAccountType:(ACAccountType *)arg1 ;
-(void)_setObjectID:(id)arg1 ;
-(void)markAllPropertiesDirty;
-(void)setAuthenticated:(BOOL)arg1 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)refresh;
-(id)init;
-(void)dealloc;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)identifier;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(BOOL)isVisible;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(NSString *)username;
-(void)reload;
-(NSString *)userFullName;
-(void)setAuthenticationType:(NSString *)arg1 ;
@end

