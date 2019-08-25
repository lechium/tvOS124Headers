/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraKit/CameraKit-Structs.h>
@interface CMKCameraSpec : NSObject

@property (nonatomic,readonly) BOOL shouldCreateFlashButton; 
@property (nonatomic,readonly) BOOL shouldCreateElapsedTimeView; 
@property (nonatomic,readonly) BOOL shouldCreateFlipButton; 
@property (nonatomic,readonly) BOOL shouldCreateStillDuringVideo; 
@property (nonatomic,readonly) BOOL shouldCreateImageWell; 
@property (nonatomic,readonly) BOOL shouldCreateShutterButton; 
@property (nonatomic,readonly) BOOL shouldCreateFiltersButton; 
@property (nonatomic,readonly) BOOL shouldCreateModeDial; 
@property (nonatomic,readonly) BOOL shouldCreateHDRButton; 
@property (nonatomic,readonly) BOOL shouldCreatePanoramaView; 
@property (nonatomic,readonly) BOOL shouldCreateZoomSlider; 
@property (nonatomic,readonly) BOOL shouldCreateAvalancheIndicator; 
@property (nonatomic,readonly) BOOL shouldCreateSlalomIndicator; 
@property (nonatomic,readonly) BOOL shouldCreateTimerButton; 
+(id)specForCurrentPlatform;
+(id)specForPhone;
+(id)specForPad;
-(int)rotationStyle;
-(BOOL)shouldCreateFlashButton;
-(BOOL)shouldCreateElapsedTimeView;
-(BOOL)shouldCreateFlipButton;
-(BOOL)shouldCreateStillDuringVideo;
-(BOOL)shouldCreateImageWell;
-(BOOL)shouldCreateShutterButton;
-(BOOL)shouldCreateFiltersButton;
-(BOOL)shouldCreateModeDial;
-(BOOL)shouldCreateHDRButton;
-(BOOL)shouldCreatePanoramaView;
-(BOOL)shouldCreateZoomSlider;
-(BOOL)isCameraApp;
-(BOOL)shouldCreateAvalancheIndicator;
-(BOOL)shouldCreateSlalomIndicator;
-(BOOL)shouldCreateTimerButton;
-(CGRect)initialFrameForOrientation:(long long)arg1 ;
@end

