//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HBBubbleAnimatorViewProvider.h"
#import "HBTopShelfContentAvailableProtocolDelegate.h"

@class NSString, UIImageView, UIViewController<HBTopShelfContentAvailableProtocol>;

@interface HBTopShelfHostViewController : UIViewController <HBTopShelfContentAvailableProtocolDelegate, HBBubbleAnimatorViewProvider>
{
    _Bool _showLogo;	// 8 = 0x8
    UIViewController<HBTopShelfContentAvailableProtocol> *_currentViewController;	// 16 = 0x10
    UIViewController<HBTopShelfContentAvailableProtocol> *_nextViewController;	// 24 = 0x18
    UIViewController<HBTopShelfContentAvailableProtocol> *_queuedViewController;	// 32 = 0x20
    long long _queuedDirection;	// 40 = 0x28
    UIViewController<HBTopShelfContentAvailableProtocol> *_queuedBubbleViewController;	// 48 = 0x30
    long long _queuedBubbleDirection;	// 56 = 0x38
    UIImageView *_bannerImageView;	// 64 = 0x40
}

@property(nonatomic) _Bool showLogo; // @synthesize showLogo=_showLogo;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(nonatomic) long long queuedBubbleDirection; // @synthesize queuedBubbleDirection=_queuedBubbleDirection;
@property(retain, nonatomic) UIViewController<HBTopShelfContentAvailableProtocol> *queuedBubbleViewController; // @synthesize queuedBubbleViewController=_queuedBubbleViewController;
@property(nonatomic) long long queuedDirection; // @synthesize queuedDirection=_queuedDirection;
@property(retain, nonatomic) UIViewController<HBTopShelfContentAvailableProtocol> *queuedViewController; // @synthesize queuedViewController=_queuedViewController;
@property(retain, nonatomic) UIViewController<HBTopShelfContentAvailableProtocol> *nextViewController; // @synthesize nextViewController=_nextViewController;
@property(retain, nonatomic) UIViewController<HBTopShelfContentAvailableProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;	// IMP=0x0000000100038a48
- (void)_configureBannerImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000001000388bc
- (id)viewsForAnimator:(id)arg1;	// IMP=0x00000001000386b0
- (void)_bubbleAnimatorAnimatingDidChange:(id)arg1;	// IMP=0x000000010003858c
- (void)viewControllerContentAvailableDidChange:(id)arg1;	// IMP=0x00000001000384f4
- (void)_setViewController:(id)arg1 withAnimationDirection:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100037b8c
- (void)setViewController:(id)arg1 withAnimationDirection:(long long)arg2;	// IMP=0x00000001000377a8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100037724
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100037668
- (void)viewDidLoad;	// IMP=0x0000000100037504
- (void)dealloc;	// IMP=0x000000010003742c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100037280

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

