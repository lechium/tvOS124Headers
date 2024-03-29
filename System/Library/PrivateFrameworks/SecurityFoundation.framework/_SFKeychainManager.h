/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class _SFCredentialStore;

@interface _SFKeychainManager : NSObject {

	id _keychainManagerInternal;

}

@property (readonly) _SFCredentialStore * credentialStore; 
+(id)defaultManager;
-(_SFCredentialStore *)credentialStore;
-(id)_symmetricKeyAttributesForIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3 ;
-(CFDictionaryRef)_commonKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3 ;
-(CFDictionaryRef)_privateKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3 ;
-(CFDictionaryRef)_publicKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3 ;
-(CFDictionaryRef)_certificateAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 ;
-(void)setKey:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)setIdentity:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)setData:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)keyForIdentifier:(id)arg1 specifier:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)identityForIdentifier:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)dataForIdentifier:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)keysFilteredBy:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)identitiesFilteredBy:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)removeItemWithIdentifier:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_init;
@end

