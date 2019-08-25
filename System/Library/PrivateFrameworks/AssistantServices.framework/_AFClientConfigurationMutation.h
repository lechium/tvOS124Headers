/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClientConfigurationMutating.h>

@class AFClientConfiguration, AFAudioPlaybackRequest, NSString;

@interface _AFClientConfigurationMutation : NSObject <AFClientConfigurationMutating> {

	AFClientConfiguration* _baseModel;
	long long _deviceRingerSwitchState;
	BOOL _isDeviceInSetupFlow;
	BOOL _isDeviceInCarDNDMode;
	BOOL _isDeviceInStarkMode;
	BOOL _isAccessibilityVoiceOverTouchEnabled;
	BOOL _isAccessibilityVibrationDisabled;
	float _outputVolume;
	AFAudioPlaybackRequest* _tapToSiriAudioPlaybackRequest;
	AFAudioPlaybackRequest* _twoShotAudioPlaybackRequest;
	struct {
		unsigned isDirty : 1;
		unsigned hasDeviceRingerSwitchState : 1;
		unsigned hasIsDeviceInSetupFlow : 1;
		unsigned hasIsDeviceInCarDNDMode : 1;
		unsigned hasIsDeviceInStarkMode : 1;
		unsigned hasIsAccessibilityVoiceOverTouchEnabled : 1;
		unsigned hasIsAccessibilityVibrationDisabled : 1;
		unsigned hasOutputVolume : 1;
		unsigned hasTapToSiriAudioPlaybackRequest : 1;
		unsigned hasTwoShotAudioPlaybackRequest : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsAccessibilityVoiceOverTouchEnabled:(BOOL)arg1 ;
-(void)setIsAccessibilityVibrationDisabled:(BOOL)arg1 ;
-(void)setDeviceRingerSwitchState:(long long)arg1 ;
-(void)setIsDeviceInStarkMode:(BOOL)arg1 ;
-(void)setIsDeviceInCarDNDMode:(BOOL)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setIsDeviceInSetupFlow:(BOOL)arg1 ;
-(void)setOutputVolume:(float)arg1 ;
-(void)setTapToSiriAudioPlaybackRequest:(id)arg1 ;
-(void)setTwoShotAudioPlaybackRequest:(id)arg1 ;
-(id)generate;
-(id)init;
@end

