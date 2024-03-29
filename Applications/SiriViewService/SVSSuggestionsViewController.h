//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFConversationDelegate.h"
#import "SVSTranscriptStackViewControllerDataSource.h"
#import "SVSTranscriptStackViewControllerDelegate.h"
#import "SiriUISuggestionsViewDelegate.h"

@class AFConversation, NSString, SVSTranscriptStackViewController, SiriUISuggestionsView;

@interface SVSSuggestionsViewController : UIViewController <SiriUISuggestionsViewDelegate, SVSTranscriptStackViewControllerDelegate, SVSTranscriptStackViewControllerDataSource, AFConversationDelegate>
{
    AFConversation *_conversation;	// 8 = 0x8
    SVSTranscriptStackViewController *_guideController;	// 16 = 0x10
    id <SVSSuggestionsViewControllerDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <SVSSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010001c88c
- (_Bool)suggestionsViewIsInTextInputMode:(id)arg1;	// IMP=0x000000010001c7bc
- (double)contentWidthForSuggestionsView:(id)arg1;	// IMP=0x000000010001c760
- (void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010001c6c0
- (double)statusViewHeightForSuggestionsView:(id)arg1;	// IMP=0x000000010001c664
- (double)statusBarHeightForSuggestionsView:(id)arg1;	// IMP=0x000000010001c604
- (void)didShowSuggestionsForSuggestionsView:(id)arg1;	// IMP=0x000000010001c568
- (void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001c54c
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x000000010001c504
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x000000010001c490
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001c474
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001c458
- (_Bool)inTextInputModeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c3bc
- (void)willSendStartRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c3b8
- (void)transcriptStackViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010001c3b4
- (void)transcriptStackViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010001c3b0
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001c3ac
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000010001c3a8
- (void)transcriptStackViewController:(id)arg1 didFinishTest:(id)arg2;	// IMP=0x000000010001c3a4
- (void)transcriptStackViewController:(id)arg1 willStartTest:(id)arg2;	// IMP=0x000000010001c3a0
- (void)transcriptStackViewController:(id)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2;	// IMP=0x000000010001c39c
- (void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c398
- (void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000010001c394
- (void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x000000010001c390
- (void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x000000010001c38c
- (void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3;	// IMP=0x000000010001c388
- (void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x000000010001c384
- (void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001c380
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2;	// IMP=0x000000010001c37c
- (void)transcriptStackViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x000000010001c378
- (void)transcriptStackViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x000000010001c374
- (void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x000000010001c370
- (void)transcriptStackViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x000000010001c36c
- (void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x000000010001c368
- (void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x000000010001c364
- (void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001c360
- (void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001c35c
- (void)stopSpeakingForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c358
- (void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001c354
- (void)cancelRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c350
- (void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5;	// IMP=0x000000010001c34c
- (void)transcriptStackViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x000000010001c348
- (void)transcriptStackViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010001c344
- (void)transcriptStackViewControllerWillBeginEditing:(id)arg1;	// IMP=0x000000010001c340
- (void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010001c33c
- (void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010001c338
- (void)transcriptStackViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x000000010001c334
- (void)transcriptStackViewControllerDidExitSiriland:(id)arg1;	// IMP=0x000000010001c330
- (void)transcriptStackViewControllerWillEnterSiriland:(id)arg1;	// IMP=0x000000010001c32c
- (CDStruct_a82615c4)keyboardInfoForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c2bc
- (unsigned long long)deviceLockStateForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c2b4
- (id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x000000010001c2ac
- (id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x000000010001c2a4
- (id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c29c
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x000000010001c294
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x000000010001c28c
- (_Bool)transcriptStackViewControllerShouldDelaySuggestions:(id)arg1;	// IMP=0x000000010001c284
- (void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001c1d4
- (long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c1cc
- (double)statusViewHeightForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c170
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c0f4
- (double)contentWidthForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c098
- (id)siriEnabledAppListForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c03c
- (id)domainObjectStoreForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c034
- (id)conversationForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c024
- (long long)siriStateForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001c01c
- (void)keyboardHeightDidChange;	// IMP=0x000000010001c004
- (void)_createGuideController;	// IMP=0x000000010001be34
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010001bda4
- (void)animateOut;	// IMP=0x000000010001bd04
- (void)showRootGuide;	// IMP=0x000000010001bcec
- (void)showGuideStart;	// IMP=0x000000010001bcd4
- (_Bool)isShowingGuide;	// IMP=0x000000010001bc88
- (void)showGuideAnimated:(_Bool)arg1;	// IMP=0x000000010001bb48
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001ba80
- (void)hideAcousticIDSpinner;	// IMP=0x000000010001ba40
- (void)showAcousticIDSpinner;	// IMP=0x000000010001ba00
- (void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3;	// IMP=0x000000010001b898
- (void)showEmptyView;	// IMP=0x000000010001b834
- (_Bool)isShowingUserNudge;	// IMP=0x000000010001b748
- (void)showUserNudge;	// IMP=0x000000010001b6c0
- (void)showGreeting;	// IMP=0x000000010001b63c
- (void)showUnavailable;	// IMP=0x000000010001b4b8
- (id)_nudgeHeaderText;	// IMP=0x000000010001b3c4
- (id)_initialHeaderText;	// IMP=0x000000010001b2d0
- (void)loadView;	// IMP=0x000000010001b210

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUISuggestionsView *view; // @dynamic view;

@end

