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

@class NSString;

@interface CEMNetworkHostNameDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadName;

}

@property (nonatomic,copy) NSString * payloadName;                  //@synthesize payloadName=_payloadName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withName:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg1 withName:(id)arg2 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadName:(NSString *)arg1 ;
-(NSString *)payloadName;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

