//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSObject<OS_dispatch_source>, NSString, UIActivityIndicatorView, UILabel, UIVisualEffectView;

@interface TVSettingsActivityIndicatorViewController : UIViewController
{
    UILabel *_activityTextLabel;	// 8 = 0x8
    _Bool _showingSpinner;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_spinnerTimer;	// 24 = 0x18
    UIActivityIndicatorView *_spinnerView;	// 32 = 0x20
    UIVisualEffectView *_visualEffectView;	// 40 = 0x28
    _Bool _activityIndicatorHidden;	// 48 = 0x30
    _Bool _allowMenuToDismiss;	// 49 = 0x31
    NSString *_activityText;	// 56 = 0x38
    double _activityIndicatorDelay;	// 64 = 0x40
}

@property(nonatomic) _Bool allowMenuToDismiss; // @synthesize allowMenuToDismiss=_allowMenuToDismiss;
@property(nonatomic) double activityIndicatorDelay; // @synthesize activityIndicatorDelay=_activityIndicatorDelay;
@property(nonatomic, getter=isActivityIndicatorHidden) _Bool activityIndicatorHidden; // @synthesize activityIndicatorHidden=_activityIndicatorHidden;
@property(copy, nonatomic) NSString *activityText; // @synthesize activityText=_activityText;
- (void).cxx_destruct;	// IMP=0x00000001000add10
- (void)_didSelectMenu;	// IMP=0x00000001000adc40
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000ad820
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000ad644
- (void)viewDidLoad;	// IMP=0x00000001000ad4f0
- (void)loadView;	// IMP=0x00000001000ad278
- (void)dealloc;	// IMP=0x00000001000ad218
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000ad184

@end
