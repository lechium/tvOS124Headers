//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVDAInternalStepViewControllerDescribing.h"

@class NSString, TVDALoadingStep, UIActivityIndicatorView, UILabel;

@interface TVDASpinnerViewController : UIViewController <TVDAInternalStepViewControllerDescribing>
{
    TVDALoadingStep *_loadingStep;	// 8 = 0x8
    UILabel *_internalDescriptionLabel;	// 16 = 0x10
    UIActivityIndicatorView *_spinnerView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(readonly, nonatomic) UILabel *internalDescriptionLabel; // @synthesize internalDescriptionLabel=_internalDescriptionLabel;
@property(readonly, nonatomic) TVDALoadingStep *loadingStep; // @synthesize loadingStep=_loadingStep;
- (void).cxx_destruct;	// IMP=0x00000001000070ec
- (void)_handleMenuPress:(id)arg1;	// IMP=0x0000000100006fac
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100006f3c
- (void)viewDidLoad;	// IMP=0x0000000100006914
- (id)initWithLoadingStep:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000065f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

