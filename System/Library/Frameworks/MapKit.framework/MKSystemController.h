/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKSystemControllerOpenURLDelegate;
#import <MapKit/MapKit-Structs.h>
@interface MKSystemController : NSObject {

	id<MKSystemControllerOpenURLDelegate> _openURLDelegate;

}

@property (assign,nonatomic,__weak) id<MKSystemControllerOpenURLDelegate> openURLDelegate;              //@synthesize openURLDelegate=_openURLDelegate - In the implementation block
+(id)sharedInstance;
-(BOOL)isInternalInstall;
-(BOOL)isWifiEnabled;
-(BOOL)isDevicePluggedIn;
-(BOOL)isPhone6PlusOrLarger;
-(BOOL)supportsAlwaysOnCompass;
-(CGSize)screenSize;
-(BOOL)isHiDPI;
-(BOOL)supports3DMaps;
-(BOOL)supportsPitchAPI;
-(BOOL)supports3DImagery;
-(BOOL)requiresRTT;
-(BOOL)reduceMotionEnabled;
-(id)_defaultOpenURLOptions;
-(BOOL)_openURLsOnBackgroundThread;
-(BOOL)_shouldUseLaunchServices;
-(BOOL)_isRunningInLockScreen;
-(void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 requireOptionKeyPromptUnlockDevice:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)overrideBlurStyle;
-(BOOL)shouldCaptureMapViewGestureAnalytics;
-(id<MKSystemControllerOpenURLDelegate>)openURLDelegate;
-(void)setOpenURLDelegate:(id<MKSystemControllerOpenURLDelegate>)arg1 ;
-(int)userInterfaceIdiom;
-(BOOL)openURL:(id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)screenScale;
@end

