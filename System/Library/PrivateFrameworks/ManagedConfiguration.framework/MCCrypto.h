/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@interface MCCrypto : NSObject
+(SecCertificateRef)copyCertificateRefFromPEMData:(id)arg1 ;
+(id)_decryptionFailedErrorWithUnderlyingError:(id)arg1 ;
+(id)storedActivationLockBypassCodeHash;
+(id)createAndStoreNewActivationLockBypassCodeAndHash;
+(void)createNewActivationLockBypassCodeOutCode:(char*)arg1 outRawBytes:(char*)arg2 outHash:(char*)arg3 ;
+(id)storeActivationLockBypassCode:(id)arg1 hash:(id)arg2 ;
+(SecCertificateRef)copyCertificateRefFromPKCS1Data:(id)arg1 ;
+(BOOL)isValidPKCS12Data:(id)arg1 ;
+(id)objectFromEncryptedData:(id)arg1 outCertificate:(_SecCertificate*)arg2 outError:(id*)arg3 ;
+(id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;
+(id)storedActivationLockBypassCodeWithOutError:(id*)arg1 ;
+(void)clearStoredActivationLockBypassCode;
+(void)clearStoredActivationLockHash;
@end
