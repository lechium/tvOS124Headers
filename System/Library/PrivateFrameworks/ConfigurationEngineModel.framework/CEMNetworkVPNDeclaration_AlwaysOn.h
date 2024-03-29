/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMNetworkVPNDeclaration_AlwaysOn : CEMPayloadBase {

	NSArray* _payloadTunnelConfigurations;
	NSNumber* _payloadUIToggleEnabled;
	NSArray* _payloadServiceExceptions;
	NSNumber* _payloadAllowCaptiveWebSheet;
	NSNumber* _payloadAllowAllCaptiveNetworkPlugins;
	NSArray* _payloadAllowedCaptiveNetworkPlugins;

}

@property (nonatomic,copy) NSArray * payloadTunnelConfigurations;                        //@synthesize payloadTunnelConfigurations=_payloadTunnelConfigurations - In the implementation block
@property (nonatomic,copy) NSNumber * payloadUIToggleEnabled;                            //@synthesize payloadUIToggleEnabled=_payloadUIToggleEnabled - In the implementation block
@property (nonatomic,copy) NSArray * payloadServiceExceptions;                           //@synthesize payloadServiceExceptions=_payloadServiceExceptions - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCaptiveWebSheet;                       //@synthesize payloadAllowCaptiveWebSheet=_payloadAllowCaptiveWebSheet - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAllCaptiveNetworkPlugins;              //@synthesize payloadAllowAllCaptiveNetworkPlugins=_payloadAllowAllCaptiveNetworkPlugins - In the implementation block
@property (nonatomic,copy) NSArray * payloadAllowedCaptiveNetworkPlugins;                //@synthesize payloadAllowedCaptiveNetworkPlugins=_payloadAllowedCaptiveNetworkPlugins - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithTunnelConfigurations:(id)arg1 withUIToggleEnabled:(id)arg2 withServiceExceptions:(id)arg3 withAllowCaptiveWebSheet:(id)arg4 withAllowAllCaptiveNetworkPlugins:(id)arg5 withAllowedCaptiveNetworkPlugins:(id)arg6 ;
+(id)buildRequiredOnlyWithTunnelConfigurations:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadTunnelConfigurations:(NSArray *)arg1 ;
-(void)setPayloadUIToggleEnabled:(NSNumber *)arg1 ;
-(void)setPayloadServiceExceptions:(NSArray *)arg1 ;
-(void)setPayloadAllowCaptiveWebSheet:(NSNumber *)arg1 ;
-(void)setPayloadAllowAllCaptiveNetworkPlugins:(NSNumber *)arg1 ;
-(void)setPayloadAllowedCaptiveNetworkPlugins:(NSArray *)arg1 ;
-(NSArray *)payloadTunnelConfigurations;
-(NSNumber *)payloadUIToggleEnabled;
-(NSArray *)payloadServiceExceptions;
-(NSNumber *)payloadAllowCaptiveWebSheet;
-(NSNumber *)payloadAllowAllCaptiveNetworkPlugins;
-(NSArray *)payloadAllowedCaptiveNetworkPlugins;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

