/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMOwnerAccountIdentity.h>

@class NSString, ACAccount;

@interface FMOwnerAccount : NSObject <FMOwnerAccountIdentity> {

	BOOL _legacyBehavior;
	NSString* _authToken;
	NSString* _hostName;
	ACAccount* _account;
	NSString* _username;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _personId;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * hostName;                        //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,copy) NSString * personId;                        //@synthesize personId=_personId - In the implementation block
@property (assign,nonatomic) BOOL legacyBehavior;                      //@synthesize legacyBehavior=_legacyBehavior - In the implementation block
@property (nonatomic,copy,readonly) NSString * authToken;              //@synthesize authToken=_authToken - In the implementation block
+(id)primaryAccountWithStore:(id)arg1 error:(id*)arg2 ;
+(id)personIdForAccount:(id)arg1 error:(id*)arg2 ;
+(id)subAccountForAccount:(id)arg1 type:(long long)arg2 ;
+(id)authTokenForSubAccount:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
+(id)hostNameForAccount:(id)arg1 type:(long long)arg2 ;
+(id)ownerAccount;
+(id)ownerAccountWithType:(long long)arg1 ;
+(void)renewCredentialsWithBundleId:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)sharedInstance;
-(NSString *)hostName;
-(NSString *)authToken;
-(void)setPersonId:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)personId;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLegacyBehavior:(BOOL)arg1 ;
-(void)initializeAccount;
-(BOOL)legacyBehavior;
-(id)initWithAuthToken:(id)arg1 personId:(id)arg2 ;
-(id)tokenOfType:(long long)arg1 ;
-(id)hostNameOfType:(long long)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)username;
-(void)accountChanged;
@end

