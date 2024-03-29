//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFQueueDelegate.h"
#import "SVSSuggestionsViewControllerDelegate.h"
#import "SVSTranscriptDataSource.h"
#import "SVSTranscriptDelegate.h"
#import "SVSTranscriptViewDelegate.h"
#import "SiriUIAceObjectViewControllerDelegate.h"
#import "SiriUIAceObjectViewControllerDelegatePrivate.h"
#import "SiriUISnippetViewControllerDelegate.h"
#import "SiriUISnippetViewControllerDelegatePrivate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSIndexPath, NSMutableDictionary, NSMutableSet, NSString, NSUUID, SAUIGetResponseAlternativesPlayback, SVSSuggestionsViewController, SVSTranscript, SVSTranscriptAnimationQueue, SVSTranscriptFlowLayout, SVSTranscriptView, SiriUITranscriptItem, UITapGestureRecognizer, UIViewController<SiriUIViewController>;

@interface SVSTranscriptViewController : UIViewController <AFQueueDelegate, SiriUISnippetViewControllerDelegate, SiriUISnippetViewControllerDelegatePrivate, SiriUIAceObjectViewControllerDelegate, SiriUIAceObjectViewControllerDelegatePrivate, SVSSuggestionsViewControllerDelegate, SVSTranscriptDataSource, SVSTranscriptDelegate, SVSTranscriptViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    long long _updateAnimationCount;	// 8 = 0x8
    _Bool _viewIsDisappearing;	// 16 = 0x10
    _Bool _isWaitingForSpeechStartPoint;	// 17 = 0x11
    _Bool _initialSpeechRecordingDidEnd;	// 18 = 0x12
    unsigned long long _displayedTranscriptItemCount;	// 24 = 0x18
    double _firstItemTopPadding;	// 32 = 0x20
    double _previousContentYOffset;	// 40 = 0x28
    NSMutableSet *_controllersTrackingScrollingEvent;	// 48 = 0x30
    double _contentOffsetPriorToDraggingY;	// 56 = 0x38
    UIViewController *_viewControllerToCallViewDidAppear;	// 64 = 0x40
    SAUIGetResponseAlternativesPlayback *_lastPlaybackCommand;	// 72 = 0x48
    long long _correctionScreenItemIndex;	// 80 = 0x50
    CDStruct_a82615c4 _keyboardInfo;	// 88 = 0x58
    long long _currentRequestSource;	// 136 = 0x88
    _Bool _viewIsInViewHierarchy;	// 144 = 0x90
    _Bool _didLoadConversationList;	// 145 = 0x91
    _Bool _showsTranscriptEndWhenVisible;	// 146 = 0x92
    id <SVSTranscriptViewControllerDataSource> _dataSource;	// 152 = 0x98
    id <SVSTranscriptViewControllerDelegate> _delegate;	// 160 = 0xa0
    SVSSuggestionsViewController *_suggestionsViewController;	// 168 = 0xa8
    SVSTranscriptFlowLayout *_layout;	// 176 = 0xb0
    SVSTranscript *_transcript;	// 184 = 0xb8
    SVSTranscriptAnimationQueue *_animationQueue;	// 192 = 0xc0
    SVSTranscriptAnimationQueue *_pinAnimationQueue;	// 200 = 0xc8
    double _lastAnimationTime;	// 208 = 0xd0
    double _lastPinAnimationTime;	// 216 = 0xd8
    double _currentPinMinimumDuration;	// 224 = 0xe0
    SiriUITranscriptItem *_currentPin;	// 232 = 0xe8
    NSMutableSet *_identifiersOfItemsWithPendingActions;	// 240 = 0xf0
    NSMutableSet *_identifiersOfItemsWithFinishedActions;	// 248 = 0xf8
    UIViewController<SiriUIViewController> *_editingViewController;	// 256 = 0x100
    UITapGestureRecognizer *_editingEndGestureRecognizer;	// 264 = 0x108
    NSIndexPath *_indexPathForPendingCellToAnimate;	// 272 = 0x110
    double _lastTranscriptDragStartTime;	// 280 = 0x118
    double _lastTranscriptEditingStartTime;	// 288 = 0x120
    NSMutableDictionary *_displayDateByTranscriptIdentifier;	// 296 = 0x128
}

@property(readonly, nonatomic, getter=_displayDateByTranscriptIdentifier) NSMutableDictionary *displayDateByTranscriptIdentifier; // @synthesize displayDateByTranscriptIdentifier=_displayDateByTranscriptIdentifier;
@property(nonatomic, getter=_lastTranscriptEditingStartTime, setter=_setLastTranscriptEditingStartTime:) double lastTranscriptEditingStartTime; // @synthesize lastTranscriptEditingStartTime=_lastTranscriptEditingStartTime;
@property(nonatomic, getter=_lastTranscriptDragStartTime, setter=_setLastTranscriptDragStartTime:) double lastTranscriptDragStartTime; // @synthesize lastTranscriptDragStartTime=_lastTranscriptDragStartTime;
@property(retain, nonatomic, getter=_indexPathForPendingCellToAnimate, setter=_setIndexPathForPendingCellToAnimate:) NSIndexPath *indexPathForPendingCellToAnimate; // @synthesize indexPathForPendingCellToAnimate=_indexPathForPendingCellToAnimate;
@property(nonatomic, getter=_showsTranscriptEndWhenVisible, setter=_setShowsTranscriptEndWhenVisible:) _Bool showsTranscriptEndWhenVisible; // @synthesize showsTranscriptEndWhenVisible=_showsTranscriptEndWhenVisible;
@property(retain, nonatomic, getter=_editingEndGestureRecognizer, setter=_setEditingEndGestureRecognizer:) UITapGestureRecognizer *editingEndGestureRecognizer; // @synthesize editingEndGestureRecognizer=_editingEndGestureRecognizer;
@property(retain, nonatomic, getter=_editingViewController, setter=_setEditingViewController:) UIViewController<SiriUIViewController> *editingViewController; // @synthesize editingViewController=_editingViewController;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithFinishedActions) NSMutableSet *identifiersOfItemsWithFinishedActions; // @synthesize identifiersOfItemsWithFinishedActions=_identifiersOfItemsWithFinishedActions;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithPendingActions) NSMutableSet *identifiersOfItemsWithPendingActions; // @synthesize identifiersOfItemsWithPendingActions=_identifiersOfItemsWithPendingActions;
@property(retain, nonatomic, getter=_currentPin, setter=_setCurrentPin:) SiriUITranscriptItem *currentPin; // @synthesize currentPin=_currentPin;
@property(nonatomic, getter=_currentPinMinimumDuration, setter=_setCurrentPinMinimumDuration:) double currentPinMinimumDuration; // @synthesize currentPinMinimumDuration=_currentPinMinimumDuration;
@property(nonatomic, getter=_lastPinAnimationTime, setter=_setLastPinAnimationTime:) double lastPinAnimationTime; // @synthesize lastPinAnimationTime=_lastPinAnimationTime;
@property(nonatomic, getter=_lastAnimationTime, setter=_setLastAnimationTime:) double lastAnimationTime; // @synthesize lastAnimationTime=_lastAnimationTime;
@property(readonly, nonatomic, getter=_pinAnimationQueue) SVSTranscriptAnimationQueue *pinAnimationQueue; // @synthesize pinAnimationQueue=_pinAnimationQueue;
@property(readonly, nonatomic, getter=_animationQueue) SVSTranscriptAnimationQueue *animationQueue; // @synthesize animationQueue=_animationQueue;
@property(nonatomic, getter=_didLoadConversationList, setter=_setDidLoadConversationList:) _Bool didLoadConversationList; // @synthesize didLoadConversationList=_didLoadConversationList;
@property(readonly, nonatomic, getter=_transcript) SVSTranscript *transcript; // @synthesize transcript=_transcript;
@property(readonly, nonatomic, getter=_layout) SVSTranscriptFlowLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic, getter=_suggestionsViewController) SVSSuggestionsViewController *suggestionsViewController; // @synthesize suggestionsViewController=_suggestionsViewController;
@property(nonatomic, getter=_viewIsInViewHierarchy, setter=_setViewIsInViewHierarchy:) _Bool viewIsInViewHierarchy; // @synthesize viewIsInViewHierarchy=_viewIsInViewHierarchy;
@property(nonatomic) __weak id <SVSTranscriptViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSTranscriptViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100017518
- (void)createPunchOutEvent:(id)arg1 URL:(id)arg2 appID:(id)arg3;	// IMP=0x0000000100017080
- (void)_logMetricsForSnippetAtIndexPath:(id)arg1;	// IMP=0x0000000100016ca4
- (void)_logMetricsForVisibleSnippets;	// IMP=0x0000000100016be4
- (id)mostRecentMetricsContext;	// IMP=0x0000000100016a98
- (void)siriStoppedFingerprintingMusic;	// IMP=0x0000000100016a80
- (void)siriBeganFingerprintingMusic;	// IMP=0x0000000100016a68
- (void)showSpeechAlternatives:(id)arg1;	// IMP=0x0000000100016788
- (void)handleGetResponseAlternativesPlayback:(id)arg1;	// IMP=0x00000001000163f4
- (void)changeUtterance:(id)arg1;	// IMP=0x0000000100016218
- (void)_animateSnippetConfirmation:(id)arg1;	// IMP=0x0000000100016148
- (void)_animateSnippetCancellation:(id)arg1;	// IMP=0x0000000100016078
- (id)_tossAnimationForCell;	// IMP=0x0000000100015e64
- (void)_animateSnippetTossInCell:(id)arg1;	// IMP=0x0000000100015d5c
- (void)_performNextAnimation;	// IMP=0x00000001000155f0
- (_Bool)_shouldConditionallyPinToTranscriptItem:(id)arg1;	// IMP=0x0000000100015038
- (void)_performNextPinAnimation;	// IMP=0x0000000100014d30
- (void)_processPinAnimationQueue;	// IMP=0x0000000100014a04
- (void)_scheduleNextPinAnimationAfterDelay:(double)arg1;	// IMP=0x0000000100014994
- (void)_processAnimationQueue;	// IMP=0x0000000100014644
- (void)_scheduleNextAnimationAfterDelay:(double)arg1;	// IMP=0x00000001000145d4
- (double)_nextPinAnimationTime;	// IMP=0x0000000100014370
- (double)_nextAnimationTime;	// IMP=0x0000000100014294
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;	// IMP=0x00000001000141d4
- (void)animateTranscriptWithUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000010001408c
- (double)_pinningDifferenceForTranscriptItem:(id)arg1;	// IMP=0x0000000100013fac
- (double)_topPaddingForTranscriptItem:(id)arg1;	// IMP=0x0000000100013ee4
- (double)_topPaddingForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100013d08
- (struct UIEdgeInsets)_requiredExtraSpaceToPinTranscriptItem:(id)arg1;	// IMP=0x0000000100013b00
- (void)_appendExtraSpaceToContentInsetsWithOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000139e0
- (void)_appendExtraSpaceToContentInsets;	// IMP=0x0000000100013988
- (void)_pinTranscriptToItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000137dc
- (void)_pinTranscriptToCurrentPin;	// IMP=0x000000010001378c
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000136c4
- (void)pinItemWithIdentifier:(id)arg1;	// IMP=0x000000010001361c
- (void)_tappedOutsideEditingView:(id)arg1;	// IMP=0x0000000100013514
- (void)_teardownEditingViewController:(id)arg1;	// IMP=0x0000000100013460
- (void)_setupEditingForViewController:(id)arg1;	// IMP=0x000000010001330c
- (id)_indexPathForFirstResponder;	// IMP=0x0000000100013060
- (void)_setKeyboardInfo:(CDStruct_a82615c4)arg1;	// IMP=0x0000000100012d04
- (id)_indexPathForItemAtIndex:(long long)arg1;	// IMP=0x0000000100012cec
- (id)_indexPathsForItemsAtIndexes:(id)arg1;	// IMP=0x0000000100012bc0
- (id)_transcriptItemForSiriViewController:(id)arg1;	// IMP=0x0000000100012a40
- (void)_registerReusableView:(Class)arg1;	// IMP=0x0000000100012648
- (id)_aceViewControllerIfExistsAtItemIndex:(long long)arg1;	// IMP=0x00000001000125cc
- (id)_snippetViewControllerIfExistsAtItemIndex:(long long)arg1;	// IMP=0x0000000100012550
- (id)_snippetViewControllerIfExistsForTranscriptItem:(id)arg1;	// IMP=0x00000001000124d0
- (id)_aceViewControllerIfExistsForTranscriptItem:(id)arg1;	// IMP=0x0000000100012450
- (id)_controllerForItemIndex:(long long)arg1;	// IMP=0x00000001000123cc
- (Class)aceControllerCellClass;	// IMP=0x00000001000123b8
- (Class)snippetControllerCellClass;	// IMP=0x00000001000123a4
- (double)_expectedWidthForItemIndex:(unsigned long long)arg1;	// IMP=0x0000000100012348
- (_Bool)_itemIndexIsInset:(unsigned long long)arg1;	// IMP=0x00000001000122e0
- (struct UIEdgeInsets)_edgeInsetsForItemIndex:(unsigned long long)arg1;	// IMP=0x0000000100012284
- (struct UIEdgeInsets)_transcriptItemLayoutMargins;	// IMP=0x0000000100012254
- (void)resumeTouchesIfNecessary;	// IMP=0x0000000100012168
- (void)cancelTouchesIfNecessary;	// IMP=0x000000010001207c
- (void)_updateKeylinesForScrollView:(id)arg1;	// IMP=0x0000000100011f54
- (void)_processHidingSnippetView:(id)arg1;	// IMP=0x0000000100011994
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100011934
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100011858
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000100011768
- (void)notifySnippetsEndDraggingEventForScrollView:(id)arg1;	// IMP=0x0000000100011618
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000100011554
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000100011500
- (double)_heightForFooterAtItemIndex:(long long)arg1;	// IMP=0x00000001000113e8
- (double)_heightForHeaderAtItemIndex:(long long)arg1;	// IMP=0x00000001000112d0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100010e5c
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000010001093c
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100010388
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010000f808
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010000f7f8
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010000f7f0
- (void)transcriptView:(id)arg1 didSetContentSize:(struct CGSize)arg2;	// IMP=0x000000010000f790
- (void)transcript:(id)arg1 performAceCommands:(id)arg2 conversationItemIdentifier:(id)arg3;	// IMP=0x000000010000f60c
- (void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010000f24c
- (void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3;	// IMP=0x000000010000ed64
- (void)transcript:(id)arg1 didReloadTranscriptItemsAtIndexes:(id)arg2;	// IMP=0x000000010000ec5c
- (void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3;	// IMP=0x000000010000e11c
- (id)_invalidIndexesToRemoveBeforeIndex:(long long)arg1;	// IMP=0x000000010000df40
- (void)transcript:(id)arg1 didDelayPresentationOfItemsWithConversationItemIdentifiers:(id)arg2;	// IMP=0x000000010000ded0
- (void)transcript:(id)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(id)arg2;	// IMP=0x000000010000de20
- (void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2;	// IMP=0x000000010000d314
- (void)_removeConversationItemWithIdentifier:(id)arg1;	// IMP=0x000000010000d2c0
- (void)_removeConversationItemsWithIdentifiers:(id)arg1;	// IMP=0x000000010000d250
- (void)_updateTitle;	// IMP=0x000000010000d010
- (id)viewControllerDelegateForTranscript:(id)arg1;	// IMP=0x000000010000d00c
- (_Bool)transcript:(id)arg1 itemIsRestoredAtIndex:(long long)arg2;	// IMP=0x000000010000cfb8
- (long long)transcript:(id)arg1 presentationStateForItemAtIndex:(long long)arg2;	// IMP=0x000000010000cf68
- (id)transcript:(id)arg1 aceObjectForItemAtIndex:(long long)arg2;	// IMP=0x000000010000cf10
- (_Bool)transcript:(id)arg1 itemAtIndexIsVirgin:(long long)arg2;	// IMP=0x000000010000cec0
- (id)transcript:(id)arg1 aceCommandIdentifierForItemAtIndex:(long long)arg2;	// IMP=0x000000010000ce68
- (id)transcript:(id)arg1 dialogPhaseForItemAtIndex:(long long)arg2;	// IMP=0x000000010000ce58
- (id)transcript:(id)arg1 identifierOfItemAtIndex:(long long)arg2;	// IMP=0x000000010000ce00
- (id)_aceCommandIdentifierForItemAtIndex:(long long)arg1;	// IMP=0x000000010000cdac
- (id)_dialogPhaseForItemAtIndex:(long long)arg1;	// IMP=0x000000010000cd58
- (id)_conversationItemAtIndex:(long long)arg1;	// IMP=0x000000010000ccfc
- (long long)numberOfItemsInTranscript:(id)arg1;	// IMP=0x000000010000ccb0
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(id)arg1;	// IMP=0x000000010000cc40
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x000000010000cbe4
- (id)siriEnabledAppListForSuggestionsController:(id)arg1;	// IMP=0x000000010000cb88
- (void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000cad8
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x000000010000cacc
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x000000010000ca50
- (void)suggestionsViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010000c9e0
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x000000010000c998
- (void)cancelSpeakingForSiriViewController:(id)arg1;	// IMP=0x000000010000c950
- (void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c8fc
- (void)_speakText:(id)arg1 isPhonetic:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c860
- (double)boundingWidthForSnippetViewController:(id)arg1;	// IMP=0x000000010000c780
- (unsigned long long)navigationIndexOfSnippetViewController:(id)arg1;	// IMP=0x000000010000c6e0
- (id)siriEnabledAppListForSiriViewController:(id)arg1;	// IMP=0x000000010000c684
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id)arg1;	// IMP=0x000000010000c630
- (void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c5c0
- (void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c534
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000c4ac
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000c44c
- (void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x000000010000c3f4
- (void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x000000010000c384
- (void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x000000010000c314
- (void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x000000010000c2a4
- (void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x000000010000c234
- (void)siriViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;	// IMP=0x000000010000c1dc
- (void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x000000010000c184
- (void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010000c114
- (id)persistentStoreForSiriViewController:(id)arg1;	// IMP=0x000000010000c0c0
- (id)persistentDataStoreForSiriViewController:(id)arg1;	// IMP=0x000000010000bfd8
- (void)cancelRequestForSiriSnippetViewController:(id)arg1;	// IMP=0x000000010000bf90
- (void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000010000bf04
- (_Bool)siriSnippetViewControllerIsVisible:(id)arg1;	// IMP=0x000000010000bb4c
- (void)siriSnippetViewControllerViewDidLoad:(id)arg1;	// IMP=0x000000010000bae0
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;	// IMP=0x000000010000ba98
- (double)siriSnippetViewControllerExpectedWidth:(id)arg1;	// IMP=0x000000010000ba8c
- (void)siriViewController:(id)arg1 setContentOffset:(double)arg2;	// IMP=0x000000010000b908
- (struct UIEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1;	// IMP=0x000000010000b8f4
- (double)statusBarHeightForSiriViewController:(id)arg1;	// IMP=0x000000010000b8d8
- (struct UIEdgeInsets)siriViewControllerBackgroundInsets:(id)arg1;	// IMP=0x000000010000b79c
- (struct CGSize)siriViewControllerVisibleContentArea:(id)arg1;	// IMP=0x000000010000b728
- (double)siriViewControllerExpectedWidth:(id)arg1;	// IMP=0x000000010000b5fc
- (_Bool)_inTextInputMode;	// IMP=0x000000010000b5a8
- (_Bool)inTextInputModeForSuggestionsViewController:(id)arg1;	// IMP=0x000000010000b59c
- (_Bool)inTextInputModeForSiriViewController:(id)arg1;	// IMP=0x000000010000b584
- (void)siriViewControllerHeightDidChange:(id)arg1;	// IMP=0x000000010000b14c
- (void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(_Bool)arg2;	// IMP=0x000000010000b140
- (void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;	// IMP=0x000000010000acf4
- (id)localeForSiriViewController:(id)arg1;	// IMP=0x000000010000ac90
- (void)removeSiriViewController:(id)arg1;	// IMP=0x000000010000ac1c
- (void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;	// IMP=0x000000010000a9d4
- (void)siriViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010000a7f8
- (void)siriViewControllerRequestTearDownEditingViewController:(id)arg1;	// IMP=0x000000010000a7ec
- (void)siriViewControllerWillBeginEditing:(id)arg1;	// IMP=0x000000010000a6bc
- (void)siriViewControllerRequestToPin:(id)arg1;	// IMP=0x000000010000a614
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x000000010000a5c0
- (void)siriDidReceiveViewsWithDialogPhase:(id)arg1;	// IMP=0x000000010000a438
- (void)showCorrectionScreenForSiriViewController:(id)arg1;	// IMP=0x000000010000a25c
- (_Bool)shouldEnableInteractionForSiriViewController:(id)arg1;	// IMP=0x0000000100009f98
- (void)siriViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x0000000100009f50
- (void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;	// IMP=0x0000000100009e44
- (id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;	// IMP=0x0000000100009dc0
- (id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;	// IMP=0x0000000100009d20
- (id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2;	// IMP=0x0000000100009c9c
- (id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;	// IMP=0x0000000100009b70
- (_Bool)siriViewController:(id)arg1 openPunchOut:(id)arg2;	// IMP=0x0000000100009a88
- (void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;	// IMP=0x0000000100009924
- (id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;	// IMP=0x00000001000097d4
- (id)_domainObjectStore;	// IMP=0x0000000100009778
- (void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2;	// IMP=0x00000001000095b0
- (id)updatedUserUtteranceForSiriViewController:(id)arg1;	// IMP=0x00000001000094e0
- (id)additionalSpeechInterpretationsForSiriViewController:(id)arg1;	// IMP=0x0000000100009410
- (void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000092d0
- (_Bool)siriViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x0000000100009274
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008a6c
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2;	// IMP=0x0000000100008a18
- (_Bool)_containStartRequest:(id)arg1;	// IMP=0x0000000100008858
- (_Bool)logTranscriptContents;	// IMP=0x00000001000086c8
- (id)requestContext;	// IMP=0x00000001000085bc
- (void)siriDidDetectSpeechStartpoint;	// IMP=0x00000001000083d8
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x000000010000836c
- (void)siriRequestWillStart;	// IMP=0x0000000100008274
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1;	// IMP=0x0000000100008128
- (void)presentationStateDidChangeForItemsAtIndexes:(id)arg1;	// IMP=0x00000001000080bc
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2;	// IMP=0x0000000100008034
- (void)reloadItemsAtIndexes:(id)arg1;	// IMP=0x0000000100007fc8
- (void)insertItemsAtIndexes:(id)arg1;	// IMP=0x0000000100007f2c
- (void)reloadData;	// IMP=0x0000000100007cd4
@property(readonly, nonatomic) _Bool transcriptIsAnimating;
- (void)restoreTranscriptPositionAnimated:(_Bool)arg1;	// IMP=0x0000000100007a30
- (void)saveTranscriptPosition;	// IMP=0x00000001000078a0
- (void)showTranscriptEnd;	// IMP=0x0000000100007814
- (void)showTranscriptStart;	// IMP=0x000000010000772c
@property(readonly, nonatomic) _Bool transcriptEndIsVisible;
@property(readonly, nonatomic) _Bool transcriptStartIsVisible;
- (struct CGPoint)_maxContentOffset;	// IMP=0x000000010000758c
- (double)_contentHeight;	// IMP=0x0000000100007518
- (struct CGPoint)_contentOffset;	// IMP=0x00000001000074bc
@property(readonly, nonatomic) NSUUID *identifierOfLastDisplayedItem;
- (void)_showSuggestionsIfNecessary;	// IMP=0x0000000100006ff8
- (void)_stopShowingListeningNudgeIfNecessary;	// IMP=0x0000000100006f64
- (void)_showListeningNudgeIfNecessary;	// IMP=0x0000000100006e60
- (void)keyboardHeightDidChange;	// IMP=0x0000000100006d7c
- (void)statusBarFrameDidChange;	// IMP=0x0000000100006d70
- (double)_bottomContentOverlayHeight;	// IMP=0x0000000100006d30
- (double)_bottomMarginHeight;	// IMP=0x0000000100006cd4
- (_Bool)_isKeyboardVisibleAboveSiriStatusView;	// IMP=0x0000000100006c7c
- (void)_updateViewTopMarginHeight;	// IMP=0x0000000100006b50
- (void)_updateNavigationBarFrame;	// IMP=0x0000000100006a0c
- (_Bool)_isNavigationBarHidden;	// IMP=0x00000001000069c0
- (id)_navigationBar;	// IMP=0x000000010000696c
- (void)_updateStatusBarRelatedAttributes;	// IMP=0x0000000100006938
- (struct CGRect)_statusBarFrame;	// IMP=0x00000001000068bc
- (id)_conversationItemList;	// IMP=0x0000000100006860
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x0000000100006720
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x00000001000065ec
- (void)siriDidDeactivate;	// IMP=0x0000000100006528
- (_Bool)currentSnippetContainsFooterButtons;	// IMP=0x0000000100006408
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x00000001000062b4
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x00000001000061d0
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x0000000100006180
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100006090
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100005f8c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100005ddc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000587c
- (void)_runSirilandTransitionTestWithIterations:(int)arg1;	// IMP=0x0000000100005800
- (_Bool)_isRootViewController;	// IMP=0x0000000100005778
- (double)_navigationControllerContentOffsetAdjustment;	// IMP=0x0000000100005770
- (void)_setNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets)arg1;	// IMP=0x000000010000576c
- (id)_collectionView;	// IMP=0x0000000100005718
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100005584
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000054cc
- (void)viewDidLoad;	// IMP=0x0000000100005300
- (void)loadView;	// IMP=0x0000000100005088
- (void)dealloc;	// IMP=0x0000000100004fac
- (void)invalidate;	// IMP=0x0000000100004f6c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100004d38
- (void)svscvc_setItemIdentifier:(id)arg1;	// IMP=0x000000010004ae28
- (id)svscvc_itemIdentifier;	// IMP=0x000000010004ae1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SVSTranscriptView *view; // @dynamic view;

@end

