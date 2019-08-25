/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardUIServices/FBUISceneEvent.h>

@class FBSSceneSettings, FBSSceneSettingsDiff;

@interface FBUISceneUpdateSettingsEvent : FBUISceneEvent {

	FBSSceneSettings* _settings;
	FBSSceneSettingsDiff* _diff;

}

@property (nonatomic,copy) FBSSceneSettings * settings;                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) FBSSceneSettingsDiff * settingsDiff;              //@synthesize diff=_diff - In the implementation block
-(void)setSettingsDiff:(FBSSceneSettingsDiff *)arg1 ;
-(FBSSceneSettings *)settings;
-(FBSSceneSettingsDiff *)settingsDiff;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
@end
