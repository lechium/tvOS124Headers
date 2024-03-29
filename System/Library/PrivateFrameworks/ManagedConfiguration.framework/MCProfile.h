/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class NSObject, NSString, NSArray, NSDate, NSDictionary;

@interface MCProfile : NSObject {

	int _trustQueueTrustLevel;
	BOOL _trustQueueTrustHasBeenEvaluated;
	NSObject*<OS_dispatch_queue> _trustEvaluationQueue;
	NSString* _signerQueueSignerSummary;
	NSArray* _signerQueueSignerCertificates;
	NSObject*<OS_dispatch_queue> _signerEvaluationQueue;
	BOOL _encrypted;
	BOOL _isLocked;
	BOOL _needsReboot;
	BOOL _isStub;
	BOOL _mustInstallNonInteractively;
	NSString* _profileDescription;
	NSString* _displayName;
	NSString* _identifier;
	NSString* _UUID;
	NSString* _organization;
	long long _version;
	NSDate* _installDate;
	NSDate* _expiryDate;
	unsigned long long _targetDeviceType;
	NSString* _removalPasscode;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSDate* _removalDate;
	NSDictionary* _installOptions;
	NSString* _localizedConsentText;

}

@property (nonatomic,retain,readonly) NSString * stubFileName; 
@property (nonatomic,retain,readonly) NSString * profileIDHashFileName; 
@property (nonatomic,retain,readonly) NSString * profileDataFileName; 
@property (nonatomic,retain,readonly) NSString * friendlyName; 
@property (nonatomic,retain) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain,readonly) NSString * profileDescription;                               //@synthesize profileDescription=_profileDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * UUID;                                             //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain,readonly) NSString * organization;                                     //@synthesize organization=_organization - In the implementation block
@property (nonatomic,readonly) long long version;                                                  //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDate * installDate;                                                 //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,retain) NSDictionary * installOptions;                                        //@synthesize installOptions=_installOptions - In the implementation block
@property (assign,nonatomic) BOOL mustInstallNonInteractively;                                     //@synthesize mustInstallNonInteractively=_mustInstallNonInteractively - In the implementation block
@property (assign,getter=isEncrypted,nonatomic) BOOL encrypted;                                    //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) BOOL isSigned; 
@property (nonatomic,readonly) int trustLevel; 
@property (nonatomic,readonly) NSString * signerSummary; 
@property (nonatomic,readonly) SecCertificateRef signerCertificate; 
@property (nonatomic,retain) NSArray * signerCertificates; 
@property (nonatomic,readonly) BOOL isStub;                                                        //@synthesize isStub=_isStub - In the implementation block
@property (nonatomic,retain,readonly) NSString * productBuildVersion;                              //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,retain,readonly) NSString * productVersion;                                   //@synthesize productVersion=_productVersion - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;                                          //@synthesize isLocked=_isLocked - In the implementation block
@property (nonatomic,retain) NSString * removalPasscode;                                           //@synthesize removalPasscode=_removalPasscode - In the implementation block
@property (nonatomic,readonly) BOOL needsReboot;                                                   //@synthesize needsReboot=_needsReboot - In the implementation block
@property (nonatomic,readonly) long long installType; 
@property (nonatomic,readonly) BOOL isInstalledForSystem; 
@property (nonatomic,readonly) BOOL isInstalledForUser; 
@property (nonatomic,readonly) BOOL shouldHaveFullSSLTrust; 
@property (nonatomic,retain,readonly) NSArray * payloads; 
@property (nonatomic,retain,readonly) NSArray * managedPayloads; 
@property (nonatomic,retain,readonly) NSArray * localizedPayloadSummaryByType; 
@property (nonatomic,retain,readonly) NSArray * localizedManagedPayloadSummaryByType; 
@property (nonatomic,retain,readonly) NSDate * earliestCertificateExpiryDate; 
@property (nonatomic,retain,readonly) NSDate * expiryDate;                                         //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,readonly) unsigned long long targetDeviceType;                                //@synthesize targetDeviceType=_targetDeviceType - In the implementation block
@property (nonatomic,readonly) BOOL isManagedByProfileService; 
@property (nonatomic,retain,readonly) NSArray * installationWarnings; 
@property (nonatomic,readonly) NSString * localizedConsentText;                                    //@synthesize localizedConsentText=_localizedConsentText - In the implementation block
@property (nonatomic,readonly) NSDate * removalDate;                                               //@synthesize removalDate=_removalDate - In the implementation block
+(id)badFieldTypeErrorWithField:(id)arg1 ;
+(id)removeRequiredObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 missingDataCode:(long long)arg5 missingDataErrorString:(id)arg6 invalidDataCode:(long long)arg7 invalidDataErrorString:(id)arg8 outError:(id*)arg9 ;
+(id)removeOptionalObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7 ;
+(id)removeRequiredNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8 ;
+(id)removeOptionalNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6 ;
+(id)profileWithDictionary:(id)arg1 signerCerts:(id)arg2 fileName:(id)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id*)arg5 ;
+(int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToWriteDefaults:(BOOL*)arg3 ;
+(BOOL)checkString:(id)arg1 isOneOfStrings:(id)arg2 key:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 errorString:(id)arg6 outError:(id*)arg7 ;
+(id)stringForDeviceType:(unsigned long long)arg1 ;
+(int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToInstallUnsupportedPayloads:(BOOL*)arg3 outIsAllowedToWriteDefaults:(BOOL*)arg4 outIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(BOOL*)arg5 ;
+(id)missingFieldErrorWithField:(id)arg1 ;
+(int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 ;
+(id)signerSummaryOfCertificate:(SecCertificateRef)arg1 ;
+(id)profileWithData:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4 ;
+(id)profileWithData:(id)arg1 fileName:(id)arg2 outError:(id*)arg3 ;
+(id)_malformedProfileError;
+(id)profileDictionaryFromProfileData:(id)arg1 outSignerCerts:(id*)arg2 outError:(id*)arg3 ;
+(id)dataFromCMSEncodedData:(id)arg1 outSignerCertificates:(id*)arg2 ;
+(int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToInstallUnsupportedPayloads:(BOOL*)arg3 outIsAllowedToWriteDefaults:(BOOL*)arg4 ;
+(int)evaluateTrust:(SecTrustRef)arg1 ;
+(id)newProfileSignatureVersion;
+(id)profileWithData:(id)arg1 outError:(id*)arg2 ;
-(BOOL)isStub;
-(id)stubDictionary;
-(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 ;
-(NSString *)profileDescription;
-(NSString *)organization;
-(NSDictionary *)installOptions;
-(NSString *)removalPasscode;
-(void)setRemovalPasscode:(NSString *)arg1 ;
-(id)payloadWithUUID:(id)arg1 ;
-(SecCertificateRef)copyCertificateFromPayloadWithUUID:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4 ;
-(id)malformedProfileErrorWithError:(id)arg1 ;
-(NSArray *)installationWarnings;
-(id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1 ;
-(NSArray *)managedPayloads;
-(id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1 ;
-(id)subjectSummaryFromCertificateWithPersistentID:(id)arg1 ;
-(BOOL)isManagedByProfileService;
-(NSArray *)localizedPayloadSummaryByType;
-(NSArray *)localizedManagedPayloadSummaryByType;
-(NSDate *)earliestCertificateExpiryDate;
-(void)replacePayloadWithUUID:(id)arg1 withPayload:(id)arg2 ;
-(id)signatureVersion;
-(NSArray *)signerCertificates;
-(BOOL)isSigned;
-(BOOL)mustInstallNonInteractively;
-(void)setSignerCertificates:(NSArray *)arg1 ;
-(int)trustLevel;
-(BOOL)containsPayloadOfClass:(Class)arg1 ;
-(BOOL)isProfileUIInstallationEffectivelyAllowed;
-(NSString *)signerSummary;
-(void)evaluateSignerTrust;
-(BOOL)doesSigningAllowReplacementWithProfile:(id)arg1 useOriginalCheck:(BOOL)arg2 ;
-(SecCertificateRef)signerCertificate;
-(BOOL)isInstalledForSystem;
-(BOOL)isInstalledForUser;
-(void)evaluateSignerTrustAsynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)doesSigningAllowReplacementWithProfile:(id)arg1 ;
-(BOOL)mayInstallWithOptions:(id)arg1 hasInteractionClient:(BOOL)arg2 outError:(id*)arg3 ;
-(id)restrictionsWithHeuristicsAppliedOutError:(id*)arg1 ;
-(id)appAccessibilityParameters;
-(BOOL)shouldHaveFullSSLTrust;
-(unsigned long long)targetDeviceType;
-(NSDate *)removalDate;
-(void)setInstallOptions:(NSDictionary *)arg1 ;
-(void)setMustInstallNonInteractively:(BOOL)arg1 ;
-(NSString *)localizedConsentText;
-(NSString *)stubFileName;
-(BOOL)writeStubToPath:(id)arg1 ;
-(NSString *)profileIDHashFileName;
-(NSString *)profileDataFileName;
-(BOOL)writeStubToDirectory:(id)arg1 ;
-(BOOL)containsAnyPayloadOfClasses:(id)arg1 ;
-(BOOL)containsOnlyPayloadsOfClasses:(id)arg1 ;
-(unsigned long long)countOfPayloadsOfClass:(Class)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(long long)installType;
-(NSDate *)installDate;
-(void)setInstallDate:(NSDate *)arg1 ;
-(NSString *)productVersion;
-(NSDate *)expiryDate;
-(NSString *)productBuildVersion;
-(NSString *)friendlyName;
-(NSArray *)payloads;
-(BOOL)needsReboot;
-(BOOL)isEncrypted;
-(void)setEncrypted:(BOOL)arg1 ;
-(NSString *)identifier;
-(NSString *)UUID;
-(id)description;
-(long long)version;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(NSString *)displayName;
@end

