/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMDeclarationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, CEMPredicateBase, NSString;

@interface CEMActivationSimpleDeclaration : CEMDeclarationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadStandardConfigurations;
	CEMPredicateBase* _payloadPredicate;

}

@property (nonatomic,copy) NSArray * payloadStandardConfigurations;              //@synthesize payloadStandardConfigurations=_payloadStandardConfigurations - In the implementation block
@property (nonatomic,copy) CEMPredicateBase * payloadPredicate;                  //@synthesize payloadPredicate=_payloadPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withStandardConfigurations:(id)arg2 withPredicate:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withStandardConfigurations:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadStandardConfigurations:(NSArray *)arg1 ;
-(NSArray *)payloadStandardConfigurations;
-(void)setPayloadPredicate:(CEMPredicateBase *)arg1 ;
-(CEMPredicateBase *)payloadPredicate;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

