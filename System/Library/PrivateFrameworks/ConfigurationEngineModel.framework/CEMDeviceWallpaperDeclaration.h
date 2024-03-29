/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMDeviceWallpaperDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadLockScreenAsset;
	NSString* _payloadHomeScreenAsset;
	NSNumber* _payloadAllowWallpaperModification;

}

@property (nonatomic,copy) NSString * payloadLockScreenAsset;                         //@synthesize payloadLockScreenAsset=_payloadLockScreenAsset - In the implementation block
@property (nonatomic,copy) NSString * payloadHomeScreenAsset;                         //@synthesize payloadHomeScreenAsset=_payloadHomeScreenAsset - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowWallpaperModification;              //@synthesize payloadAllowWallpaperModification=_payloadAllowWallpaperModification - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withLockScreenAsset:(id)arg2 withHomeScreenAsset:(id)arg3 withAllowWallpaperModification:(id)arg4 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadLockScreenAsset:(NSString *)arg1 ;
-(void)setPayloadHomeScreenAsset:(NSString *)arg1 ;
-(void)setPayloadAllowWallpaperModification:(NSNumber *)arg1 ;
-(NSString *)payloadLockScreenAsset;
-(NSString *)payloadHomeScreenAsset;
-(NSNumber *)payloadAllowWallpaperModification;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

