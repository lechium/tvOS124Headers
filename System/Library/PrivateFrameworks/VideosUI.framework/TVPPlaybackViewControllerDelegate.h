/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPPlaybackViewControllerDelegate <NSObject>
@optional
-(void)contextMenuForMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)playbackViewController:(id)arg1 loadRelatedContentForMediaItem:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)playMediaItemAtIndex:(long long)arg1;
-(BOOL)playbackViewControllerProvidesCustomControls:(id)arg1;
-(void)playbackViewController:(id)arg1 controlsForMediaItem:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)playbackViewControllerUserWillInitiatePlayback:(id)arg1;
-(long long)currentEndpointDeviceTypeForPlaybackViewController:(id)arg1;
-(void)userDidFinishInteractionAfterErrorWasPresented:(id)arg1;

@end

