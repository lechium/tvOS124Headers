/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPVideoViewController.h>
#import <libobjc.A.dylib/MPSwipableViewDelegate.h>

@class NSString;

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {

	unsigned _requestExitAfterHidingControls : 1;
	unsigned _rotateAfterHidingControls : 1;
	unsigned _showControlsAfterRotate : 1;
	unsigned _autoHidingForItemChange : 1;
	unsigned _scheduledAutoHide : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCanShowControlsOverlay:(BOOL)arg1 ;
-(BOOL)canShowControlsOverlay;
-(BOOL)controlsOverlayVisible;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)videoView_bufferingStateChangedNotification:(id)arg1 ;
-(void)videoView_playbackStateChangedNotification:(id)arg1 ;
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2 ;
-(void)displayVideoViewOnScreen;
-(BOOL)canHideOverlay:(BOOL)arg1 ;
-(void)setDisableControlsAutohide:(BOOL)arg1 ;
-(void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(CGPoint)arg3 ;
-(void)swipableViewHadActivity:(id)arg1 ;
-(BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2 ;
-(BOOL)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2 ;
-(BOOL)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2 ;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)overlayDidBeginScrubbing:(id)arg1 ;
-(void)overlayDidEndScrubbing:(id)arg1 ;
-(void)showOverlayAnimated:(BOOL)arg1 ;
-(void)_resumedEventsOnlyNotification:(id)arg1 ;
-(void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1 ;
-(void)transformVideoForInterfaceOrientation:(long long)arg1 animate:(BOOL)arg2 ;
-(void)_hideOverlayWithAnimation:(BOOL)arg1 shouldUpdateAutohideFlag:(BOOL)arg2 ;
-(long long)_validInterfaceOrientation;
-(void)hideOverlayAnimated:(BOOL)arg1 ;
-(void)showOverlayIfNecessary;
-(BOOL)inhibitOverlay;
-(void)cancelControlsOverlayAutohide;
-(void)_autohideControlsOverlay;
-(void)setInhibitOverlay:(BOOL)arg1 ;
-(BOOL)forceScaleToFitInPortrait;
-(void)_hideOverlayWithAnimation:(BOOL)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setItem:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
@end

