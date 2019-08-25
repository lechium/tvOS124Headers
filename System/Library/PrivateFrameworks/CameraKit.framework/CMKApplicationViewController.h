/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKCameraViewController.h>
#import <libobjc.A.dylib/CMKCameraRollObserver.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol PLApplicationCameraViewControllerDelegate, NSObject;
@class NSDictionary, CMKKeepDaemonAliveAssertion, UIViewController, UIView, NSString;

@interface CMKApplicationViewController : CMKCameraViewController <CMKCameraRollObserver, UINavigationControllerDelegate> {

	/*^block*/id _previewButtonAction;
	/*^block*/id _doneButtonAction;
	NSDictionary* _configuration;
	id<PLApplicationCameraViewControllerDelegate> _delegate;
	BOOL _usesSessionAlbum;
	double _sessionStartTime;
	CMKKeepDaemonAliveAssertion* _keepDaemonAliveAssertion;
	BOOL _isReadyToTest;
	long long _testPictureCounter;
	long long _testPicturesReceivedCounter;
	double _testPictureRepeatDelay;
	BOOL __shouldShowCameraRoll;
	BOOL __dismissingCameraRoll;
	BOOL __dismissingCameraRollForSuspension;
	BOOL __shouldRetryDismissal;
	BOOL __hasLockedSinceLastConfigurationChange;
	BOOL __didApplyConfigurationToCameraView;
	int __lockToResetToken;
	UIViewController* __cameraRollViewController;
	UIView* __rootContainerView;
	UIView* __autorotationCorrectionView;
	id<NSObject> __cameraRollNotificationToken;

}

@property (assign,setter=_setShouldShowCameraRoll:,nonatomic) BOOL _shouldShowCameraRoll;                                                                                    //@synthesize _shouldShowCameraRoll=__shouldShowCameraRoll - In the implementation block
@property (assign,setter=_setDismissingCameraRoll:,getter=_isDismissingCameraRoll,nonatomic) BOOL _dismissingCameraRoll;                                                     //@synthesize _dismissingCameraRoll=__dismissingCameraRoll - In the implementation block
@property (assign,setter=_setDismissingCameraRollForSuspension:,getter=_isDismissingCameraRollForSuspension,nonatomic) BOOL _dismissingCameraRollForSuspension;              //@synthesize _dismissingCameraRollForSuspension=__dismissingCameraRollForSuspension - In the implementation block
@property (nonatomic,readonly) BOOL _shouldRetryDismissal;                                                                                                                   //@synthesize _shouldRetryDismissal=__shouldRetryDismissal - In the implementation block
@property (nonatomic,readonly) UIViewController * _cameraRollViewController;                                                                                                 //@synthesize _cameraRollViewController=__cameraRollViewController - In the implementation block
@property (assign,setter=_setHasLockedSinceLastConfigurationChange:,nonatomic) BOOL _hasLockedSinceLastConfigurationChange;                                                  //@synthesize _hasLockedSinceLastConfigurationChange=__hasLockedSinceLastConfigurationChange - In the implementation block
@property (nonatomic,readonly) UIView * _rootContainerView;                                                                                                                  //@synthesize _rootContainerView=__rootContainerView - In the implementation block
@property (nonatomic,readonly) UIView * _autorotationCorrectionView;                                                                                                         //@synthesize _autorotationCorrectionView=__autorotationCorrectionView - In the implementation block
@property (nonatomic,readonly) int _lockToResetToken;                                                                                                                        //@synthesize _lockToResetToken=__lockToResetToken - In the implementation block
@property (assign,nonatomic) BOOL _didApplyConfigurationToCameraView;                                                                                                        //@synthesize _didApplyConfigurationToCameraView=__didApplyConfigurationToCameraView - In the implementation block
@property (nonatomic,readonly) id<NSObject> _cameraRollNotificationToken;                                                                                                    //@synthesize _cameraRollNotificationToken=__cameraRollNotificationToken - In the implementation block
@property (nonatomic,copy) id previewButtonAction;                                                                                                                           //@synthesize previewButtonAction=_previewButtonAction - In the implementation block
@property (assign,nonatomic) id<PLApplicationCameraViewControllerDelegate> delegate;                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long testPictureCounter;                                                                                                                   //@synthesize testPictureCounter=_testPictureCounter - In the implementation block
@property (assign,nonatomic) double testPictureRepeatDelay;                                                                                                                  //@synthesize testPictureRepeatDelay=_testPictureRepeatDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSessionID:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3 ;
-(void)_kickoffCameraControllerPreview;
-(void)_previewStarted:(id)arg1 ;
-(void)_cameraRollReload:(id)arg1 ;
-(void)_setupLockToResetNotifications;
-(void)_teardownLockToResetNotifications;
-(void)setPreviewButtonAction:(id)arg1 ;
-(void)_applyConfiguration;
-(void)_setHasLockedSinceLastConfigurationChange:(BOOL)arg1 ;
-(void)_saveConfiguration;
-(void)_updateCameraRollSession;
-(void)_createPhysicalCaptureRecognizerIfNecessary;
-(void)viewWillShowForLaunch;
-(void)_applyAutorotationCorrectingTransformForOrientation:(long long)arg1 ;
-(void)prepareForSuspension;
-(CGAffineTransform)_autorotationCorrectingTransformFromOrientation:(long long)arg1 ;
-(void)presentCameraRollAboveCameraView:(id)arg1 ;
-(void)_setShouldShowCameraRoll:(BOOL)arg1 ;
-(void)animateBlurForSuspension;
-(void)dismissCameraRollAnimated:(BOOL)arg1 forSuspension:(BOOL)arg2 ;
-(BOOL)_shouldShowCameraRoll;
-(id)newAlbumNavigationControllerForCameraRoll:(id)arg1 ;
-(void)_updatePhysicalButtonCapturedEnabled;
-(void)stopCameraPreviewAnimated:(BOOL)arg1 ;
-(void)startPictureTest;
-(void)_startPictureTestAfterSeconds:(double)arg1 ;
-(BOOL)_shouldResetMode:(id)arg1 ;
-(void)_defaultCameraDevice:(id*)arg1 cameraMode:(id*)arg2 ;
-(id)_dictionaryFromPackedArray:(id)arg1 ;
-(BOOL)showingCameraPreview;
-(BOOL)_hasLockedSinceLastConfigurationChange;
-(BOOL)_shouldResumeTorch;
-(id)_packedArrayFromDictionary:(id)arg1 ;
-(void)_refreshCameraUIForAlbumChange;
-(void)prepareAlbumNavigationControllerForReuse:(id)arg1 withCameraRoll:(id)arg2 ;
-(void)reloadAlbumNavigationController:(id)arg1 withCameraRoll:(id)arg2 ;
-(UIViewController *)_cameraRollViewController;
-(void)startCameraPreview;
-(void)_didPerformPhysicalCapture:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 startPreviewImmediately:(BOOL)arg2 ;
-(void)dismissCameraRollForCameraView:(id)arg1 ;
-(BOOL)cameraViewShouldShowPreviewAfterSelection:(id)arg1 ;
-(void)cameraViewFinishedSuspensionBlur:(id)arg1 ;
-(void)cameraViewDidFinishUnblurringForPreview:(id)arg1 ;
-(void)testSetHDROn:(BOOL)arg1 ;
-(void)testSetAutofocusDisabled:(BOOL)arg1 ;
-(void)setTestPictureCounter:(long long)arg1 ;
-(void)cameraViewFinishedTakingPicture:(id)arg1 ;
-(BOOL)_cameraIsRunning;
-(void)_startCameraPreviewWithPreviewStartedBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldAnimateBlurForSuspension;
-(id)_stringForHDRMode:(int)arg1 ;
-(id)_stringForTimerDuration:(long long)arg1 ;
-(void)_makeViewControllersPerformSelector:(SEL)arg1 withNotification:(id)arg2 ;
-(void)dismissCameraRoll:(id)arg1 ;
-(void)setUsesSessionAlbum:(BOOL)arg1 ;
-(long long)testPictureCounter;
-(double)testPictureRepeatDelay;
-(void)setTestPictureRepeatDelay:(double)arg1 ;
-(id)previewButtonAction;
-(BOOL)_isDismissingCameraRoll;
-(void)_setDismissingCameraRoll:(BOOL)arg1 ;
-(BOOL)_isDismissingCameraRollForSuspension;
-(void)_setDismissingCameraRollForSuspension:(BOOL)arg1 ;
-(BOOL)_shouldRetryDismissal;
-(UIView *)_rootContainerView;
-(UIView *)_autorotationCorrectionView;
-(int)_lockToResetToken;
-(BOOL)_didApplyConfigurationToCameraView;
-(void)set_didApplyConfigurationToCameraView:(BOOL)arg1 ;
-(id<NSObject>)_cameraRollNotificationToken;
-(void)saveCameraConfiguration;
-(void)dismissCameraRollForSuspension;
-(void)startCameraPreviewWithSavedConfiguration;
-(void)stopCameraPreview;
-(void)cameraPreviewWellImageDidChange:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)preferencesDidChange;
-(void)prepareForDismissal;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PLApplicationCameraViewControllerDelegate>)arg1 ;
-(id<PLApplicationCameraViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)_getRotationContentSettings:(SCD_Struct_CM4*)arg1 ;
-(void)applicationDidResume;
-(void)applicationWillSuspend;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)takePicture;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)prefersStatusBarHidden;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)prepareForDefaultImageSnapshot;
@end

