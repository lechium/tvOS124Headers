//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<TVPMediaItem>, TVPPlaybackViewController, UIViewController;

@protocol TVPPlaybackViewControllerDelegate <NSObject>

@optional
- (void)userDidFinishInteractionAfterErrorWasPresented:(TVPPlaybackViewController *)arg1;
- (long long)currentEndpointDeviceTypeForPlaybackViewController:(UIViewController *)arg1;
- (void)playbackViewControllerUserWillInitiatePlayback:(UIViewController *)arg1;
- (void)playbackViewController:(UIViewController *)arg1 controlsForMediaItem:(id <TVPMediaItem>)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (_Bool)playbackViewControllerProvidesCustomControls:(UIViewController *)arg1;
- (void)playMediaItemAtIndex:(long long)arg1;
- (void)playbackViewController:(TVPPlaybackViewController *)arg1 loadRelatedContentForMediaItem:(NSObject<TVPMediaItem> *)arg2 withCompletionHandler:(void (^)(TVPRelatedContent *))arg3;
- (void)contextMenuForMediaItem:(id <TVPMediaItem>)arg1 completionHandler:(void (^)(TVPMusicContextMenuData *))arg2;
@end

