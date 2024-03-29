/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMToken.h>
#import <libobjc.A.dylib/ACCSSOTokenProtocol.h>

@class ACFPrincipal, NSDate, NSString, NSNumber, ACFMessage, NSDictionary;

@interface ACMSSOToken : ACMToken <ACCSSOTokenProtocol> {

	BOOL _longLiveSession;
	ACFMessage* _initialRequest;
	NSString* _sessionToken;
	NSDate* _recentAuthenticationDate;
	NSNumber* _personID;
	NSDate* _recentUnlockDate;
	NSString* _clientSecret;
	NSNumber* _clientSecretCreationTimestamp;

}

@property (readonly) NSDictionary * tokenDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ACFPrincipal * principal; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSString * nonce; 
@property (nonatomic,retain) NSString * sessionToken;                               //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSDate * recentAuthenticationDate;                     //@synthesize recentAuthenticationDate=_recentAuthenticationDate - In the implementation block
@property (nonatomic,retain) NSNumber * personID;                                   //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSNumber * isTwoStepVerificationRequired; 
@property (nonatomic,retain) ACFMessage * initialRequest;                           //@synthesize initialRequest=_initialRequest - In the implementation block
@property (nonatomic,retain) NSString * userPreferences; 
@property (nonatomic,retain) NSDate * recentUnlockDate;                             //@synthesize recentUnlockDate=_recentUnlockDate - In the implementation block
@property (nonatomic,retain) NSString * clientSecret;                               //@synthesize clientSecret=_clientSecret - In the implementation block
@property (nonatomic,retain) NSNumber * clientSecretCreationTimestamp;              //@synthesize clientSecretCreationTimestamp=_clientSecretCreationTimestamp - In the implementation block
@property (nonatomic,retain) NSNumber * isUserEnrolledFor2SV; 
@property (assign,nonatomic) BOOL longLiveSession;                                  //@synthesize longLiveSession=_longLiveSession - In the implementation block
+(id)tokenWithKeychainTokenInfo:(id)arg1 ;
+(id)tokenWithToken:(id)arg1 data:(id)arg2 ;
-(void)setPersonID:(NSNumber *)arg1 ;
-(NSNumber *)personID;
-(ACFMessage *)initialRequest;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(NSDate *)recentAuthenticationDate;
-(void)setRecentAuthenticationDate:(NSDate *)arg1 ;
-(NSDate *)recentUnlockDate;
-(void)setRecentUnlockDate:(NSDate *)arg1 ;
-(void)setInitialRequest:(ACFMessage *)arg1 ;
-(void)setClientSecretCreationTimestamp:(NSNumber *)arg1 ;
-(BOOL)longLiveSession;
-(void)setLongLiveSession:(BOOL)arg1 ;
-(NSDictionary *)tokenDictionary;
-(NSString *)clientSecret;
-(void)setClientSecret:(NSString *)arg1 ;
-(NSNumber *)clientSecretCreationTimestamp;
-(void)dealloc;
@end

