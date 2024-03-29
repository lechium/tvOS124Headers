//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SVSSuggestionsViewControllerDelegate.h"
#import "SiriUIPresentation.h"

@class NSString, SVSSuggestionsViewController;

@interface SiriEyesFreePresentation : UIViewController <SVSSuggestionsViewControllerDelegate, SiriUIPresentation>
{
    _Bool _hasReportedPresentation;	// 8 = 0x8
    id <SiriUIPresentationDataSource> _dataSource;	// 16 = 0x10
    id <SiriUIPresentationDelegate> _delegate;	// 24 = 0x18
    SVSSuggestionsViewController *_siriUnavailableViewController;	// 32 = 0x20
}

@property(readonly, nonatomic, getter=_siriUnavailableViewController) SVSSuggestionsViewController *siriUnavailableViewController; // @synthesize siriUnavailableViewController=_siriUnavailableViewController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100041f18
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100041e44
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100041de8
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100041d6c
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x0000000100041d68
- (void)viewDidLoad;	// IMP=0x0000000100041b24
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x0000000100041b1c
- (_Bool)supportsTextInput;	// IMP=0x0000000100041b14
- (_Bool)shouldDismissForIdling;	// IMP=0x0000000100041b0c
- (double)idleTimerInterval;	// IMP=0x0000000100041b04
- (void)_didPresentItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010004184c
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x0000000100041840
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x0000000100041834
- (id)viewController;	// IMP=0x0000000100041830
- (long long)options;	// IMP=0x0000000100041828
- (void)siriDidDeactivate;	// IMP=0x00000001000417e0
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x0000000100041540
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x000000010004140c
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000001000413a8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100041344
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100041328

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

