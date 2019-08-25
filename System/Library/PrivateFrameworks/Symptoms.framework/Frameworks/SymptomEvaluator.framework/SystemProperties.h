/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSString, NSNumber;

@interface SystemProperties : NSObject {

	BOOL _internalBuild;
	BOOL _carrierSeedBuild;
	BOOL _basebandCapability;
	BOOL _lowEndHardware;
	BOOL _customerSeedBuild;
	BOOL _internalBuildDisabledByOverride;
	int _deviceClass;
	NSString* _productType;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;
	NSString* _basebandChipset;
	NSNumber* _carrierSeedBuildOverride;

}

@property (readonly) NSString * productType;                                    //@synthesize productType=_productType - In the implementation block
@property (readonly) int deviceClass;                                           //@synthesize deviceClass=_deviceClass - In the implementation block
@property (readonly) BOOL basebandCapability;                                   //@synthesize basebandCapability=_basebandCapability - In the implementation block
@property (readonly) BOOL lowEndHardware;                                       //@synthesize lowEndHardware=_lowEndHardware - In the implementation block
@property (readonly) BOOL internalBuild;                                        //@synthesize internalBuild=_internalBuild - In the implementation block
@property (readonly) BOOL customerSeedBuild;                                    //@synthesize customerSeedBuild=_customerSeedBuild - In the implementation block
@property (readonly) BOOL carrierSeedBuild;                                     //@synthesize carrierSeedBuild=_carrierSeedBuild - In the implementation block
@property (readonly) NSString * productName;                                    //@synthesize productName=_productName - In the implementation block
@property (readonly) NSString * productVersion;                                 //@synthesize productVersion=_productVersion - In the implementation block
@property (readonly) NSString * buildVersion;                                   //@synthesize buildVersion=_buildVersion - In the implementation block
@property (readonly) NSString * basebandChipset;                                //@synthesize basebandChipset=_basebandChipset - In the implementation block
@property (assign,nonatomic) BOOL internalBuildDisabledByOverride;              //@synthesize internalBuildDisabledByOverride=_internalBuildDisabledByOverride - In the implementation block
@property (nonatomic,retain) NSNumber * carrierSeedBuildOverride;               //@synthesize carrierSeedBuildOverride=_carrierSeedBuildOverride - In the implementation block
+(int)systemPropertiesDeviceClassFromMGQDeviceClass:(int)arg1 ;
+(void)saveDeviceConfigType:(unsigned long long)arg1 forKey:(CFStringRef)arg2 ;
+(unsigned long long)retrieveDeviceConfigTypeForKey:(CFStringRef)arg1 ;
+(id)sharedInstance;
-(NSString *)productName;
-(BOOL)internalBuild;
-(int)deviceClass;
-(NSString *)productType;
-(NSString *)productVersion;
-(id)deviceClassString;
-(BOOL)carrierSeedBuild;
-(BOOL)basebandCapability;
-(BOOL)customerSeedBuild;
-(NSString *)basebandChipset;
-(BOOL)internalBuildDisabledByOverride;
-(void)setInternalBuildDisabledByOverride:(BOOL)arg1 ;
-(NSNumber *)carrierSeedBuildOverride;
-(void)setCarrierSeedBuildOverride:(NSNumber *)arg1 ;
-(BOOL)lowEndHardware;
-(id)init;
-(id)description;
-(NSString *)buildVersion;
@end
