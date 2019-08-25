/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMSystemEnergySaverDeclaration_PowerSettings, CEMSystemEnergySaverDeclaration_EnergySaverSchedule, NSNumber, NSString;

@interface CEMSystemEnergySaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	CEMSystemEnergySaverDeclaration_PowerSettings* _payloadComappleEnergySaverdesktopACPower;
	CEMSystemEnergySaverDeclaration_PowerSettings* _payloadComappleEnergySaverportableACPower;
	CEMSystemEnergySaverDeclaration_PowerSettings* _payloadComappleEnergySaverportableBatteryPower;
	CEMSystemEnergySaverDeclaration_EnergySaverSchedule* _payloadComappleEnergySaverdesktopSchedule;
	NSNumber* _payloadSleepDisabled;
	NSNumber* _payloadDestroyFVKeyOnStandby;

}

@property (nonatomic,copy) CEMSystemEnergySaverDeclaration_PowerSettings * payloadComappleEnergySaverdesktopACPower;                     //@synthesize payloadComappleEnergySaverdesktopACPower=_payloadComappleEnergySaverdesktopACPower - In the implementation block
@property (nonatomic,copy) CEMSystemEnergySaverDeclaration_PowerSettings * payloadComappleEnergySaverportableACPower;                    //@synthesize payloadComappleEnergySaverportableACPower=_payloadComappleEnergySaverportableACPower - In the implementation block
@property (nonatomic,copy) CEMSystemEnergySaverDeclaration_PowerSettings * payloadComappleEnergySaverportableBatteryPower;               //@synthesize payloadComappleEnergySaverportableBatteryPower=_payloadComappleEnergySaverportableBatteryPower - In the implementation block
@property (nonatomic,copy) CEMSystemEnergySaverDeclaration_EnergySaverSchedule * payloadComappleEnergySaverdesktopSchedule;              //@synthesize payloadComappleEnergySaverdesktopSchedule=_payloadComappleEnergySaverdesktopSchedule - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSleepDisabled;                                                                              //@synthesize payloadSleepDisabled=_payloadSleepDisabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDestroyFVKeyOnStandby;                                                                      //@synthesize payloadDestroyFVKeyOnStandby=_payloadDestroyFVKeyOnStandby - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withComappleEnergySaverdesktopACPower:(id)arg2 withComappleEnergySaverportableACPower:(id)arg3 withComappleEnergySaverportableBatteryPower:(id)arg4 withComappleEnergySaverdesktopSchedule:(id)arg5 withSleepDisabled:(id)arg6 withDestroyFVKeyOnStandby:(id)arg7 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadSleepDisabled:(NSNumber *)arg1 ;
-(NSNumber *)payloadSleepDisabled;
-(void)setPayloadComappleEnergySaverdesktopACPower:(CEMSystemEnergySaverDeclaration_PowerSettings *)arg1 ;
-(void)setPayloadComappleEnergySaverportableACPower:(CEMSystemEnergySaverDeclaration_PowerSettings *)arg1 ;
-(void)setPayloadComappleEnergySaverportableBatteryPower:(CEMSystemEnergySaverDeclaration_PowerSettings *)arg1 ;
-(void)setPayloadComappleEnergySaverdesktopSchedule:(CEMSystemEnergySaverDeclaration_EnergySaverSchedule *)arg1 ;
-(void)setPayloadDestroyFVKeyOnStandby:(NSNumber *)arg1 ;
-(CEMSystemEnergySaverDeclaration_PowerSettings *)payloadComappleEnergySaverdesktopACPower;
-(CEMSystemEnergySaverDeclaration_PowerSettings *)payloadComappleEnergySaverportableACPower;
-(CEMSystemEnergySaverDeclaration_PowerSettings *)payloadComappleEnergySaverportableBatteryPower;
-(CEMSystemEnergySaverDeclaration_EnergySaverSchedule *)payloadComappleEnergySaverdesktopSchedule;
-(NSNumber *)payloadDestroyFVKeyOnStandby;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

