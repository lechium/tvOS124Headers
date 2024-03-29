/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedRemotesItem : CEMPayloadBase {

	NSString* _payloadRemoteDeviceID;

}

@property (nonatomic,copy) NSString * payloadRemoteDeviceID;              //@synthesize payloadRemoteDeviceID=_payloadRemoteDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithRemoteDeviceID:(id)arg1 ;
+(id)buildRequiredOnlyWithRemoteDeviceID:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRemoteDeviceID:(NSString *)arg1 ;
-(NSString *)payloadRemoteDeviceID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

