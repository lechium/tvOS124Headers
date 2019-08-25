/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMApplicationUpdateApplicationCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadIdentifier;
	NSNumber* _payloadImmediate;

}

@property (nonatomic,copy) NSString * payloadIdentifier;              //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * payloadImmediate;               //@synthesize payloadImmediate=_payloadImmediate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withIdentifier:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg1 withIdentifier:(id)arg2 withImmediate:(id)arg3 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(NSString *)payloadIdentifier;
-(int)executionLevel;
-(void)setPayloadImmediate:(NSNumber *)arg1 ;
-(NSNumber *)payloadImmediate;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

