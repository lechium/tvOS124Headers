/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SVSSiriViewControllerHosting.h>

@protocol AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate;
@class AFApplicationInfo, NSString;

@interface AFUISiriRemoteViewController : _UIRemoteViewController <SVSSiriViewControllerHosting> {

	id<AFUISiriRemoteViewControllerDataSource> _dataSource;
	id<AFUISiriRemoteViewControllerDelegate> _delegate;
	AFApplicationInfo* _viewServiceApplicationInfo;

}

@property (nonatomic,retain) AFApplicationInfo * viewServiceApplicationInfo;                            //@synthesize viewServiceApplicationInfo=_viewServiceApplicationInfo - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriRemoteViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriRemoteViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setSession:(id)arg1 ;
-(void)setRequestOptions:(id)arg1 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)preloadPluginBundles;
-(void)setStatusViewHidden:(BOOL)arg1 ;
-(void)setCarDisplaySnippetVisible:(BOOL)arg1 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1 ;
-(void)setBugReportingAvailable:(BOOL)arg1 ;
-(void)setHelpButtonEmphasized:(BOOL)arg1 ;
-(void)pulseHelpButton;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)serviceRequestsActivationSourceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)serviceRequestsDismissalWithDelayForTTS:(BOOL)arg1 userInfo:(id)arg2 ;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1 ;
-(void)serviceStartRequestWithOptions:(id)arg1 ;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOptions:(long long)arg3 replyHandler:(/*^block*/id)arg4 ;
-(void)notifyOnNextUserInteraction;
-(void)siriIdleAndQuietStatusDidChange:(BOOL)arg1 ;
-(void)setCarDisplayGatekeeperVisible:(BOOL)arg1 ;
-(void)setStatusViewDisabled:(BOOL)arg1 ;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3 ;
-(void)getScreenshotWithReplyHandler:(/*^block*/id)arg1 ;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)serviceDidPresentUserInterface;
-(void)serviceDidPresentConversationFromBreadcrumb;
-(void)serviceDidDetectMicButtonTap;
-(void)serviceDidDetectMicButtonLongPressBegan;
-(void)serviceDidDetectMicButtonLongPressEnded;
-(void)servicePresentationDidChangePeekMode:(unsigned long long)arg1 ;
-(void)serviceWillStartTest:(id)arg1 ;
-(void)serviceDidFinishTest:(id)arg1 ;
-(void)serviceFailTest:(id)arg1 withReason:(id)arg2 ;
-(void)serviceDidEnterUITrackingMode;
-(void)serviceDidExitUITrackingMode;
-(void)serviceDidDetectAudioRoutePickerTap;
-(void)serviceDidRequestKeyboard:(BOOL)arg1 minimized:(BOOL)arg2 ;
-(void)serviceDidRequestKeyboard:(BOOL)arg1 ;
-(void)serviceDidResetTextInput;
-(void)serviceWillBeginTapToEdit;
-(void)serviceDidEndTaptoEdit;
-(void)serviceDidRequestCurrentTextInput:(/*^block*/id)arg1 ;
-(void)setTypeToSiriViewHidden:(BOOL)arg1 ;
-(void)setViewServiceApplicationInfo:(AFApplicationInfo *)arg1 ;
-(void)preloadPresentationBundleWithIdentifier:(id)arg1 ;
-(void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3 ;
-(void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1 ;
-(void)siriWillHidePasscodeUnlockForResult:(long long)arg1 ;
-(void)siriDidHidePasscodeUnlock;
-(void)startRequestForText:(id)arg1 ;
-(void)siriKeyboardViewDidChange:(SCD_Struct_AF1*)arg1 ;
-(void)setSpeechSynthesis:(id)arg1 ;
-(void)didReceiveHelpAction;
-(void)didReceiveReportBugAction;
-(void)didReceiveBugButtonLongPress;
-(void)didReceiveShortTapAction;
-(void)setRunningPPT:(BOOL)arg1 withTestName:(id)arg2 testOptions:(id)arg3 ;
-(void)setWaitingForTelephonyToStart:(BOOL)arg1 ;
-(id)sessionDelegate;
-(id)speechSynthesisDelegate;
-(void)siriWillShowPasscodeUnlock;
-(void)setStatusBarFrame:(CGRect)arg1 ;
-(void)setStatusViewHeight:(double)arg1 ;
-(void)applicationWillEnterForeground;
-(AFApplicationInfo *)viewServiceApplicationInfo;
-(void)setDelegate:(id<AFUISiriRemoteViewControllerDelegate>)arg1 ;
-(id<AFUISiriRemoteViewControllerDelegate>)delegate;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<AFUISiriRemoteViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<AFUISiriRemoteViewControllerDataSource>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

