/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardLayout.h>
#import <UIKit/UIKBEmojiHitTestResponder.h>
#import <UIKit/UIKeyboardHandBiasTransitionCoordinatorDelegate.h>
#import <UIKit/UIKeyboardPinchGestureRecognizerDelegate.h>

@class UIKBTree, NSString, UIKBKeyplaneView, UIKBBackgroundView, UIKBKeyViewAnimator, UIKeyboardEmojiKeyDisplayController, NSMutableDictionary, NSMutableSet, UISwipeGestureRecognizer, UIKeyboardPinchGestureRecognizer, UIKeyboardSplitTransitionView, CADisplayLink, UIDelayedAction, UIKeyboardHandBiasTransitionCoordinator, UIView, NSTimer, _UIKeyboardTypingSpeedLogger, UIKBRenderConfig, NSMutableArray, NSNumber, NSDate, UIGestureKeyboardIntroduction, UIButton, NSLayoutConstraint;

@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder, UIKeyboardHandBiasTransitionCoordinatorDelegate, UIKeyboardPinchGestureRecognizerDelegate> {

	UIKBTree* _keyboard;
	UIKBTree* _keyplane;
	NSString* _keyboardName;
	NSString* _keyplaneName;
	long long _appearance;
	UIKBTree* _activeKey;
	UIKBTree* _inactiveLanguageIndicator;
	UIKBKeyplaneView* _keyplaneView;
	UIKBBackgroundView* _backgroundView;
	UIKBKeyViewAnimator* _keyViewAnimator;
	UIKeyboardEmojiKeyDisplayController* _emojiKeyManager;
	double _prevTouchUpTime;
	double _prevTouchUpFinishedTime;
	double _prevTouchDownTime;
	unsigned long long _prevUpActions;
	NSMutableDictionary* _keyboards;
	NSMutableDictionary* _allKeyplaneViews;
	NSMutableSet* _allKeyplaneKeycaps;
	NSMutableSet* _validInputStrings;
	NSString* _localizedInputKey;
	CFDictionaryRef _extendedTouchInfoMap;
	int _preferredTrackingChangeCount;
	int _shiftTrackingChangeCount;
	NSMutableSet* _accentInfo;
	NSMutableSet* _hasAccents;
	id _spaceTarget;
	SEL _spaceAction;
	SEL _spaceLongAction;
	id _returnTarget;
	SEL _returnAction;
	SEL _returnLongAction;
	id _deleteTarget;
	SEL _deleteAction;
	SEL _deleteLongAction;
	BOOL _shift;
	BOOL _autoshift;
	BOOL _settingShift;
	BOOL _holdingShift;
	BOOL _didLongPress;
	NSString* _preTouchKeyplaneName;
	BOOL _revertKeyplaneAfterTouch;
	BOOL _wasShifted;
	BOOL _swipeDetected;
	BOOL _showIntlKey;
	BOOL _showDictationKey;
	BOOL _suppressDeactivateKeys;
	BOOL _suppressShiftKeyplaneAnimation;
	BOOL _isTrackpadMode;
	BOOL _shiftLockReady;
	double _shiftLockFirstTapTime;
	UISwipeGestureRecognizer* _rightSwipeRecognizer;
	UISwipeGestureRecognizer* _leftSwipeRecognizer;
	UISwipeGestureRecognizer* _upSwipeRecognizer;
	UIKeyboardPinchGestureRecognizer* _pinchGestureRecognizer;
	NSMutableDictionary* _activeKeyplaneTransitions;
	UIKeyboardSplitTransitionView* _transitionView;
	double _initialSplitProgress;
	double _finalSplitProgress;
	double _autoSplitLastUpdate;
	double _autoSplitElapsedTime;
	CADisplayLink* _displayLink;
	BOOL _ghostKeysEnabled;
	UIDelayedAction* _delayedCentroidUpdate;
	BOOL _isRebuilding;
	long long _currentHandBias;
	UIKeyboardHandBiasTransitionCoordinator* _handBiasTransitionCoordinator;
	NSString* _layoutTag;
	BOOL _preRotateShift;
	NSString* _preRotateKeyplaneName;
	BOOL _preRotateTrackpadMode;
	UIDelayedAction* _multitapAction;
	BOOL _unshiftAfterMultitap;
	int _multitapCount;
	UIKBTree* _multitapKey;
	UIView* _flickPopupView;
	NSMutableDictionary* _compositeImages;
	NSTimer* _flickPopuptimer;
	id _touchInfo;
	UIView* _dimKeyboardImageView;
	BOOL _keyboardImageViewIsDim;
	BOOL _isOutOfBounds;
	BOOL _inDealloc;
	NSMutableSet* _keysUnderIndicator;
	_UIKeyboardTypingSpeedLogger* _typingSpeedLogger;
	UIKBRenderConfig* _passcodeRenderConfig;
	long long _setKeyplaneViewCount;
	BOOL _inputTraitsPreventInitialReuse;
	BOOL _settingFloat;
	NSMutableSet* _leftKeySet;
	NSMutableSet* _rightKeySet;
	CGPoint _leftDriftOffset;
	CGPoint _rightDriftOffset;
	NSMutableArray* _leftSideReachability;
	NSMutableArray* _rightSideReachability;
	NSNumber* _homeRowHint;
	double _touchDownTimeSpan;
	NSDate* _prevTouchMoreKeyTime;
	NSString* _lastInputMode;
	BOOL _pendingDictationReload;
	BOOL _hasPeekedGestureKey;
	BOOL _lastInputIsGestureKey;
	UIGestureKeyboardIntroduction* _gestureKeyboardIntroduction;
	BOOL _dictationUsingServerManualEndpointing;
	UIButton* _biasEscapeButton;
	NSLayoutConstraint* _biasEscapeButtonLeftConstraint;
	NSLayoutConstraint* _biasEscapeButtonRightConstraint;
	NSMutableSet* _keyplaneTransformations;
	BOOL _externalDictationAndInternationalKeys;
	BOOL _muteNextKeyClickSound;
	int playKeyClickSoundOn;
	UIKBRenderConfig* _renderConfig;
	UIView* _modalDisplayView;
	double _lastTwoFingerTapTimestamp;

}

@property (assign,nonatomic) int playKeyClickSoundOn; 
@property (assign,nonatomic) BOOL muteNextKeyClickSound;                     //@synthesize muteNextKeyClickSound=_muteNextKeyClickSound - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyboard;                          //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyplane;                          //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,copy) NSString * keyboardName;                          //@synthesize keyboardName=_keyboardName - In the implementation block
@property (nonatomic,copy) NSString * keyplaneName;                          //@synthesize keyplaneName=_keyplaneName - In the implementation block
@property (nonatomic,readonly) NSString * localizedInputMode; 
@property (nonatomic,copy) NSString * localizedInputKey;                     //@synthesize localizedInputKey=_localizedInputKey - In the implementation block
@property (nonatomic,retain) UIKBTree * activeKey;                           //@synthesize activeKey=_activeKey - In the implementation block
@property (assign,nonatomic) BOOL shift;                                     //@synthesize shift=_shift - In the implementation block
@property (assign,nonatomic) BOOL autoShift;                                 //@synthesize autoshift=_autoshift - In the implementation block
@property (assign,nonatomic) BOOL didLongPress;                              //@synthesize didLongPress=_didLongPress - In the implementation block
@property (getter=isRotating,nonatomic,readonly) BOOL rotating; 
@property (nonatomic,readonly) BOOL showsInternationalKey;                   //@synthesize showIntlKey=_showIntlKey - In the implementation block
@property (nonatomic,readonly) BOOL showsDictationKey;                       //@synthesize showDictationKey=_showDictationKey - In the implementation block
@property (nonatomic,copy) NSString * preTouchKeyplaneName;                  //@synthesize preTouchKeyplaneName=_preTouchKeyplaneName - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) NSString * layoutTag;                           //@synthesize layoutTag=_layoutTag - In the implementation block
@property (nonatomic,retain) UIView * modalDisplayView;                      //@synthesize modalDisplayView=_modalDisplayView - In the implementation block
@property (assign,nonatomic) double lastTwoFingerTapTimestamp;               //@synthesize lastTwoFingerTapTimestamp=_lastTwoFingerTapTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)accessibilitySensitivityChanged;
+(id)keyboardWithName:(id)arg1 screenTraits:(id)arg2 ;
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
+(id)keyboardFromFactoryWithName:(id)arg1 screen:(id)arg2 ;
+(id)sharedRivenKeyplaneGenerator;
+(id)sharedPunctuationCharacterSet;
+(Class)_subclassForScreenTraits:(id)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(UIKBTree *)keyboard;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(id)currentKeyplane;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(BOOL)isRotating;
-(long long)currentHandBias;
-(double)biasedKeyboardWidthRatio;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(double)lastTouchDownTimestamp;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(void)setKeyboardBias:(long long)arg1 ;
-(void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg1 clearingDimming:(BOOL)arg2 ;
-(void)setKeyboardDim:(BOOL)arg1 amount:(double)arg2 withDuration:(double)arg3 ;
-(UIKBRenderConfig *)renderConfig;
-(void)deactivateActiveKeys;
-(NSString *)keyboardName;
-(id)currentKeyplaneView;
-(void)updateGlobeKeyAndLayoutOriginBeforeSnapshotForInputView:(id)arg1 ;
-(void)finishSplitTransitionWithProgress:(double)arg1 ;
-(void)setDisableInteraction:(BOOL)arg1 ;
-(void)setLayoutTag:(NSString *)arg1 ;
-(NSString *)layoutTag;
-(id)keyplaneForKey:(id)arg1 ;
-(BOOL)usesAutoShift;
-(BOOL)isAlphabeticPlane;
-(BOOL)diacriticForwardCompose;
-(BOOL)isShiftKeyPlaneChooser;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(id)createKeyEventForStringAction:(id)arg1 forKey:(id)arg2 inputFlags:(int)arg3 ;
-(id)keyViewAnimator;
-(void)dismissGestureKeyboardIntroduction;
-(UIKBTree *)keyplane;
-(id)candidateList;
-(void)logHandwritingData;
-(CGSize)stretchFactor;
-(id)emojiKeyManager;
-(int)stateForKey:(id)arg1 ;
-(void)accessibilitySensitivityChanged;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)setKeyboardName:(id)arg1 appearance:(long long)arg2 ;
-(void)setKeyplaneName:(NSString *)arg1 ;
-(id)keyHitTest:(CGPoint)arg1 ;
-(BOOL)shouldShowDictationKey;
-(int)stateForKeyplaneSwitchKey:(id)arg1 ;
-(void)longPressAction;
-(unsigned long long)downActionFlagsForKey:(id)arg1 ;
-(BOOL)keyHasAccentedVariants:(id)arg1 ;
-(UIKBTree *)activeKey;
-(void)setActiveKey:(UIKBTree *)arg1 ;
-(BOOL)shouldHitTestKey:(id)arg1 ;
-(void)multitapExpired;
-(void)setToInitialKeyplane;
-(BOOL)canMultitap;
-(void)touchMultitapTimer;
-(void)setKeyboardDim:(BOOL)arg1 ;
-(void)flushKeyCache:(id)arg1 ;
-(BOOL)shouldAllowCurrentKeyplaneReload;
-(BOOL)shouldMatchCaseForDomainKeys;
-(BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1 ;
-(BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2 ;
-(unsigned char)getHandRestRecognizerState;
-(BOOL)supportsEmoji;
-(BOOL)shouldUseDefaultShiftStateFromLayout;
-(BOOL)ignoresShiftState;
-(unsigned long long)targetEdgesForScreenGestureRecognition;
-(BOOL)shouldMergeKey:(id)arg1 ;
-(int)stateForCandidateListKey:(id)arg1 ;
-(long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 ;
-(void)endMultitapForKey:(id)arg1 ;
-(BOOL)shouldDeactivateWithoutWindow;
-(void)installGestureRecognizers;
-(void)refreshForDictationAvailablityDidChange;
-(void)nextToUseInputModeDidChange:(id)arg1 ;
-(void)uninstallGestureRecognizers;
-(void)cancelMultitapTimer;
-(void)clearTransientState;
-(UIView *)modalDisplayView;
-(void)setModalDisplayView:(UIView *)arg1 ;
-(void)cancelDelayedCentroidUpdate;
-(BOOL)pinchDetected;
-(void)clearAllTouchInfo;
-(void)handleDismissFlickView:(id)arg1 ;
-(void)setPreTouchKeyplaneName:(NSString *)arg1 ;
-(id)defaultNameForKeyplaneName:(id)arg1 ;
-(id)splitNameForKeyplaneName:(id)arg1 ;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(CGRect)frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2 ;
-(void)tearDownSplitTransitionView;
-(int)visualStyleForKeyboardIfSplit:(BOOL)arg1 ;
-(void)updateBackgroundIfNeeded;
-(BOOL)allKeyplanesHaveSameHeight;
-(NSString *)localizedInputMode;
-(void)setLocalizedInputKey:(NSString *)arg1 ;
-(void)refreshForRivenPreferences;
-(void)updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)arg1 withInputMode:(id)arg2 ;
-(int)displayTypeHintForShiftKey;
-(int)displayTypeHintForMoreKey;
-(void)updateInputModeLocalizedKeysForKeyplane:(id)arg1 ;
-(void)updateAutolocalizedKeysForKeyplane:(id)arg1 ;
-(void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1 ;
-(void)setPercentSignKeysForCurrentLocaleOnKeyplane:(id)arg1 ;
-(void)updateLocalizedKeysForKeyplane:(id)arg1 updateAllKeyplanes:(BOOL)arg2 ;
-(void)updateLocalizedKeysOnKeyplane:(id)arg1 ;
-(id)keyplaneNamed:(id)arg1 ;
-(id)cacheTokenForKeyplane:(id)arg1 caseAlternates:(BOOL)arg2 ;
-(void)showSplitTransitionView:(BOOL)arg1 ;
-(CGImageRef)cachedCompositeImageWithCacheKey:(id)arg1 ;
-(CGImageRef)renderedImageWithStateFallbacksForToken:(id)arg1 ;
-(void)willBeginIndirectSelectionGesture:(BOOL)arg1 ;
-(void)willBeginIndirectSelectionGesture;
-(void)clearHandwritingStrokesIfNeededAndNotify:(BOOL)arg1 ;
-(BOOL)isEmojiKeyplane;
-(void)cancelTouchesForTwoFingerTapGesture:(id)arg1 ;
-(void)didEndIndirectSelectionGesture:(BOOL)arg1 ;
-(void)didEndIndirectSelectionGesture;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(BOOL)handwritingPlane;
-(id)keyHitTestClosestToPoint:(CGPoint)arg1 ;
-(void)setLastTwoFingerTapTimestamp:(double)arg1 ;
-(BOOL)globeKeyDisplaysAsEmojiKey;
-(BOOL)stretchKeyboardToFitKeyplane:(id)arg1 ;
-(BOOL)_shouldAttemptToAddSupplementaryControlKeys;
-(BOOL)stretchKeyboardToFit;
-(double)stretchFactorHeight;
-(BOOL)hasCandidateKeys;
-(BOOL)_allowPaddle;
-(BOOL)canReuseKeyplaneView;
-(void)updateKeyCentroids;
-(unsigned long long)keyplaneShiftState;
-(id)splitNameForKeyplane:(id)arg1 ;
-(void)_setBiasEscapeButtonVisible:(BOOL)arg1 ;
-(void)updateKeyboardForKeyplane:(id)arg1 ;
-(id)defaultKeyplaneForKeyplane:(id)arg1 ;
-(void)clearKeyAnnotationsIfNecessary;
-(void)annotateKeysWithDeveloperPunctuation;
-(void)mergeKeysIfNeeded;
-(void)updateLocalizedKeys:(BOOL)arg1 ;
-(id)cacheIdentifierForKeyplaneNamed:(id)arg1 ;
-(int)stateForShiftKey:(id)arg1 ;
-(int)stateForMultitapReverseKey:(id)arg1 ;
-(int)stateForDictationKey:(id)arg1 ;
-(int)stateForStylingKey:(id)arg1 ;
-(int)stateForManipulationKey:(id)arg1 ;
-(void)_updateSupplementaryKeys;
-(void)updateLayoutTags;
-(void)updateCachedKeyplaneKeycaps;
-(void)updateGlobeKeyDisplayString;
-(void)rebuildSplitTransitionView;
-(BOOL)is10KeyRendering;
-(BOOL)useDismissForMessagesWriteboard;
-(BOOL)useUndoForMessagesWriteboard;
-(void)_setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(void)updateTransitionWithFlags:(unsigned long long)arg1 ;
-(BOOL)_stringContainsCurrencyCharacters:(id)arg1 ;
-(void)updateCurrencySymbolForKey:(id)arg1 withCurrencyString:(id)arg2 ;
-(id)keyWithRepresentedString:(id)arg1 ;
-(BOOL)supportStylingWithKey:(id)arg1 ;
-(void)setTextEditingTraits:(id)arg1 ;
-(id)highlightedVariantListForStylingKey:(id)arg1 ;
-(void)_addExtraControlKeysIfNecessary;
-(void)annotateWriteboardDisplayTypeHintForKeyIfNeeded;
-(void)updateMoreAndInternationalKeys;
-(void)_swapGlobeAndMoreKeysIfNecessary;
-(void)relayoutForWriteboardKey;
-(void)updateReturnKeysIfNeeded;
-(id)_currentKeyplaneTransformationContext;
-(NSString *)keyplaneName;
-(id)inputModeToMergeCapsLockKey;
-(id)keylistContainingKey:(id)arg1 ;
-(BOOL)ignoreWriteboard;
-(BOOL)showsInternationalKey;
-(BOOL)showsDictationKey;
-(void)cleanupPreviousKeyboardWithNewInputTraits:(id)arg1 ;
-(BOOL)pinchSplitGestureEnabled;
-(id)initialKeyplaneNameWithKBStarName:(id)arg1 ;
-(id)keyViewHitTestForPoint:(CGPoint)arg1 ;
-(id)keyHitTestContainingPoint:(CGPoint)arg1 ;
-(id)keyHitTestWithoutCharging:(CGPoint)arg1 ;
-(int)keycodeForKey:(id)arg1 ;
-(BOOL)canProduceString:(id)arg1 ;
-(BOOL)isShiftKeyBeingHeld;
-(BOOL)isLongPressedKey:(id)arg1 ;
-(id)currentRepresentedStringForDualDisplayKey:(id)arg1 ;
-(BOOL)isDeadkeyInput:(id)arg1 ;
-(void)updatePhysicalKeyboardEvent:(id)arg1 withMarkedInput:(id)arg2 ;
-(id)multitapCompleteKeys;
-(void)setShift:(BOOL)arg1 ;
-(void)multitapInterrupted;
-(void)handleMultitapTimerFired;
-(id)activeMultitapCompleteKey;
-(void)didClearInput;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)restoreDefaultsForKey:(id)arg1 ;
-(id)touchInfoForKey:(id)arg1 ;
-(void)deactivateActiveKey;
-(void)showPopupVariantsForKey:(id)arg1 ;
-(void)showMenu:(id)arg1 forKey:(id)arg2 ;
-(void)playKeyClickSoundForKey:(id)arg1 ;
-(void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(id)_appendingSecondaryStringToVariantsTop:(id)arg1 secondaryString:(id)arg2 withDirection:(id)arg3 ;
-(id)_keyplaneVariantsKeyForString:(id)arg1 ;
-(id)_variantsByAppendingDualStringKey:(id)arg1 toVariants:(id)arg2 ;
-(unsigned long long)upActionFlagsForKey:(id)arg1 ;
-(id)handRestRecognizerGetHomeRowHint;
-(id)getSortedKeysForDisplayRowHint:(int)arg1 ;
-(CGSize)handRestRecognizerStandardKeyPixelSize;
-(void)setMuteNextKeyClickSound:(BOOL)arg1 ;
-(CGPoint)getCenterForKeyUnderLeftIndexFinger;
-(void)setNeedsVirtualDriftUpdate;
-(void)resetHRRLayoutState;
-(void)_didTapBiasEscapeButton:(id)arg1 ;
-(void)prepareForSplitTransition;
-(void)setPlayKeyClickSoundOn:(int)arg1 ;
-(void)finishSplitTransitionWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSplitWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSplitTransition;
-(id)infoForTouchUUID:(id)arg1 ;
-(void)setSplitProgress:(double)arg1 ;
-(void)clearInfoForTouch:(id)arg1 ;
-(void)_autoSplit:(id)arg1 ;
-(double)hitBuffer;
-(BOOL)_handleTouchForEmojiInputView;
-(BOOL)_pointAllowedInStaticHitBuffer:(CGPoint)arg1 ;
-(double)lastTouchUpTimestamp;
-(CGRect)_paddedKeyUnionFrame;
-(double)lastTwoFingerTapTimestamp;
-(id)generateInfoForTouch:(id)arg1 ;
-(void)completeHitTestForTouchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)performHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2 executionContextPassingUIKBTree:(id)arg3 ;
-(void)calculateReachabilityScoreWithKey:(id)arg1 keyError:(CGPoint)arg2 ;
-(id)flickPopupStringForKey:(id)arg1 withString:(id)arg2 ;
-(void)handlePopupView:(id)arg1 ;
-(void)touchDownWithKey:(id)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(BOOL)muteNextKeyClickSound;
-(int)playKeyClickSoundOn;
-(BOOL)isKeyScriptSwitchKey:(id)arg1 ;
-(BOOL)shouldSkipResponseToGlobeKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)hideMenu:(id)arg1 forKey:(id)arg2 ;
-(void)updateSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 withPoint:(CGPoint)arg3 ;
-(BOOL)isMultitapKey:(id)arg1 ;
-(void)playKeyClickSoundOnDownForKey:(id)arg1 ;
-(BOOL)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned long long)arg1 ;
-(void)incrementPunctuationIfNeeded:(id)arg1 ;
-(void)completeSendStringActionForTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(BOOL)shouldShowGestureKeyboardIntroduction;
-(NSString *)preTouchKeyplaneName;
-(id)keyplaneNameForRevertAfterTouch;
-(void)downActionShiftWithKey:(id)arg1 ;
-(void)refreshDualStringKeys;
-(BOOL)showGestureKeyboardIntroductionIfNeeded;
-(id)synthesizeTouchUpEventForKey:(id)arg1 ;
-(void)completeDeleteActionForTouchDownWithActions:(unsigned long long)arg1 executionContext:(id)arg2 ;
-(BOOL)canForceTouchUUIDCommit:(id)arg1 inWindow:(id)arg2 ;
-(id)infoForTouch:(id)arg1 ;
-(BOOL)touchPassesDragThreshold:(id)arg1 ;
-(void)updatePanAlternativesForTouchInfo:(id)arg1 ;
-(BOOL)handleFlick:(id)arg1 ;
-(BOOL)shouldRetestTouchDraggedFromKey:(id)arg1 ;
-(void)completeHitTestForTouchDragged:(id)arg1 hitKey:(id)arg2 ;
-(void)refreshGhostKeyState;
-(void)resetPanAlternativesForEndedTouch:(id)arg1 ;
-(id)activeTouchInfoForShift;
-(void)completeRetestForTouchUp:(id)arg1 timestamp:(double)arg2 interval:(double)arg3 executionContext:(id)arg4 ;
-(BOOL)shouldSendTouchUpToInputManager:(id)arg1 ;
-(void)presentModalDisplayForKey:(id)arg1 ;
-(BOOL)shouldSendStringForFlick:(id)arg1 ;
-(id)flickStringForInputKey:(id)arg1 direction:(int)arg2 ;
-(void)_recordKeystrokeStatisticForKeyPress;
-(void)completeSendStringActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(BOOL)shouldYieldToControlCenterForFlickWithInitialPoint:(CGPoint)arg1 finalPoint:(CGPoint)arg2 ;
-(void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(void)fadeMenu:(id)arg1 forKey:(id)arg2 ;
-(void)setAutoshift:(BOOL)arg1 ;
-(void)upActionShift;
-(void)fadeMenu:(id)arg1 forKey:(id)arg2 withDelay:(double)arg3 ;
-(void)setMultitapReverseKeyState;
-(void)handleKeyboardMenusForTouch:(id)arg1 ;
-(void)touchCancelled:(id)arg1 forResting:(BOOL)arg2 executionContext:(id)arg3 ;
-(void)clearInfoForTouch:(id)arg1 forResting:(BOOL)arg2 ;
-(void)updateShiftKeyState;
-(void)swipeDetected:(id)arg1 ;
-(void)pinchHandler:(id)arg1 ;
-(void)cancelTouchIfNecessaryForInfo:(id)arg1 forResting:(BOOL)arg2 ;
-(void)divideKeysIntoLeft:(id)arg1 right:(id)arg2 ;
-(id)baseKeyForString:(id)arg1 ;
-(void)changeToKeyplane:(id)arg1 ;
-(CGPoint)applyError:(CGPoint)arg1 toKey:(id)arg2 ;
-(BOOL)isTrackpadMode;
-(void)prepareSliderBehaviorFeedback;
-(void)provideSliderBehaviorFeedback;
-(void)finishSliderBehaviorFeedback;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 forHandBiasCoordinator:(id)arg2 ;
-(id)prepareTransition:(id)arg1 forTargetHandBias:(long long)arg2 coordinator:(id)arg3 ;
-(void)finishHandBiasTransitionWithFinalBias:(long long)arg1 ;
-(long long)currentHandBiasWithCoordinator:(id)arg1 ;
-(id)hostViewForHandBiasTransition:(id)arg1 ;
-(BOOL)pinchCanBeginWithTouches:(id)arg1 ;
-(void)didDetectPinchWithSeparation:(double)arg1 ;
-(void)pinchDidConsumeTouch:(id)arg1 ;
-(void)clearUnusedObjects:(BOOL)arg1 ;
-(SEL)handlerForNotification:(id)arg1 ;
-(id)internationalKeyDisplayStringOnEmojiKeyboard;
-(CGImageRef)renderedImageWithToken:(id)arg1 ;
-(CGImageRef)renderedKeyplaneWithToken:(id)arg1 split:(BOOL)arg2 ;
-(void)setPasscodeOutlineAlpha:(double)arg1 ;
-(void)updateBackgroundCorners;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(BOOL)shouldMergeAssistantBarWithKeyboardLayout;
-(void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(unsigned long long)textEditingKeyMask;
-(void)deleteHandwritingStrokesAtIndexes:(id)arg1 ;
-(BOOL)hasAccentKey;
-(void)setTarget:(id)arg1 forKey:(id)arg2 ;
-(void)setAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)setLongPressAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)restoreDefaultsForAllKeys;
-(id)_keyboardLongPressInteractionRegions;
-(BOOL)shouldShowIndicator;
-(void)setHideKeysUnderIndicator:(BOOL)arg1 ;
-(id)activationIndicatorView;
-(BOOL)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 forRestingState:(unsigned long long)arg4 otherRestedTouchLocations:(id)arg5 ;
-(/*^block*/id)handRestRecognizerSilenceNextTouchDown;
-(void)handRestRecognizerNotifyRestForBegin:(BOOL)arg1 location:(CGPoint)arg2 timestamp:(double)arg3 pathIndex:(int)arg4 touchUUID:(id)arg5 context:(id)arg6 ;
-(CGPoint)getCenterForKeyUnderRightIndexFinger;
-(id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(long long)arg1 ;
-(BOOL)_handRestRecognizerCancelShouldBeEnd;
-(void)setSplit:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(BOOL)performReturnAction;
-(BOOL)performSpaceAction;
-(void)handleDelayedCentroidUpdate;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(void)touchCancelled:(id)arg1 executionContext:(id)arg2 ;
-(void)touchChanged:(id)arg1 executionContext:(id)arg2 ;
-(void)updateUndoKeyState;
-(void)willRotate;
-(void)didRotate;
-(id)simulateTouch:(CGPoint)arg1 ;
-(id)simulateTouchForCharacter:(id)arg1 errorVector:(CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4 ;
-(void)fadeWithInvocation:(id)arg1 ;
-(BOOL)keyplaneContainsDismissKey;
-(BOOL)keyplaneContainsEmojiKey;
-(void)triggerSpaceKeyplaneSwitchIfNecessary;
-(void)setKeyboardName:(NSString *)arg1 ;
-(BOOL)shift;
-(BOOL)autoShift;
-(void)setAutoShift:(BOOL)arg1 ;
-(BOOL)didLongPress;
-(void)setDidLongPress:(BOOL)arg1 ;
-(NSString *)localizedInputKey;
-(CGRect)frameForKeyWithRepresentedString:(id)arg1 ;
-(CGRect)frameForLastKeyWithRepresentedString:(id)arg1 ;
-(id)popupKeyViews;
-(void)setKeyForTouchInfo:(id)arg1 key:(id)arg2 ;
-(void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4 ;
-(void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3 ;
-(void)populateFlickPopupsForKey:(id)arg1 ;
-(void)handlePopupView;
-(void)handleDismissFlickView;
-(void)setPreferredHeight:(double)arg1 ;
@end
