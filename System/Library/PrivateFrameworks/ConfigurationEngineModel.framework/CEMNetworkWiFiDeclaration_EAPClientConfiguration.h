/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString, NSNumber;

@interface CEMNetworkWiFiDeclaration_EAPClientConfiguration : CEMPayloadBase {

	NSArray* _payloadAcceptEAPTypes;
	NSString* _payloadUserName;
	NSString* _payloadUserPassword;
	NSNumber* _payloadOneTimePassword;
	NSArray* _payloadPayloadCertificateAnchorUUID;
	NSArray* _payloadTLSTrustedCertificates;
	NSArray* _payloadTLSTrustedServerNames;
	NSNumber* _payloadTLSAllowTrustExceptions;
	NSNumber* _payloadTLSCertificateIsRequired;
	NSString* _payloadTTLSInnerAuthentication;
	NSString* _payloadTLSMinimumVersion;
	NSString* _payloadTLSMaximumVersion;
	NSString* _payloadOuterIdentity;
	NSNumber* _payloadEAPFASTUsePAC;
	NSNumber* _payloadEAPFASTProvisionPAC;
	NSNumber* _payloadEAPFASTProvisionPACAnonymously;
	NSNumber* _payloadEAPSIMNumberOfRANDs;
	NSString* _payloadSystemModeCredentialsSource;
	NSNumber* _payloadSystemModeUseOpenDirectoryCredentials;
	NSNumber* _payloadOneTimeUserPassword;
	NSNumber* _payloadEAPSIMAKAEncryptedIdentityEnabled;

}

@property (nonatomic,copy) NSArray * payloadAcceptEAPTypes;                                      //@synthesize payloadAcceptEAPTypes=_payloadAcceptEAPTypes - In the implementation block
@property (nonatomic,copy) NSString * payloadUserName;                                           //@synthesize payloadUserName=_payloadUserName - In the implementation block
@property (nonatomic,copy) NSString * payloadUserPassword;                                       //@synthesize payloadUserPassword=_payloadUserPassword - In the implementation block
@property (nonatomic,copy) NSNumber * payloadOneTimePassword;                                    //@synthesize payloadOneTimePassword=_payloadOneTimePassword - In the implementation block
@property (nonatomic,copy) NSArray * payloadPayloadCertificateAnchorUUID;                        //@synthesize payloadPayloadCertificateAnchorUUID=_payloadPayloadCertificateAnchorUUID - In the implementation block
@property (nonatomic,copy) NSArray * payloadTLSTrustedCertificates;                              //@synthesize payloadTLSTrustedCertificates=_payloadTLSTrustedCertificates - In the implementation block
@property (nonatomic,copy) NSArray * payloadTLSTrustedServerNames;                               //@synthesize payloadTLSTrustedServerNames=_payloadTLSTrustedServerNames - In the implementation block
@property (nonatomic,copy) NSNumber * payloadTLSAllowTrustExceptions;                            //@synthesize payloadTLSAllowTrustExceptions=_payloadTLSAllowTrustExceptions - In the implementation block
@property (nonatomic,copy) NSNumber * payloadTLSCertificateIsRequired;                           //@synthesize payloadTLSCertificateIsRequired=_payloadTLSCertificateIsRequired - In the implementation block
@property (nonatomic,copy) NSString * payloadTTLSInnerAuthentication;                            //@synthesize payloadTTLSInnerAuthentication=_payloadTTLSInnerAuthentication - In the implementation block
@property (nonatomic,copy) NSString * payloadTLSMinimumVersion;                                  //@synthesize payloadTLSMinimumVersion=_payloadTLSMinimumVersion - In the implementation block
@property (nonatomic,copy) NSString * payloadTLSMaximumVersion;                                  //@synthesize payloadTLSMaximumVersion=_payloadTLSMaximumVersion - In the implementation block
@property (nonatomic,copy) NSString * payloadOuterIdentity;                                      //@synthesize payloadOuterIdentity=_payloadOuterIdentity - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEAPFASTUsePAC;                                      //@synthesize payloadEAPFASTUsePAC=_payloadEAPFASTUsePAC - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEAPFASTProvisionPAC;                                //@synthesize payloadEAPFASTProvisionPAC=_payloadEAPFASTProvisionPAC - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEAPFASTProvisionPACAnonymously;                     //@synthesize payloadEAPFASTProvisionPACAnonymously=_payloadEAPFASTProvisionPACAnonymously - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEAPSIMNumberOfRANDs;                                //@synthesize payloadEAPSIMNumberOfRANDs=_payloadEAPSIMNumberOfRANDs - In the implementation block
@property (nonatomic,copy) NSString * payloadSystemModeCredentialsSource;                        //@synthesize payloadSystemModeCredentialsSource=_payloadSystemModeCredentialsSource - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSystemModeUseOpenDirectoryCredentials;              //@synthesize payloadSystemModeUseOpenDirectoryCredentials=_payloadSystemModeUseOpenDirectoryCredentials - In the implementation block
@property (nonatomic,copy) NSNumber * payloadOneTimeUserPassword;                                //@synthesize payloadOneTimeUserPassword=_payloadOneTimeUserPassword - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEAPSIMAKAEncryptedIdentityEnabled;                  //@synthesize payloadEAPSIMAKAEncryptedIdentityEnabled=_payloadEAPSIMAKAEncryptedIdentityEnabled - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithAcceptEAPTypes:(id)arg1 withUserName:(id)arg2 withUserPassword:(id)arg3 withOneTimePassword:(id)arg4 withPayloadCertificateAnchorUUID:(id)arg5 withTLSTrustedCertificates:(id)arg6 withTLSTrustedServerNames:(id)arg7 withTLSAllowTrustExceptions:(id)arg8 withTLSCertificateIsRequired:(id)arg9 withTTLSInnerAuthentication:(id)arg10 withTLSMinimumVersion:(id)arg11 withTLSMaximumVersion:(id)arg12 withOuterIdentity:(id)arg13 withEAPFASTUsePAC:(id)arg14 withEAPFASTProvisionPAC:(id)arg15 withEAPFASTProvisionPACAnonymously:(id)arg16 withEAPSIMNumberOfRANDs:(id)arg17 withSystemModeCredentialsSource:(id)arg18 withSystemModeUseOpenDirectoryCredentials:(id)arg19 withOneTimeUserPassword:(id)arg20 withEAPSIMAKAEncryptedIdentityEnabled:(id)arg21 ;
+(id)buildRequiredOnlyWithAcceptEAPTypes:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadUserName:(NSString *)arg1 ;
-(NSString *)payloadUserName;
-(void)setPayloadTLSMinimumVersion:(NSString *)arg1 ;
-(void)setPayloadTLSMaximumVersion:(NSString *)arg1 ;
-(NSString *)payloadTLSMinimumVersion;
-(NSString *)payloadTLSMaximumVersion;
-(void)setPayloadAcceptEAPTypes:(NSArray *)arg1 ;
-(void)setPayloadUserPassword:(NSString *)arg1 ;
-(void)setPayloadOneTimePassword:(NSNumber *)arg1 ;
-(void)setPayloadPayloadCertificateAnchorUUID:(NSArray *)arg1 ;
-(void)setPayloadTLSTrustedCertificates:(NSArray *)arg1 ;
-(void)setPayloadTLSTrustedServerNames:(NSArray *)arg1 ;
-(void)setPayloadTLSAllowTrustExceptions:(NSNumber *)arg1 ;
-(void)setPayloadTLSCertificateIsRequired:(NSNumber *)arg1 ;
-(void)setPayloadTTLSInnerAuthentication:(NSString *)arg1 ;
-(void)setPayloadOuterIdentity:(NSString *)arg1 ;
-(void)setPayloadEAPFASTUsePAC:(NSNumber *)arg1 ;
-(void)setPayloadEAPFASTProvisionPAC:(NSNumber *)arg1 ;
-(void)setPayloadEAPFASTProvisionPACAnonymously:(NSNumber *)arg1 ;
-(void)setPayloadEAPSIMNumberOfRANDs:(NSNumber *)arg1 ;
-(void)setPayloadSystemModeCredentialsSource:(NSString *)arg1 ;
-(void)setPayloadSystemModeUseOpenDirectoryCredentials:(NSNumber *)arg1 ;
-(void)setPayloadOneTimeUserPassword:(NSNumber *)arg1 ;
-(void)setPayloadEAPSIMAKAEncryptedIdentityEnabled:(NSNumber *)arg1 ;
-(NSArray *)payloadAcceptEAPTypes;
-(NSString *)payloadUserPassword;
-(NSNumber *)payloadOneTimePassword;
-(NSArray *)payloadPayloadCertificateAnchorUUID;
-(NSArray *)payloadTLSTrustedCertificates;
-(NSArray *)payloadTLSTrustedServerNames;
-(NSNumber *)payloadTLSAllowTrustExceptions;
-(NSNumber *)payloadTLSCertificateIsRequired;
-(NSString *)payloadTTLSInnerAuthentication;
-(NSString *)payloadOuterIdentity;
-(NSNumber *)payloadEAPFASTUsePAC;
-(NSNumber *)payloadEAPFASTProvisionPAC;
-(NSNumber *)payloadEAPFASTProvisionPACAnonymously;
-(NSNumber *)payloadEAPSIMNumberOfRANDs;
-(NSString *)payloadSystemModeCredentialsSource;
-(NSNumber *)payloadSystemModeUseOpenDirectoryCredentials;
-(NSNumber *)payloadOneTimeUserPassword;
-(NSNumber *)payloadEAPSIMAKAEncryptedIdentityEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

