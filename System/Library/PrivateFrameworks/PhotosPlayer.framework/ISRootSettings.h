/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>

@class ISPlayerSettings, ISVitalitySettings, ISPerformanceDiagnosticsSettings;

@interface ISRootSettings : ISSettings {

	ISPlayerSettings* _playerSettings;
	ISVitalitySettings* _vitalitySettings;
	ISPerformanceDiagnosticsSettings* _performanceDiagnosticsSettings;

}

@property (nonatomic,retain) ISPlayerSettings * playerSettings;                                              //@synthesize playerSettings=_playerSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySettings * vitalitySettings;                                          //@synthesize vitalitySettings=_vitalitySettings - In the implementation block
@property (nonatomic,retain) ISPerformanceDiagnosticsSettings * performanceDiagnosticsSettings;              //@synthesize performanceDiagnosticsSettings=_performanceDiagnosticsSettings - In the implementation block
+(id)_archiveFileName;
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)save;
-(ISPlayerSettings *)playerSettings;
-(void)setPlayerSettings:(ISPlayerSettings *)arg1 ;
-(ISVitalitySettings *)vitalitySettings;
-(void)setVitalitySettings:(ISVitalitySettings *)arg1 ;
-(ISPerformanceDiagnosticsSettings *)performanceDiagnosticsSettings;
-(void)setPerformanceDiagnosticsSettings:(ISPerformanceDiagnosticsSettings *)arg1 ;
-(void)setDefaultValues;
@end

