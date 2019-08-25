/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>
#import <UIKitCore/_UIDisplayEdgeInfoProviding.h>
#import <UIKit/UIApplicationSceneSettings.h>
@class NSNumber;


@protocol UIApplicationSceneSettings <NSObject>
@property (nonatomic,readonly) BOOL underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) unsigned long long deactivationReasons; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,readonly) BOOL forcedStatusBarForegroundTransparent; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL canShowAlerts; 
@property (nonatomic,readonly) BOOL idleModeEnabled; 
@property (nonatomic,readonly) BOOL statusBarDisabled; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) long long statusBarParts; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (nonatomic,readonly) long long deviceOrientation; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@required
-(BOOL)canShowAlerts;
-(long long)userInterfaceStyle;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(unsigned long long)deactivationReasons;
-(long long)deviceOrientation;
-(BOOL)underLock;
-(long long)statusBarParts;
-(CGRect)statusBarAvoidanceFrame;
-(BOOL)forcedStatusBarForegroundTransparent;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(UIEdgeInsets)peripheryInsets;
-(double)systemMinimumMargin;
-(BOOL)deviceOrientationEventsEnabled;
-(int)statusBarStyleOverridesToSuppress;
-(NSNumber *)forcedStatusBarStyle;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(unsigned long long)artworkSubtype;

@end


@class NSNumber, NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings <_UIDisplayEdgeInfoProviding, UIApplicationSceneSettings>

@property (getter=isEffectivelyBackgrounded,nonatomic,readonly) BOOL effectivelyBackgrounded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (nonatomic,readonly) BOOL underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) unsigned long long deactivationReasons; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,readonly) BOOL forcedStatusBarForegroundTransparent; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL canShowAlerts; 
@property (nonatomic,readonly) BOOL idleModeEnabled; 
@property (nonatomic,readonly) BOOL statusBarDisabled; 
@property (nonatomic,readonly) long long statusBarParts; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) long long deviceOrientation; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
-(BOOL)isEffectivelyBackgrounded;
-(BOOL)fb_isUnderLock;
-(BOOL)canShowAlerts;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)userInterfaceStyle;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(unsigned long long)deactivationReasons;
-(long long)deviceOrientation;
-(BOOL)underLock;
-(long long)statusBarParts;
-(CGRect)statusBarAvoidanceFrame;
-(BOOL)forcedStatusBarForegroundTransparent;
-(BOOL)isUISubclass;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(UIEdgeInsets)peripheryInsets;
-(double)systemMinimumMargin;
-(Class)canvasClass;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)deviceOrientationEventsEnabled;
-(int)statusBarStyleOverridesToSuppress;
-(NSNumber *)forcedStatusBarStyle;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(unsigned long long)artworkSubtype;
@end

