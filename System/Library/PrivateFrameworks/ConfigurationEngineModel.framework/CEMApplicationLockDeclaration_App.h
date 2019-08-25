/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, CEMApplicationLockDeclaration_AppOptions, CEMApplicationLockDeclaration_AppUserEnabledOptions;

@interface CEMApplicationLockDeclaration_App : CEMPayloadBase {

	NSString* _payloadIdentifier;
	CEMApplicationLockDeclaration_AppOptions* _payloadOptions;
	CEMApplicationLockDeclaration_AppUserEnabledOptions* _payloadUserEnabledOptions;

}

@property (nonatomic,copy) NSString * payloadIdentifier;                                                                 //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,copy) CEMApplicationLockDeclaration_AppOptions * payloadOptions;                                    //@synthesize payloadOptions=_payloadOptions - In the implementation block
@property (nonatomic,copy) CEMApplicationLockDeclaration_AppUserEnabledOptions * payloadUserEnabledOptions;              //@synthesize payloadUserEnabledOptions=_payloadUserEnabledOptions - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withOptions:(id)arg2 withUserEnabledOptions:(id)arg3 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(NSString *)payloadIdentifier;
-(void)setPayloadOptions:(CEMApplicationLockDeclaration_AppOptions *)arg1 ;
-(void)setPayloadUserEnabledOptions:(CEMApplicationLockDeclaration_AppUserEnabledOptions *)arg1 ;
-(CEMApplicationLockDeclaration_AppOptions *)payloadOptions;
-(CEMApplicationLockDeclaration_AppUserEnabledOptions *)payloadUserEnabledOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

