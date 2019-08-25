/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIRecentsInputViewControllerDelegate.h>

@protocol UITraitEnvironment, UISystemInputViewControllerDelegate, UITextInput;
@class NSMutableDictionary, UIResponder, UIKeyboard, NSArray, UICompatibilityInputViewController, UIKBSystemLayoutViewController, UIButton, UIViewController, UIRecentsInputViewController, NSLayoutConstraint, UITextInputTraits, UILexicon, UILabel, UIView, NSString;

@interface UISystemInputViewController : UIViewController <UIRecentsInputViewControllerDelegate> {

	NSMutableDictionary* _accessoryViewControllers;
	NSMutableDictionary* _accessoryConstraints;
	BOOL _needsSetupAgain;
	BOOL _isVisible;
	UIResponder*<UITraitEnvironment> _containingResponder;
	BOOL _supportsTouchInput;
	BOOL _supportsRecentInputsIntegration;
	BOOL _isAutomaticResponderTransition;
	BOOL _willPresentFullscreen;
	BOOL _willUpdateBackgroundEffectOnInputModeChange;
	BOOL _didDisplayRecents;
	id<UISystemInputViewControllerDelegate> _systemInputViewControllerDelegate;
	UIResponder*<UITextInput> _persistentDelegate;
	UIKeyboard* _keyboard;
	NSArray* _keyboardConstraints;
	UICompatibilityInputViewController* _keyboardVC;
	NSArray* _editorConstraints;
	UIKBSystemLayoutViewController* _editorVC;
	UIButton* _doneButton;
	UIViewController* _inputVC;
	UIRecentsInputViewController* _recentsVC;
	NSLayoutConstraint* _verticalAlignment;
	NSLayoutConstraint* _horizontalAlignment;
	UIResponder*<UITextInput> _nextInputDelegate;
	UITextInputTraits* _textInputTraits;
	UILexicon* _cachedRecents;
	UILabel* _promptLabel;
	unsigned long long _requestedInteractionModel;
	UIView* _containingView;
	UIView* _contentLayoutView;
	long long _blurEffectStyle;

}

@property (assign,nonatomic) BOOL supportsTouchInput;                                                                //@synthesize supportsTouchInput=_supportsTouchInput - In the implementation block
@property (assign,nonatomic) BOOL isAutomaticResponderTransition;                                                    //@synthesize isAutomaticResponderTransition=_isAutomaticResponderTransition - In the implementation block
@property (assign,nonatomic) BOOL willPresentFullscreen;                                                             //@synthesize willPresentFullscreen=_willPresentFullscreen - In the implementation block
@property (assign,nonatomic) BOOL willUpdateBackgroundEffectOnInputModeChange;                                       //@synthesize willUpdateBackgroundEffectOnInputModeChange=_willUpdateBackgroundEffectOnInputModeChange - In the implementation block
@property (assign,nonatomic) BOOL didDisplayRecents;                                                                 //@synthesize didDisplayRecents=_didDisplayRecents - In the implementation block
@property (nonatomic,retain) UIView * containingView;                                                                //@synthesize containingView=_containingView - In the implementation block
@property (nonatomic,retain) UIView * contentLayoutView;                                                             //@synthesize contentLayoutView=_contentLayoutView - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;                                                              //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (nonatomic,retain) UIKeyboard * keyboard;                                                                  //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,retain) NSArray * keyboardConstraints;                                                          //@synthesize keyboardConstraints=_keyboardConstraints - In the implementation block
@property (nonatomic,retain) UICompatibilityInputViewController * keyboardVC;                                        //@synthesize keyboardVC=_keyboardVC - In the implementation block
@property (nonatomic,retain) NSArray * editorConstraints;                                                            //@synthesize editorConstraints=_editorConstraints - In the implementation block
@property (nonatomic,retain) UIKBSystemLayoutViewController * editorVC;                                              //@synthesize editorVC=_editorVC - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                                  //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIViewController * inputVC;                                                             //@synthesize inputVC=_inputVC - In the implementation block
@property (nonatomic,retain) UIRecentsInputViewController * recentsVC;                                               //@synthesize recentsVC=_recentsVC - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalAlignment;                                                 //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * horizontalAlignment;                                               //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,retain) UIResponder*<UITextInput> nextInputDelegate;                                            //@synthesize nextInputDelegate=_nextInputDelegate - In the implementation block
@property (nonatomic,retain) UITextInputTraits * textInputTraits;                                                    //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,retain) UILexicon * cachedRecents;                                                              //@synthesize cachedRecents=_cachedRecents - In the implementation block
@property (nonatomic,retain) UILabel * _promptLabel;                                                                 //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,retain) UIResponder*<UITextInput> persistentDelegate;                                           //@synthesize persistentDelegate=_persistentDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets unfocusedFocusGuideOutsets; 
@property (assign,nonatomic) BOOL supportsRecentInputsIntegration;                                                   //@synthesize supportsRecentInputsIntegration=_supportsRecentInputsIntegration - In the implementation block
@property (assign,nonatomic) id<UISystemInputViewControllerDelegate> systemInputViewControllerDelegate;              //@synthesize systemInputViewControllerDelegate=_systemInputViewControllerDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long requestedInteractionModel;                                           //@synthesize requestedInteractionModel=_requestedInteractionModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 ;
+(id)_iOS_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4 ;
+(id)_tvOS_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4 ;
+(id)_carPlay_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4 ;
+(id)_canonicalTraitsForResponder:(id)arg1 ;
+(void)setKeyboardInteractionModel:(unsigned long long)arg1 ;
+(BOOL)canUseSystemInputViewControllerForResponder:(id)arg1 ;
+(id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 ;
-(void)dealloc;
-(id)_effectView;
-(UIKeyboard *)keyboard;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UILabel *)_promptLabel;
-(UITextInputTraits *)textInputTraits;
-(UIView *)containingView;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)updateViewConstraints;
-(void)_willResume:(id)arg1 ;
-(void)_didSuspend:(id)arg1 ;
-(void)setTextInputTraits:(UITextInputTraits *)arg1 ;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(void)didSelectRecentInput;
-(void)switchToKeyboard;
-(void)setRequestedInteractionModel:(unsigned long long)arg1 ;
-(void)setSupportsTouchInput:(BOOL)arg1 ;
-(void)setPersistentDelegate:(UIResponder*<UITextInput>)arg1 ;
-(void)setWillUpdateBackgroundEffectOnInputModeChange:(BOOL)arg1 ;
-(void)setIsAutomaticResponderTransition:(BOOL)arg1 ;
-(void)setContainingView:(UIView *)arg1 ;
-(BOOL)supportsTouchInput;
-(void)setEditorVC:(UIKBSystemLayoutViewController *)arg1 ;
-(void)setInputVC:(UIViewController *)arg1 ;
-(void)populateCoreHierarchy;
-(void)setAccessoryViewController:(id)arg1 forEdge:(long long)arg2 ;
-(UIView *)contentLayoutView;
-(UICompatibilityInputViewController *)keyboardVC;
-(void)setWillPresentFullscreen:(BOOL)arg1 ;
-(void)findNextInputDelegate;
-(id)doneButtonStringForCurrentInputDelegate;
-(void)_returnButtonPressed;
-(id)_accessoryViewControllerForEdge:(long long)arg1 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(void)set_promptLabel:(UILabel *)arg1 ;
-(id)alignmentConstraintForAxis:(long long)arg1 ;
-(UIButton *)doneButton;
-(void)_addChildInputViewController;
-(void)setContentLayoutView:(UIView *)arg1 ;
-(UIKBSystemLayoutViewController *)editorVC;
-(void)_addAccessoryViewController:(id)arg1 ;
-(BOOL)willPresentFullscreen;
-(void)updateAlignmentConstraints;
-(id)_traitCollectionForUserInterfaceStyle;
-(UIRecentsInputViewController *)recentsVC;
-(void)_setNonInputViewVisibility:(BOOL)arg1 ;
-(UIViewController *)inputVC;
-(void)_createKeyboardIfNecessary;
-(void)_updateRemoteTextEditingSession;
-(BOOL)willShowRecentsList;
-(BOOL)didDisplayRecents;
-(void)setKeyboard:(UIKeyboard *)arg1 ;
-(unsigned long long)requestedInteractionModel;
-(void)setKeyboardVC:(UICompatibilityInputViewController *)arg1 ;
-(UIResponder*<UITextInput>)persistentDelegate;
-(void)_restoreKeyboardIfNecessary;
-(void)_removeAccessoryViewController:(id)arg1 ;
-(id<UISystemInputViewControllerDelegate>)systemInputViewControllerDelegate;
-(void)setRecentsVC:(UIRecentsInputViewController *)arg1 ;
-(void)notifyDelegateWithAccessoryVisibility:(BOOL)arg1 ;
-(void)configureRecentsVCIfNecessary;
-(UILexicon *)cachedRecents;
-(void)setDidDisplayRecents:(BOOL)arg1 ;
-(UIResponder*<UITextInput>)nextInputDelegate;
-(void)_dismissSystemInputViewController;
-(UIEdgeInsets)unfocusedFocusGuideOutsets;
-(void)setNextInputDelegate:(UIResponder*<UITextInput>)arg1 ;
-(void)inputModeDidChange:(id)arg1 ;
-(BOOL)willUpdateBackgroundEffectOnInputModeChange;
-(void)setupKeyboard;
-(void)setCachedRecents:(UILexicon *)arg1 ;
-(BOOL)supportsRecentInputsIntegration;
-(void)setAlignmentConstraint:(id)arg1 forAxis:(long long)arg2 ;
-(NSArray *)keyboardConstraints;
-(id)constraintFromView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 ;
-(void)setKeyboardConstraints:(NSArray *)arg1 ;
-(NSArray *)editorConstraints;
-(void)setEditorConstraints:(NSArray *)arg1 ;
-(void)setConstraints:(id)arg1 forEdge:(long long)arg2 ;
-(id)constraintsForEdge:(long long)arg1 ;
-(unsigned long long)_verticalLayoutTypeForEdge:(long long)arg1 ;
-(unsigned long long)_horizontalLayoutTypeForEdge:(long long)arg1 ;
-(NSLayoutConstraint *)horizontalAlignment;
-(NSLayoutConstraint *)verticalAlignment;
-(void)setHorizontalAlignment:(NSLayoutConstraint *)arg1 ;
-(void)setVerticalAlignment:(NSLayoutConstraint *)arg1 ;
-(void)_resetDelegate;
-(void)_clearCursorLocationIfNotFirstResponder;
-(void)_windowWillBecomeKey:(id)arg1 ;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(void)setSupportsRecentInputsIntegration:(BOOL)arg1 ;
-(void)setSystemInputViewControllerDelegate:(id<UISystemInputViewControllerDelegate>)arg1 ;
-(void)prepareForRelease;
-(void)resetContainingResponder;
-(void)setUnfocusedFocusGuideOutsets:(UIEdgeInsets)arg1 ;
-(void)reloadInputViewsForPersistentDelegate;
-(id)accessoryViewControllerForEdge:(long long)arg1 ;
-(BOOL)isAutomaticResponderTransition;
@end

