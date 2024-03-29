/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInputViewController.h>
#import <UIKitCore/_UIKBDelegateAwareInputController.h>

@class UIKeyboardInputMode, UIKeyboard, UIViewController, NSArray, NSString;

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {

	UIKeyboardInputMode* _inputMode;
	UIKeyboard* _deferredSystemView;
	UIKeyboardInputMode* _incomingExtensionInputMode;
	double _incomingExtensionInputModeTime;
	double _lastSuspendedTime;
	BOOL _shouldRegenerateSizingConstraints;
	BOOL _shouldSuppressRemoteInputController;
	BOOL _tearingDownInputController;
	double _resetInputModeTime;
	UIViewController* _inputController;
	NSArray* _internalEdgeMatchConstraints;

}

@property (nonatomic,retain) UIViewController * inputController;                  //@synthesize inputController=_inputController - In the implementation block
@property (nonatomic,retain) NSArray * internalEdgeMatchConstraints;              //@synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_requiresProxyInterface;
+(id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2 ;
+(id)inputViewControllerWithView:(id)arg1 ;
+(id)deferredInputModeControllerWithKeyboard:(id)arg1 ;
+(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)dealloc;
-(id)preferredFocusedView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_tvUpdateAppearanceForUserInterfaceStyle;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)setInputMode:(id)arg1 ;
-(id)_keyboard;
-(id)_compatibilityController;
-(void)rebuildChildConstraints;
-(void)generateCompatibleSizeConstraintsIfNecessary;
-(id)_initAsDeferredController;
-(void)tearDownInputController;
-(void)didSuspend:(id)arg1 ;
-(void)willResume:(id)arg1 ;
-(void)shouldUpdateInputMode:(id)arg1 ;
-(void)killIncomingExtension;
-(UIViewController *)inputController;
-(NSArray *)internalEdgeMatchConstraints;
-(void)setInternalEdgeMatchConstraints:(NSArray *)arg1 ;
-(id)_compatView;
-(void)setInputController:(UIViewController *)arg1 ;
-(void)resetInputModeInMainThread;
-(void)resetInputMode;
-(void)addSnapshotViewForInputMode:(id)arg1 ;
-(void)removeSnapshotView;
-(void)takeSnapshotView;
-(id)_systemViewControllerForInputMode:(id)arg1 ;
-(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
-(id)childCompatibilityController;
-(id)_keyboardForThisViewController;
-(void)setDeferredSystemView:(id)arg1 ;
-(void)assertCurrentInputModeIfNecessary;
-(void)setTearingDownInputController;
-(void)willBeginTranslation;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(void)didFinishTranslation;
@end

