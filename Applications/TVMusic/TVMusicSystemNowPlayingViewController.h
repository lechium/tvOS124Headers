//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSViewServicePresenter.h"

@class NSString, TVMusicPlayer, UINavigationController, UITapGestureRecognizer, UIView;

@interface TVMusicSystemNowPlayingViewController : UIViewController <PBSViewServicePresenter>
{
    UINavigationController *_navigationController;	// 8 = 0x8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 16 = 0x10
    TVMusicPlayer *_player;	// 24 = 0x18
    UIView *_nowPlayingWallPaper;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010003f628
+ (id)_exportedInterface;	// IMP=0x000000010003f50c
+ (void)dismissCurrentRemoteViewController;	// IMP=0x000000010003e620
+ (id)currentRemoteViewController;	// IMP=0x000000010003e614
@property(retain, nonatomic) UIView *nowPlayingWallPaper; // @synthesize nowPlayingWallPaper=_nowPlayingWallPaper;
@property(retain, nonatomic) TVMusicPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;	// IMP=0x000000010003f6e0
- (void)_menuPressed:(id)arg1;	// IMP=0x000000010003f644
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010003f404
- (void)_dismissRemoteViewController;	// IMP=0x000000010003f37c
- (void)_playerDidChangeState:(id)arg1;	// IMP=0x000000010003f1fc
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003ef6c
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x000000010003e9f4
- (id)preferredFocusEnvironments;	// IMP=0x000000010003e954
- (void)dealloc;	// IMP=0x000000010003e8b8
- (void)viewDidLoad;	// IMP=0x000000010003e70c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010003e63c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

