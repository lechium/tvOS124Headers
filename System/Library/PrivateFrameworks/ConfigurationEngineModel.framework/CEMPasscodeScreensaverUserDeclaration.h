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

@class NSString, NSNumber;

@interface CEMPasscodeScreensaverUserDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadModulePath;
	NSNumber* _payloadIdleTime;

}

@property (nonatomic,copy) NSString * payloadModulePath;              //@synthesize payloadModulePath=_payloadModulePath - In the implementation block
@property (nonatomic,copy) NSNumber * payloadIdleTime;                //@synthesize payloadIdleTime=_payloadIdleTime - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withModulePath:(id)arg2 withIdleTime:(id)arg3 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadModulePath:(NSString *)arg1 ;
-(void)setPayloadIdleTime:(NSNumber *)arg1 ;
-(NSString *)payloadModulePath;
-(NSNumber *)payloadIdleTime;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

