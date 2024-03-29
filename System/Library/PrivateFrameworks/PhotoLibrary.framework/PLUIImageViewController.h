/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PLVideoViewDelegate.h>
#import <libobjc.A.dylib/PLImageLoadingQueueDelegate.h>
#import <libobjc.A.dylib/PLPhotoTileViewControllerDelegate.h>
#import <libobjc.A.dylib/PLCropOverlayDelegate.h>

@class PLManagedAsset, UIImage, PLCropOverlay, PLPhotoTileViewController, PLVideoView, PLVideoRemaker, PLProgressView, NSURL, PLImageCache, PLImageLoadingQueue, PLImageSource, NSString;

@interface PLUIImageViewController : UIViewController <PLVideoViewDelegate, PLImageLoadingQueueDelegate, PLPhotoTileViewControllerDelegate, PLCropOverlayDelegate> {

	PLManagedAsset* _photo;
	CGImageRef _imageRef;
	UIImage* _image;
	CGRect _cropRect;
	PLCropOverlay* _cropOverlay;
	PLPhotoTileViewController* _imageTile;
	PLVideoView* _videoView;
	PLVideoRemaker* _remaker;
	PLProgressView* _progressView;
	NSURL* _videoURL;
	PLImageCache* _imageCache;
	PLImageLoadingQueue* _imageLoadingQueue;
	PLImageSource* _imageSource;
	long long _previousStatusBarStyle;
	long long _newStatusBarStyle;
	unsigned _allowEditing : 1;
	unsigned _statusBarWasHidden : 1;
	unsigned _isVideo : 1;
	unsigned _isDisappearing : 1;
	unsigned _remaking : 1;

}

@property (nonatomic,readonly) NSString * localizedUseButtonTitle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhoto:(id)arg1 ;
-(int)imageFormat;
-(void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forAsset:(id)arg3 fromSource:(id)arg4 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)cropOverlayPlay:(id)arg1 ;
-(void)cropOverlayPause:(id)arg1 ;
-(int)cropOverlayMode;
-(BOOL)wantsAutoloopUI;
-(NSString *)localizedUseButtonTitle;
-(CGRect)_viewFrame;
-(CGRect)previewFrame;
-(Class)_viewClass;
-(unsigned long long)_contentAutoresizingMask;
-(void)setupNavigationItem;
-(id)chooseButtonTitle;
-(unsigned long long)_tileAutoresizingMask;
-(BOOL)viewImageBeforeSelecting;
-(BOOL)clientIsWallpaper;
-(BOOL)forceNativeScreenScale;
-(BOOL)force1XCroppedImage;
-(BOOL)wantsLegacyImageUI;
-(void)_updateGestureSettings;
-(BOOL)wantsStatusBarVisible;
-(long long)desiredStatusBarAnimation;
-(BOOL)isDisplayedInPhotoPicker;
-(BOOL)imagePickerAllowsEditing;
-(void)_editabilityChanged:(id)arg1 ;
-(void)didUpdateNavigationBarAppearance;
-(void)_enableCropOverlay;
-(void)handleAutoloopSelected;
-(void)_handleVideoSelected;
-(unsigned long long)imagePickerSavingOptions;
-(void)handleMediaSelectionUsingTile:(id)arg1 managedAsset:(id)arg2 args:(id)arg3 includeEditing:(BOOL)arg4 ;
-(void)_enableCropOverlayIfNecessary;
-(BOOL)doNotTranscode;
-(void)handleVideoSelectionWithURL:(id)arg1 args:(id)arg2 ;
-(id)exportPreset;
-(void)attachScrubberPalette;
-(BOOL)disableVideoTrimMessage;
-(id)_trimMessage;
-(void)didChooseVideoAtURL:(id)arg1 options:(id)arg2 ;
-(double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2 ;
-(BOOL)videoViewCanBeginPlayback:(id)arg1 ;
-(void)videoViewIsReadyToBeginPlayback:(id)arg1 ;
-(void)videoViewDidBeginPlayback:(id)arg1 ;
-(void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2 ;
-(BOOL)videoViewCanCreateMetadata:(id)arg1 ;
-(void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2 ;
-(void)photoTileViewController:(id)arg1 didAppear:(BOOL)arg2 ;
-(void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2 ;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)arg1 ;
-(void)photoTileViewControllerCancelImageRequests:(id)arg1 ;
-(void)photoTileViewControllerSingleTap:(id)arg1 ;
-(void)photoTileViewControllerDoubleTap:(id)arg1 ;
-(void)photoTileViewControllerWillBeginGesture:(id)arg1 ;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(BOOL)photoTileViewControllerAllowsEditing:(id)arg1 ;
-(id)initWithImage:(CGImageRef)arg1 cropRect:(CGRect)arg2 ;
-(id)cropOverlay;
-(void)setCropOverlayDone;
-(void)beginDisplayingProgress;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(void)videoView:(id)arg1 scrubberWasCreated:(id)arg2 slalomRegionEditor:(id)arg3 ;
-(void)videoViewDidPausePlayback:(id)arg1 didFinish:(BOOL)arg2 ;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1 ;
-(id)initWithVideoURL:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSString *)localizedTitle;
-(long long)_imagePickerStatusBarStyle;
-(void)_removedAsTopViewController;
-(id)initWithImageData:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)initWithUIImage:(id)arg1 cropRect:(CGRect)arg2 ;
-(BOOL)_displaysFullScreen;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(id)videoMaximumDuration;
-(id)videoQuality;
-(long long)preferredStatusBarUpdateAnimation;
-(long long)_preferredWhitePointAdaptivityStyle;
-(BOOL)prefersStatusBarHidden;
@end

