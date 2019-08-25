/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface CEMNetworkDomainsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadEmailDomains;
	NSArray* _payloadWebDomains;
	NSArray* _payloadSafariPasswordAutoFillDomains;

}

@property (nonatomic,copy) NSArray * payloadEmailDomains;                               //@synthesize payloadEmailDomains=_payloadEmailDomains - In the implementation block
@property (nonatomic,copy) NSArray * payloadWebDomains;                                 //@synthesize payloadWebDomains=_payloadWebDomains - In the implementation block
@property (nonatomic,copy) NSArray * payloadSafariPasswordAutoFillDomains;              //@synthesize payloadSafariPasswordAutoFillDomains=_payloadSafariPasswordAutoFillDomains - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withEmailDomains:(id)arg2 withWebDomains:(id)arg3 withSafariPasswordAutoFillDomains:(id)arg4 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadEmailDomains:(NSArray *)arg1 ;
-(void)setPayloadWebDomains:(NSArray *)arg1 ;
-(void)setPayloadSafariPasswordAutoFillDomains:(NSArray *)arg1 ;
-(NSArray *)payloadEmailDomains;
-(NSArray *)payloadWebDomains;
-(NSArray *)payloadSafariPasswordAutoFillDomains;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

