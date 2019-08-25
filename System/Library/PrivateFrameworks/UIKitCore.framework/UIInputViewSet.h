/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UIResponder, UIInputViewController, UIKeyboard;

@interface UIInputViewSet : NSObject {

	UIView* _inputView;
	UIView* _inputAccessoryView;
	UIView* _inputAssistantView;
	BOOL _isSplit;
	double _splitHeightDelta;
	UIResponder* _restorableResponder;
	UIResponder* _accessoryViewNextResponder;
	BOOL _restoreUsingBecomeFirstResponder;
	BOOL _isNullInputView;
	BOOL _isCustomInputView;
	BOOL _isRemoteKeyboard;
	UIInputViewController* _inputViewController;
	UIInputViewController* _assistantViewController;
	UIInputViewController* _accessoryViewController;
	CGRect _inputAssistantViewBounds;

}

@property (nonatomic,retain) UIView * inputView;                                           //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAssistantView;                                  //@synthesize inputAssistantView=_inputAssistantView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                  //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UIInputViewController * inputViewController;                  //@synthesize inputViewController=_inputViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * assistantViewController;              //@synthesize assistantViewController=_assistantViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * accessoryViewController;              //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (nonatomic,readonly) UIView * layeringView; 
@property (nonatomic,readonly) UIKeyboard * keyboard; 
@property (nonatomic,readonly) CGRect inputAccessoryViewBounds; 
@property (nonatomic,readonly) CGRect inputAssistantViewBounds;                            //@synthesize inputAssistantViewBounds=_inputAssistantViewBounds - In the implementation block
@property (nonatomic,readonly) CGRect inputViewBounds; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) BOOL supportsSplit; 
@property (nonatomic,readonly) BOOL isSplit;                                               //@synthesize isSplit=_isSplit - In the implementation block
@property (nonatomic,readonly) BOOL inputViewKeyboardCanSplit; 
@property (assign,nonatomic,__weak) UIResponder * restorableResponder;                     //@synthesize restorableResponder=_restorableResponder - In the implementation block
@property (assign,nonatomic) UIResponder * accessoryViewNextResponder;                     //@synthesize accessoryViewNextResponder=_accessoryViewNextResponder - In the implementation block
@property (nonatomic,readonly) BOOL isInputViewPlaceholder; 
@property (nonatomic,readonly) BOOL isInputAssistantViewPlaceholder; 
@property (nonatomic,readonly) BOOL isInputAccessoryViewPlaceholder; 
@property (nonatomic,readonly) BOOL _inputViewIsSplit; 
@property (assign,nonatomic) double splitHeightDelta;                                      //@synthesize splitHeightDelta=_splitHeightDelta - In the implementation block
@property (nonatomic,readonly) UIView * splitExemptSubview; 
@property (assign,nonatomic) BOOL restoreUsingBecomeFirstResponder; 
@property (assign,nonatomic) BOOL isCustomInputView;                                       //@synthesize isCustomInputView=_isCustomInputView - In the implementation block
@property (assign,nonatomic) BOOL isRemoteKeyboard;                                        //@synthesize isRemoteKeyboard=_isRemoteKeyboard - In the implementation block
@property (nonatomic,readonly) BOOL isNullInputView;                                       //@synthesize isNullInputView=_isNullInputView - In the implementation block
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 ;
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 ;
+(id)emptyInputSet;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg1 ;
+(id)inputSetWithPlaceholderAndAccessoryView:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(UIKeyboard *)keyboard;
-(BOOL)containsView:(id)arg1 ;
-(UIView *)inputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(BOOL)isEmpty;
-(void)_setRenderConfig:(id)arg1 ;
-(BOOL)visible;
-(BOOL)isSplit;
-(BOOL)isCustomInputView;
-(UIView *)inputView;
-(void)setInputView:(UIView *)arg1 ;
-(UIInputViewController *)inputViewController;
-(BOOL)supportsSplit;
-(UIView *)inputAssistantView;
-(CGRect)inputViewBounds;
-(CGRect)inputAssistantViewBounds;
-(CGRect)inputAccessoryViewBounds;
-(BOOL)isInputViewPlaceholder;
-(void)setKeyboardAssistantBar:(id)arg1 ;
-(BOOL)isRemoteKeyboard;
-(UIInputViewController *)assistantViewController;
-(BOOL)isInputAssistantViewPlaceholder;
-(BOOL)isInputAccessoryViewPlaceholder;
-(void)refreshPresentation;
-(CGRect)_rightInputViewSetFrame;
-(CGRect)_leftInputViewSetFrame;
-(id)_splittableInputAccessoryView;
-(void)setSplitHeightDelta:(double)arg1 ;
-(UIView *)splitExemptSubview;
-(BOOL)_inputViewIsSplit;
-(BOOL)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2 ;
-(void)_beginSplitTransitionIfNeeded;
-(void)_setSplitProgress:(double)arg1 ;
-(void)_endSplitTransitionIfNeeded;
-(UIInputViewController *)accessoryViewController;
-(BOOL)isNullInputView;
-(id)_themableInputAccessoryView;
-(long long)keyboardOrientation:(id)arg1 ;
-(BOOL)inputViewKeyboardCanSplit;
-(BOOL)_accessorySuppressesShadow;
-(UIView *)layeringView;
-(void)setAccessoryViewController:(UIInputViewController *)arg1 ;
-(double)splitHeightDelta;
-(BOOL)isStrictSupersetOfViewSet:(id)arg1 ;
-(BOOL)containsResponder:(id)arg1 ;
-(id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1 ;
-(id)normalisePlaceholders;
-(BOOL)canAnimateToInputViewSet:(id)arg1 ;
-(void)inheritNullState:(id)arg1 ;
-(void)setIsCustomInputView:(BOOL)arg1 ;
-(void)setIsRemoteKeyboard:(BOOL)arg1 ;
-(void)setInputViewController:(UIInputViewController *)arg1 ;
-(void)setAssistantViewController:(UIInputViewController *)arg1 ;
-(BOOL)usesKeyClicks;
-(UIResponder *)restorableResponder;
-(void)setRestorableResponder:(UIResponder *)arg1 ;
-(void)setRestoreUsingBecomeFirstResponder:(BOOL)arg1 ;
-(void)setAccessoryViewNextResponder:(UIResponder *)arg1 ;
-(UIResponder *)accessoryViewNextResponder;
-(void)_forceRestoreUsingBecomeFirstResponder:(BOOL)arg1 ;
-(BOOL)restoreUsingBecomeFirstResponder;
-(BOOL)_inputViewSetSupportsSplit;
-(id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(BOOL)arg4 ;
-(void)setInputAssistantView:(UIView *)arg1 ;
-(BOOL)_inputViewIsVisible;
-(BOOL)_isKeyboard;
-(BOOL)_inputAccessoryViewSupportsSplit;
-(BOOL)_isFullscreen;
-(BOOL)_inputViewSupportsSplit;
-(BOOL)_actLikeInputAccessoryViewSupportsSplit;
-(BOOL)__isCKAccessoryView;
-(void)setAssistantBarVisible:(BOOL)arg1 delay:(double)arg2 animated:(BOOL)arg3 ;
-(id)inputSetWithInputAccessoryViewOnly;
-(BOOL)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2 ;
@end

