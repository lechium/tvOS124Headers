/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

@interface _UIMotionAnalyzer : NSObject {

	_UIMotionAnalyzerSettings* _settings;
	_UIViewerRelativeDevicePose* _viewerRelativeDevicePose;

}

@property (nonatomic,readonly) _UIMotionAnalyzerSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) _UIViewerRelativeDevicePose * viewerRelativeDevicePose;              //@synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose - In the implementation block
-(id)init;
-(id)description;
-(void)reset;
-(id)initWithSettings:(id)arg1 ;
-(_UIMotionAnalyzerSettings *)settings;
-(_UIViewerRelativeDevicePose *)viewerRelativeDevicePose;
-(void)updateWithEvent:(id)arg1 ;
-(BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL*)arg4 logger:(id)arg5 ;
-(void)updateHistory;
-(void)resetHysteresis;
@end
