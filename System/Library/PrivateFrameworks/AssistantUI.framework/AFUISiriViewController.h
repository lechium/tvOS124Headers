/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AFUISiriRemoteViewControllerDataSource.h>
#import <libobjc.A.dylib/AFUISiriRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/AFUISiriViewDelegate.h>
#import <libobjc.A.dylib/SiriUIAudioRoutePickerControllerDelegate.h>
#import <libobjc.A.dylib/AFUISiriSessionLocalDataSource.h>
#import <libobjc.A.dylib/AFUISiriSessionLocalDelegate.h>
#import <libobjc.A.dylib/AFUISiriViewDataSource.h>
#import <libobjc.A.dylib/SiriUIKeyboardViewDelegate.h>

@protocol OS_dispatch_queue, AFUISiriViewControllerDataSource, AFUISiriViewControllerDelegate;
@class AFUIDelayedActionCommandCache, SiriUIConfiguration, NSString, NSObject, SiriUIKeyboardView, NSDictionary, AFUISiriSession, AFUISiriRemoteViewController, SiriUIAudioRoutePickerController, UIStatusBar, AFUIRequestOptions, NSNumber, UIView;

@interface AFUISiriViewController : UIViewController <AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, AFUISiriViewDataSource, SiriUIKeyboardViewDelegate> {

	BOOL _active;
	BOOL _attemptingRemoteViewControllerPresentation;
	BOOL _remoteViewControllerDispatchQueueSuspended;
	long long _vtEnabledCount;
	long long _currentRequestSource;
	/*^block*/id _triggerUpdater;
	AFUIDelayedActionCommandCache* _delayedActionCommandCache;
	BOOL _siriSessionWantsToEnd;
	SiriUIConfiguration* _configuration;
	NSString* _uiAppearanceUUIDString;
	NSObject*<OS_dispatch_queue> _uiAppearanceCoreDuetQueue;
	BOOL _presentedConversationFromBreadcrumb;
	SiriUIKeyboardView* _inputAccessoryView;
	SCD_Struct_AF6 _keyboardInfo;
	BOOL _unlockScreenVisible;
	BOOL _remoteViewControllerIsPresenting;
	NSDictionary* _dismissalUserInfo;
	BOOL _recordingStartedOnRoute;
	BOOL _visible;
	BOOL _eyesFree;
	BOOL _deviceIsInStarkMode;
	BOOL _carDNDActive;
	BOOL _receivedIncomingPhoneCall;
	BOOL _turnsOnScreenOnAppearance;
	BOOL _showsStatusBar;
	BOOL _statusBarEnabled;
	BOOL _mapsGatekeeperEnabled;
	BOOL _hasCalledBeginAppearanceTransition;
	BOOL _hasCalledEndAppearanceTransition;
	BOOL _inHoldToTalkMode;
	BOOL _viewDisappearing;
	BOOL _userUtteranceTapToEditInProgress;
	BOOL _punchingOut;
	id<AFUISiriViewControllerDataSource> _dataSource;
	id<AFUISiriViewControllerDelegate> _delegate;
	AFUISiriSession* _session;
	AFUISiriRemoteViewController* _remoteViewController;
	NSObject*<OS_dispatch_queue> _remoteViewControllerDispatchQueue;
	SiriUIAudioRoutePickerController* _routePickerController;
	UIStatusBar* _statusBar;
	AFUIRequestOptions* _currentRequestOptions;
	NSNumber* _recordingStartedTimeValue;
	double _viewDidAppearTime;

}

@property (getter=_session,nonatomic,readonly) AFUISiriSession * session;                                                                                                    //@synthesize session=_session - In the implementation block
@property (getter=_remoteViewController,nonatomic,readonly) AFUISiriRemoteViewController * remoteViewController;                                                             //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (getter=_remoteViewControllerDispatchQueue,nonatomic,readonly) NSObject*<OS_dispatch_queue> remoteViewControllerDispatchQueue;                                     //@synthesize remoteViewControllerDispatchQueue=_remoteViewControllerDispatchQueue - In the implementation block
@property (assign,setter=_setHasCalledBeginAppearanceTransition:,getter=_hasCalledBeginAppearanceTransition,nonatomic) BOOL hasCalledBeginAppearanceTransition;              //@synthesize hasCalledBeginAppearanceTransition=_hasCalledBeginAppearanceTransition - In the implementation block
@property (assign,setter=_setHasCalledEndAppearanceTransition:,getter=_hasCalledEndAppearanceTransition,nonatomic) BOOL hasCalledEndAppearanceTransition;                    //@synthesize hasCalledEndAppearanceTransition=_hasCalledEndAppearanceTransition - In the implementation block
@property (nonatomic,retain) SiriUIAudioRoutePickerController * routePickerController;                                                                                       //@synthesize routePickerController=_routePickerController - In the implementation block
@property (setter=_setStatusBar:,getter=_statusBar,nonatomic,retain) UIStatusBar * statusBar;                                                                                //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,setter=_setInHoldToTalkMode:,getter=_isInHoldToTalkMode,nonatomic) BOOL inHoldToTalkMode;                                                                  //@synthesize inHoldToTalkMode=_inHoldToTalkMode - In the implementation block
@property (setter=_setCurrentRequestOptions:,getter=_currentRequestOptions,nonatomic,copy) AFUIRequestOptions * currentRequestOptions;                                       //@synthesize currentRequestOptions=_currentRequestOptions - In the implementation block
@property (setter=_setRecordingStartedTimeValue:,getter=_recordingStartedTimeValue,nonatomic,retain) NSNumber * recordingStartedTimeValue;                                   //@synthesize recordingStartedTimeValue=_recordingStartedTimeValue - In the implementation block
@property (assign,setter=_setViewDidAppearTime:,getter=_viewDidAppearTime,nonatomic) double viewDidAppearTime;                                                               //@synthesize viewDidAppearTime=_viewDidAppearTime - In the implementation block
@property (assign,getter=isViewDisappearing,nonatomic) BOOL viewDisappearing;                                                                                                //@synthesize viewDisappearing=_viewDisappearing - In the implementation block
@property (assign,setter=_setUserUtteranceTapToEditInProgress:,getter=_isUserUtteranceTapToEditInProgress,nonatomic) BOOL userUtteranceTapToEditInProgress;                  //@synthesize userUtteranceTapToEditInProgress=_userUtteranceTapToEditInProgress - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView; 
@property (assign,setter=_setPunchingOut:,getter=_isPunchingOut,nonatomic) BOOL punchingOut;                                                                                 //@synthesize punchingOut=_punchingOut - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriViewControllerDataSource> dataSource;                                                                                         //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriViewControllerDelegate> delegate;                                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                                                                                  //@synthesize visible=_visible - In the implementation block
@property (assign,getter=isEyesFree,nonatomic) BOOL eyesFree;                                                                                                                //@synthesize eyesFree=_eyesFree - In the implementation block
@property (assign,setter=setDeviceInStarkMode:,getter=isDeviceInStarkMode,nonatomic) BOOL deviceIsInStarkMode;                                                               //@synthesize deviceIsInStarkMode=_deviceIsInStarkMode - In the implementation block
@property (assign,nonatomic) BOOL carDNDActive;                                                                                                                              //@synthesize carDNDActive=_carDNDActive - In the implementation block
@property (assign,nonatomic) BOOL receivedIncomingPhoneCall;                                                                                                                 //@synthesize receivedIncomingPhoneCall=_receivedIncomingPhoneCall - In the implementation block
@property (assign,nonatomic) BOOL turnsOnScreenOnAppearance;                                                                                                                 //@synthesize turnsOnScreenOnAppearance=_turnsOnScreenOnAppearance - In the implementation block
@property (assign,nonatomic) BOOL showsStatusBar;                                                                                                                            //@synthesize showsStatusBar=_showsStatusBar - In the implementation block
@property (assign,nonatomic) BOOL statusBarEnabled;                                                                                                                          //@synthesize statusBarEnabled=_statusBarEnabled - In the implementation block
@property (assign,nonatomic) BOOL mapsGatekeeperEnabled;                                                                                                                     //@synthesize mapsGatekeeperEnabled=_mapsGatekeeperEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasScreenSnapshot; 
@property (nonatomic,readonly) BOOL isProcessingAcousticIdRequest; 
@property (nonatomic,retain) UIView*<AFUISiriRemoteViewHosting> view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEyesFree:(BOOL)arg1 ;
-(void)setAlertContext;
-(BOOL)isDeviceInStarkMode;
-(void)telephonyRequestCompleted;
-(void)defrost;
-(void)setCarDNDActive:(BOOL)arg1 ;
-(BOOL)isEyesFree;
-(BOOL)isInitialBringUp;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)keyboardViewDidReceiveHelpButtonAction:(id)arg1 ;
-(void)keyboardViewDidReceiveAudioRouteAction:(id)arg1 ;
-(void)keyboardViewDidReceiveReportBugAction:(id)arg1 ;
-(void)keyboardViewDidReceiveBugButtonLongPress:(id)arg1 ;
-(void)keyboardView:(id)arg1 didReceiveText:(id)arg2 ;
-(void)preloadPluginBundles;
-(void)routePickerControllerWillShow:(id)arg1 ;
-(void)routePickerControllerWillDismiss:(id)arg1 ;
-(void)routePickerController:(id)arg1 hasRoutesToPick:(BOOL)arg2 ;
-(void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(BOOL)arg2 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)_removeStatusBar;
-(CGRect)_statusBarFrame;
-(void)_setStatusBar:(id)arg1 ;
-(id)_statusBar;
-(BOOL)_isTextInputEnabled;
-(long long)userAccountCountForSiriView:(id)arg1 ;
-(id)assistantVersionForSiriView:(id)arg1 ;
-(id)activeAccountForSiriView:(id)arg1 ;
-(void)siriViewDidReceiveAudioRouteAction:(id)arg1 ;
-(void)siriViewDidReceiveReportBugAction:(id)arg1 ;
-(void)siriViewDidReceiveBugButtonLongPress:(id)arg1 ;
-(void)siriViewDidReceiveHelpAction:(id)arg1 ;
-(float)audioRecordingPowerLevelForSiriView:(id)arg1 ;
-(void)siriViewDidRecieveStatusViewTappedAction:(id)arg1 ;
-(void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1 ;
-(void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1 ;
-(BOOL)siriViewShouldSupportTextInput:(id)arg1 ;
-(void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)viewWillAppearFinishedForSiriRemoteViewController:(id)arg1 ;
-(void)viewWillDisappearFinishedForSiriRemoteViewController:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(long long)siriRemoteViewControllerRequestsActivationSource:(id)arg1 ;
-(void)dismissSiriRemoteViewController:(id)arg1 delayForTTS:(BOOL)arg2 userInfo:(id)arg3 ;
-(void)startGuidedAccessForRemoteViewController:(id)arg1 ;
-(id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2 ;
-(void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 didRequestCurrentTextInputWithReplyHandler:(/*^block*/id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(/*^block*/id)arg5 ;
-(void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setTypeToSiriViewHidden:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setCarDisplayGatekeeperVisible:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didPresentViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didDismissViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 handlePasscodeUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)siriRemoteViewControllerPulseHelpButton:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(BOOL)arg2 minimized:(BOOL)arg3 ;
-(void)siriRemoteViewControllerDidResetTextInput:(id)arg1 ;
-(void)siriRemoteViewControllerWillBeginTapToEdit:(id)arg1 ;
-(void)siriRemoteViewControllerDidEndTapToEdit:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 willStartTest:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didFinishTest:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3 ;
-(void)siriRemoteViewControllerDidEnterUITrackingMode:(id)arg1 ;
-(void)siriRemoteViewControllerDidExitUITrackingMode:(id)arg1 ;
-(void)siriRemoteViewControllerDidPresentUserInterface:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4 ;
-(void)siriRemoteViewControllerDidDetectMicButtonTap:(id)arg1 ;
-(void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(id)arg1 ;
-(void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2 ;
-(void)siriRemoteViewControllerDidPresentConversationFromBreadcrumb:(id)arg1 ;
-(void)siriRemoteViewControllerDidDetectAudioRoutePickerTap:(id)arg1 ;
-(void)preloadPresentationBundleWithIdentifier:(id)arg1 ;
-(void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3 ;
-(void)setWaitingForTelephonyToStart:(BOOL)arg1 ;
-(id)viewServiceApplicationInfo;
-(void)siriSessionDidUpdateSessionInfo:(id)arg1 ;
-(void)setDeviceInStarkMode:(BOOL)arg1 ;
-(void)setLockState:(unsigned long long)arg1 ;
-(void)resetContextTypes:(long long)arg1 ;
-(void)startRequestWithOptions:(id)arg1 ;
-(void)startRequestWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopRequestWithOptions:(id)arg1 ;
-(void)updateRequestOptions:(id)arg1 ;
-(void)siriSession:(id)arg1 didChangeToState:(long long)arg2 ;
-(void)siriSession:(id)arg1 didChangeDialogPhase:(id)arg2 ;
-(void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)siriSessionDidReceiveDelayedActionCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)siriSessionRecordingPreparationHasFinished:(id)arg1 ;
-(void)siriSession:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2 ;
-(id)underlyingConnection;
-(id)bulletinsForSiriSession:(id)arg1 ;
-(id)contextAppInfosForSiriSession:(id)arg1 ;
-(unsigned long long)lockStateForSiriSession:(id)arg1 ;
-(void)siriSessionDidResetContext:(id)arg1 ;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)siriSessionWillEnd:(id)arg1 ;
-(void)siriSessionDidEnd:(id)arg1 ;
-(BOOL)isPreventingActivationGesture;
-(BOOL)isProcessingAcousticIdRequest;
-(void)_statusBarFrameDidChange:(id)arg1 ;
-(void)_suspendRemoteViewControllerDispatchQueue;
-(id)initWithConnection:(id)arg1 configuration:(id)arg2 ;
-(void)_resumeRemoteViewControllerDispatchQueue;
-(id)_session;
-(void)setShowsStatusBar:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)statusBarEnabled;
-(void)_showStatusBarAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideStatusBarAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_siriView;
-(BOOL)_isUserUtteranceTapToEditInProgress;
-(void)_enqueueRemoteViewControllerMessageBlock:(/*^block*/id)arg1 ;
-(void)_recordUIAppearance;
-(void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)arg1 ;
-(void)_keyboardDidShowNotification:(id)arg1 ;
-(void)_keyboardDidHideNotification:(id)arg1 ;
-(SCD_Struct_AF1)_keyboardInfoFromNotification:(id)arg1 ;
-(void)_sendEndAppearanceTransitionIfReady;
-(void)_updateAudioRoutePicker;
-(BOOL)hasScreenSnapshot;
-(void)_setViewDidAppearTime:(double)arg1 ;
-(void)_setShowKeyboardIfTextInputEnabled:(BOOL)arg1 ;
-(void)_setHasCalledBeginAppearanceTransition:(BOOL)arg1 ;
-(void)_setHasCalledEndAppearanceTransition:(BOOL)arg1 ;
-(void)_recordUIDismissal;
-(void)_informRemoteViewControllerOfParentIfNecessary;
-(void)_presentRemoteViewController;
-(BOOL)_hasCalledBeginAppearanceTransition;
-(BOOL)_hasCalledEndAppearanceTransition;
-(void)_setPunchingOut:(BOOL)arg1 ;
-(void)_setStatusViewHidden:(BOOL)arg1 ;
-(void)_setTypeToSiriViewHidden:(BOOL)arg1 ;
-(unsigned long long)lockStateForSiriRemoteViewController:(id)arg1 ;
-(void)enterUITrackingMode;
-(void)exitUITrackingMode;
-(BOOL)_isInitialSpeechRequest;
-(AFUIRequestOptions *)currentRequestOptions;
-(void)_setShowKeyboardIfTextInputEnabled:(BOOL)arg1 minimized:(BOOL)arg2 ;
-(void)_handleMicButtonTapFromSource:(long long)arg1 ;
-(void)_handleMicButtonLongPressBeganFromSource:(long long)arg1 ;
-(void)_handleMicButtonLongPressEndedFromSource:(long long)arg1 ;
-(void)_didDetectAudioRoutePickerTap;
-(void)_setUserUtteranceTapToEditInProgress:(BOOL)arg1 ;
-(void)_handleReportBugAction;
-(void)_handleHelpAction;
-(void)_handleReportBugLongPressAction;
-(void)startRequestWithActivationTrigger:(id)arg1 ;
-(void)handlePasscodeUnlockAndCancelRequest:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setVoiceTriggerEnabled:(BOOL)arg1 ;
-(void)_handleSiriDidActivateFromSource:(long long)arg1 ;
-(double)_viewDidAppearTime;
-(void)setCurrentCarPlaySupportedOEMAppIdList:(id)arg1 ;
-(void)_setRecordingStartedTimeValue:(id)arg1 ;
-(void)_setCurrentRequestOptions:(id)arg1 ;
-(BOOL)_isInHoldToTalkMode;
-(id)_currentRequestOptions;
-(BOOL)_canIgnoreHoldToTalkThreshold;
-(BOOL)_holdToTalkThresholdHasElapsed;
-(void)_stopRequestWithOptions:(id)arg1 afterDelay:(double)arg2 ;
-(void)_transitionToAutomaticEndpointMode;
-(id)_recordingStartedTimeValue;
-(double)_manualEndpointingThreshold;
-(void)_setInHoldToTalkMode:(BOOL)arg1 ;
-(void)_exitHoldToTalkMode;
-(void)_holdToTalkTriggerDidReleaseFromSource:(long long)arg1 ;
-(void)startRequestWithActivationTrigger:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_activationTriggerDidRelease:(id)arg1 ;
-(void)_enterHoldToTalkMode;
-(id)_routePickerController;
-(void)_setShowAudioRoutePicker:(BOOL)arg1 ;
-(void)_setAudioRoutePickerBluetoothOn:(BOOL)arg1 ;
-(void)presentRemoteViewControllerIfNecessary;
-(void)_presentDeferredFlamesViewIfNecessary;
-(void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2 ;
-(BOOL)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2 ;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(/*^block*/id)arg2 ;
-(void)setReceivedIncomingPhoneCall:(BOOL)arg1 ;
-(void)setShowsStatusBar:(BOOL)arg1 ;
-(void)proximityStatusChanged:(BOOL)arg1 ;
-(void)_enqueueRemoteViewControllerMessageBlockWithWeaklyReferencedRemoteViewController:(/*^block*/id)arg1 ;
-(long long)currentSource;
-(void)updateContexts:(long long)arg1 ;
-(void)updateViewForPercentageRevealed:(double)arg1 ;
-(void)handleViewFullyRevealed;
-(void)shortTapAction;
-(BOOL)hasQueuedTTS;
-(void)cancelTTS;
-(BOOL)_recordingStartedOnRoute;
-(void)_setRecordingStartedOnRoute:(BOOL)arg1 ;
-(BOOL)carDNDActive;
-(BOOL)receivedIncomingPhoneCall;
-(BOOL)turnsOnScreenOnAppearance;
-(void)setTurnsOnScreenOnAppearance:(BOOL)arg1 ;
-(BOOL)showsStatusBar;
-(void)setStatusBarEnabled:(BOOL)arg1 ;
-(BOOL)mapsGatekeeperEnabled;
-(void)setMapsGatekeeperEnabled:(BOOL)arg1 ;
-(id)_remoteViewControllerDispatchQueue;
-(SiriUIAudioRoutePickerController *)routePickerController;
-(void)setRoutePickerController:(SiriUIAudioRoutePickerController *)arg1 ;
-(BOOL)isViewDisappearing;
-(void)setViewDisappearing:(BOOL)arg1 ;
-(BOOL)_isPunchingOut;
-(BOOL)isListening;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<AFUISiriViewControllerDelegate>)arg1 ;
-(id<AFUISiriViewControllerDelegate>)delegate;
-(BOOL)isVisible;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)canBecomeFirstResponder;
-(UIView *)inputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(id<AFUISiriViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<AFUISiriViewControllerDataSource>)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewSafeAreaInsetsDidChange;
-(id)_remoteViewController;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)endSession;
-(void)preheat;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end

