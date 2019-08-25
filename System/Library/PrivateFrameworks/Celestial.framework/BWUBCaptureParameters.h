/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BWUBCaptureParameters : NSObject {

	double _lowLightEffectiveIntegrationTimeThreshold;
	double _sifrMainEffectiveIntegrationTimeThreshold;
	float _sifrGainThreshold;
	double _longWithoutSphereEffectiveIntegrationTimeThreshold;
	double _redSaturationMainEffectiveIntegrationTimeThreshold;
	float _redSaturationSIFRGainThreshold;
	BOOL _useSquareRootToneCurveForHDRDisabled;

}

@property (nonatomic,readonly) double lowLightEffectiveIntegrationTimeThreshold;                       //@synthesize lowLightEffectiveIntegrationTimeThreshold=_lowLightEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) double sifrMainEffectiveIntegrationTimeThreshold;                       //@synthesize sifrMainEffectiveIntegrationTimeThreshold=_sifrMainEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) float sifrGainThreshold;                                                //@synthesize sifrGainThreshold=_sifrGainThreshold - In the implementation block
@property (nonatomic,readonly) double longWithoutSphereEffectiveIntegrationTimeThreshold;              //@synthesize longWithoutSphereEffectiveIntegrationTimeThreshold=_longWithoutSphereEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) double redSaturationMainEffectiveIntegrationTimeThreshold;              //@synthesize redSaturationMainEffectiveIntegrationTimeThreshold=_redSaturationMainEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) float redSaturationSIFRGainThreshold;                                   //@synthesize redSaturationSIFRGainThreshold=_redSaturationSIFRGainThreshold - In the implementation block
@property (nonatomic,readonly) BOOL useSquareRootToneCurveForHDRDisabled;                              //@synthesize useSquareRootToneCurveForHDRDisabled=_useSquareRootToneCurveForHDRDisabled - In the implementation block
-(id)initWithSensorIDDictionary:(id)arg1 ;
-(double)lowLightEffectiveIntegrationTimeThreshold;
-(double)sifrMainEffectiveIntegrationTimeThreshold;
-(float)sifrGainThreshold;
-(double)longWithoutSphereEffectiveIntegrationTimeThreshold;
-(double)redSaturationMainEffectiveIntegrationTimeThreshold;
-(float)redSaturationSIFRGainThreshold;
-(BOOL)useSquareRootToneCurveForHDRDisabled;
-(id)description;
@end

