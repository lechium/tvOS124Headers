//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class MTTVNowPlayingViewController, NSString;

@interface MTTVPodcastPlaybackHostControllerViewController : UIViewController <UIGestureRecognizerDelegate>
{
    MTTVNowPlayingViewController *_playbackViewController;	// 8 = 0x8
}

@property(readonly, nonatomic) MTTVNowPlayingViewController *playbackViewController; // @synthesize playbackViewController=_playbackViewController;
- (void).cxx_destruct;	// IMP=0x0000000100041f04
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100041eec
- (void)_handleMenuButton:(id)arg1;	// IMP=0x0000000100041d8c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100041cd8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100041bcc
- (void)viewDidLoad;	// IMP=0x0000000100041a64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
