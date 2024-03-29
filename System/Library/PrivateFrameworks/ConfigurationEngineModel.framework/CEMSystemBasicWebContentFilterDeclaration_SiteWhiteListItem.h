/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemBasicWebContentFilterDeclaration_SiteWhiteListItem : CEMPayloadBase {

	NSString* _payloadAddress;
	NSString* _payloadPageTitle;

}

@property (nonatomic,copy) NSString * payloadAddress;                //@synthesize payloadAddress=_payloadAddress - In the implementation block
@property (nonatomic,copy) NSString * payloadPageTitle;              //@synthesize payloadPageTitle=_payloadPageTitle - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithAddress:(id)arg1 withPageTitle:(id)arg2 ;
+(id)buildRequiredOnlyWithAddress:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAddress:(NSString *)arg1 ;
-(void)setPayloadPageTitle:(NSString *)arg1 ;
-(NSString *)payloadAddress;
-(NSString *)payloadPageTitle;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

