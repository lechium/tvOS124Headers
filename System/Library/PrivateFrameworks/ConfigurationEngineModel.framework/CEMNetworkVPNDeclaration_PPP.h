/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, NSArray;

@interface CEMNetworkVPNDeclaration_PPP : CEMPayloadBase {

	NSString* _payloadAuthName;
	NSString* _payloadAuthPassword;
	NSNumber* _payloadTokenCard;
	NSString* _payloadCommRemoteAddress;
	NSArray* _payloadAuthEAPPlugins;
	NSArray* _payloadAuthProtocol;
	NSNumber* _payloadCCPMPPE40Enabled;
	NSNumber* _payloadCCPMPPE128Enabled;
	NSNumber* _payloadCCPEnabled;
	NSNumber* _payloadDisconnectOnIdle;
	NSNumber* _payloadDisconnectOnIdleTimer;

}

@property (nonatomic,copy) NSString * payloadAuthName;                           //@synthesize payloadAuthName=_payloadAuthName - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthPassword;                       //@synthesize payloadAuthPassword=_payloadAuthPassword - In the implementation block
@property (nonatomic,copy) NSNumber * payloadTokenCard;                          //@synthesize payloadTokenCard=_payloadTokenCard - In the implementation block
@property (nonatomic,copy) NSString * payloadCommRemoteAddress;                  //@synthesize payloadCommRemoteAddress=_payloadCommRemoteAddress - In the implementation block
@property (nonatomic,copy) NSArray * payloadAuthEAPPlugins;                      //@synthesize payloadAuthEAPPlugins=_payloadAuthEAPPlugins - In the implementation block
@property (nonatomic,copy) NSArray * payloadAuthProtocol;                        //@synthesize payloadAuthProtocol=_payloadAuthProtocol - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCCPMPPE40Enabled;                   //@synthesize payloadCCPMPPE40Enabled=_payloadCCPMPPE40Enabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCCPMPPE128Enabled;                  //@synthesize payloadCCPMPPE128Enabled=_payloadCCPMPPE128Enabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCCPEnabled;                         //@synthesize payloadCCPEnabled=_payloadCCPEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisconnectOnIdle;                   //@synthesize payloadDisconnectOnIdle=_payloadDisconnectOnIdle - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisconnectOnIdleTimer;              //@synthesize payloadDisconnectOnIdleTimer=_payloadDisconnectOnIdleTimer - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAuthName:(id)arg1 withAuthPassword:(id)arg2 withTokenCard:(id)arg3 withCommRemoteAddress:(id)arg4 withAuthEAPPlugins:(id)arg5 withAuthProtocol:(id)arg6 withCCPMPPE40Enabled:(id)arg7 withCCPMPPE128Enabled:(id)arg8 withCCPEnabled:(id)arg9 withDisconnectOnIdle:(id)arg10 withDisconnectOnIdleTimer:(id)arg11 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDisconnectOnIdle:(NSNumber *)arg1 ;
-(void)setPayloadDisconnectOnIdleTimer:(NSNumber *)arg1 ;
-(NSNumber *)payloadDisconnectOnIdle;
-(NSNumber *)payloadDisconnectOnIdleTimer;
-(void)setPayloadAuthName:(NSString *)arg1 ;
-(void)setPayloadAuthPassword:(NSString *)arg1 ;
-(NSString *)payloadAuthName;
-(NSString *)payloadAuthPassword;
-(void)setPayloadTokenCard:(NSNumber *)arg1 ;
-(void)setPayloadCommRemoteAddress:(NSString *)arg1 ;
-(void)setPayloadAuthEAPPlugins:(NSArray *)arg1 ;
-(void)setPayloadAuthProtocol:(NSArray *)arg1 ;
-(void)setPayloadCCPMPPE40Enabled:(NSNumber *)arg1 ;
-(void)setPayloadCCPMPPE128Enabled:(NSNumber *)arg1 ;
-(void)setPayloadCCPEnabled:(NSNumber *)arg1 ;
-(NSNumber *)payloadTokenCard;
-(NSString *)payloadCommRemoteAddress;
-(NSArray *)payloadAuthEAPPlugins;
-(NSArray *)payloadAuthProtocol;
-(NSNumber *)payloadCCPMPPE40Enabled;
-(NSNumber *)payloadCCPMPPE128Enabled;
-(NSNumber *)payloadCCPEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

