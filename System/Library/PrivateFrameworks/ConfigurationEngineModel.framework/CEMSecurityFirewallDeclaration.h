/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSArray, NSString;

@interface CEMSecurityFirewallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadEnableFirewall;
	NSNumber* _payloadBlockAllIncoming;
	NSNumber* _payloadEnableStealthMode;
	NSArray* _payloadApplications;

}

@property (nonatomic,copy) NSNumber * payloadEnableFirewall;                 //@synthesize payloadEnableFirewall=_payloadEnableFirewall - In the implementation block
@property (nonatomic,copy) NSNumber * payloadBlockAllIncoming;               //@synthesize payloadBlockAllIncoming=_payloadBlockAllIncoming - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEnableStealthMode;              //@synthesize payloadEnableStealthMode=_payloadEnableStealthMode - In the implementation block
@property (nonatomic,copy) NSArray * payloadApplications;                    //@synthesize payloadApplications=_payloadApplications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withEnableFirewall:(id)arg2 withBlockAllIncoming:(id)arg3 withEnableStealthMode:(id)arg4 withApplications:(id)arg5 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnableFirewall:(id)arg2 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadEnableFirewall:(NSNumber *)arg1 ;
-(void)setPayloadBlockAllIncoming:(NSNumber *)arg1 ;
-(void)setPayloadEnableStealthMode:(NSNumber *)arg1 ;
-(void)setPayloadApplications:(NSArray *)arg1 ;
-(NSNumber *)payloadEnableFirewall;
-(NSNumber *)payloadBlockAllIncoming;
-(NSNumber *)payloadEnableStealthMode;
-(NSArray *)payloadApplications;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

