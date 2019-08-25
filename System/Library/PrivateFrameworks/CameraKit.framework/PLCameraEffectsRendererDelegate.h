/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLCameraEffectsRendererDelegate <NSObject>
@required
-(void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(BOOL)arg2;
-(void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2;
-(void)cameraEffectsRendererDidStartPreview:(id)arg1;
-(void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(BOOL)arg2;
-(void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3;
-(void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(BOOL)arg2;

@end
