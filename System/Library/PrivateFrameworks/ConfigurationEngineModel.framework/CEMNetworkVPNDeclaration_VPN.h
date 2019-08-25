/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, NSArray;

@interface CEMNetworkVPNDeclaration_VPN : CEMPayloadBase {

	NSString* _payloadAuthName;
	NSString* _payloadAuthPassword;
	NSString* _payloadAuthenticationMethod;
	NSString* _payloadPayloadCertificateUUID;
	NSNumber* _payloadOnDemandEnabled;
	NSArray* _payloadOnDemandMatchDomainsAlways;
	NSArray* _payloadOnDemandMatchDomainsNever;
	NSArray* _payloadOnDemandMatchDomainsOnRetry;
	NSArray* _payloadOnDemandRules;
	NSNumber* _payloadDisconnectOnIdle;
	NSNumber* _payloadDisconnectOnIdleTimer;
	NSString* _payloadRemoteAddress;
	NSString* _payloadPassword;
	NSString* _payloadProviderBundleIdentifier;

}

@property (nonatomic,copy) NSString * payloadAuthName;                                //@synthesize payloadAuthName=_payloadAuthName - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthPassword;                            //@synthesize payloadAuthPassword=_payloadAuthPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationMethod;                    //@synthesize payloadAuthenticationMethod=_payloadAuthenticationMethod - In the implementation block
@property (nonatomic,copy) NSString * payloadPayloadCertificateUUID;                  //@synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID - In the implementation block
@property (nonatomic,copy) NSNumber * payloadOnDemandEnabled;                         //@synthesize payloadOnDemandEnabled=_payloadOnDemandEnabled - In the implementation block
@property (nonatomic,copy) NSArray * payloadOnDemandMatchDomainsAlways;               //@synthesize payloadOnDemandMatchDomainsAlways=_payloadOnDemandMatchDomainsAlways - In the implementation block
@property (nonatomic,copy) NSArray * payloadOnDemandMatchDomainsNever;                //@synthesize payloadOnDemandMatchDomainsNever=_payloadOnDemandMatchDomainsNever - In the implementation block
@property (nonatomic,copy) NSArray * payloadOnDemandMatchDomainsOnRetry;              //@synthesize payloadOnDemandMatchDomainsOnRetry=_payloadOnDemandMatchDomainsOnRetry - In the implementation block
@property (nonatomic,copy) NSArray * payloadOnDemandRules;                            //@synthesize payloadOnDemandRules=_payloadOnDemandRules - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisconnectOnIdle;                        //@synthesize payloadDisconnectOnIdle=_payloadDisconnectOnIdle - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisconnectOnIdleTimer;                   //@synthesize payloadDisconnectOnIdleTimer=_payloadDisconnectOnIdleTimer - In the implementation block
@property (nonatomic,copy) NSString * payloadRemoteAddress;                           //@synthesize payloadRemoteAddress=_payloadRemoteAddress - In the implementation block
@property (nonatomic,copy) NSString * payloadPassword;                                //@synthesize payloadPassword=_payloadPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadProviderBundleIdentifier;                //@synthesize payloadProviderBundleIdentifier=_payloadProviderBundleIdentifier - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAuthName:(id)arg1 withAuthPassword:(id)arg2 withAuthenticationMethod:(id)arg3 withPayloadCertificateUUID:(id)arg4 withOnDemandEnabled:(id)arg5 withOnDemandMatchDomainsAlways:(id)arg6 withOnDemandMatchDomainsNever:(id)arg7 withOnDemandMatchDomainsOnRetry:(id)arg8 withOnDemandRules:(id)arg9 withDisconnectOnIdle:(id)arg10 withDisconnectOnIdleTimer:(id)arg11 withRemoteAddress:(id)arg12 withPassword:(id)arg13 withProviderBundleIdentifier:(id)arg14 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPassword:(NSString *)arg1 ;
-(NSString *)payloadPassword;
-(void)setPayloadProviderBundleIdentifier:(NSString *)arg1 ;
-(NSString *)payloadProviderBundleIdentifier;
-(void)setPayloadDisconnectOnIdle:(NSNumber *)arg1 ;
-(void)setPayloadDisconnectOnIdleTimer:(NSNumber *)arg1 ;
-(NSNumber *)payloadDisconnectOnIdle;
-(NSNumber *)payloadDisconnectOnIdleTimer;
-(void)setPayloadAuthName:(NSString *)arg1 ;
-(void)setPayloadAuthPassword:(NSString *)arg1 ;
-(void)setPayloadAuthenticationMethod:(NSString *)arg1 ;
-(void)setPayloadPayloadCertificateUUID:(NSString *)arg1 ;
-(void)setPayloadOnDemandEnabled:(NSNumber *)arg1 ;
-(void)setPayloadOnDemandMatchDomainsAlways:(NSArray *)arg1 ;
-(void)setPayloadOnDemandMatchDomainsNever:(NSArray *)arg1 ;
-(void)setPayloadOnDemandMatchDomainsOnRetry:(NSArray *)arg1 ;
-(void)setPayloadOnDemandRules:(NSArray *)arg1 ;
-(void)setPayloadRemoteAddress:(NSString *)arg1 ;
-(NSString *)payloadAuthName;
-(NSString *)payloadAuthPassword;
-(NSString *)payloadAuthenticationMethod;
-(NSString *)payloadPayloadCertificateUUID;
-(NSNumber *)payloadOnDemandEnabled;
-(NSArray *)payloadOnDemandMatchDomainsAlways;
-(NSArray *)payloadOnDemandMatchDomainsNever;
-(NSArray *)payloadOnDemandMatchDomainsOnRetry;
-(NSArray *)payloadOnDemandRules;
-(NSString *)payloadRemoteAddress;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

