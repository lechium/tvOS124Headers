//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSUIDigitEntryViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface PBPinDisplayViewController : TVSUIDigitEntryViewController <UIViewControllerTransitioningDelegate>
{
    double _timeout;	// 8 = 0x8
    CDUnknownBlockType _dismissalCompletion;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timerSource;	// 24 = 0x18
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;	// IMP=0x00000001000971ec
- (void)_cancelTimer;	// IMP=0x0000000100097140
- (void)_startTimerIfNecessary;	// IMP=0x0000000100096f50
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000100096ed0
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000100096e9c
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000100096e68
- (void)_dismissViewControllerWithValue:(_Bool)arg1;	// IMP=0x0000000100096d44
- (void)_handleHomeButton:(id)arg1;	// IMP=0x0000000100096c80
- (void)_handleMenuButton:(id)arg1;	// IMP=0x0000000100096bbc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100096b6c
- (void)viewDidLoad;	// IMP=0x0000000100096884
- (void)dealloc;	// IMP=0x00000001000967ec
- (id)initWithNumberOfDigits:(unsigned long long)arg1 separatorIndexes:(id)arg2;	// IMP=0x0000000100096758

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

