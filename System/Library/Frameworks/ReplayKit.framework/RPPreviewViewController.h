/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/RPVideoEditorViewControllerDelegate.h>

@protocol RPPreviewViewControllerDelegate;
@class NSURL, RPVideoEditorHostViewController;

@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate> {

	BOOL _wasStatusBarHidden;
	id<RPPreviewViewControllerDelegate> _previewControllerDelegate;
	long long _mode;
	NSURL* _movieURL;
	RPVideoEditorHostViewController* _hostViewController;

}

@property (assign,nonatomic) BOOL wasStatusBarHidden;                                                           //@synthesize wasStatusBarHidden=_wasStatusBarHidden - In the implementation block
@property (nonatomic,retain) NSURL * movieURL;                                                                  //@synthesize movieURL=_movieURL - In the implementation block
@property (nonatomic,retain) RPVideoEditorHostViewController * hostViewController;                              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (assign,nonatomic,__weak) id<RPPreviewViewControllerDelegate> previewControllerDelegate;              //@synthesize previewControllerDelegate=_previewControllerDelegate - In the implementation block
@property (assign,nonatomic) long long mode;                                                                    //@synthesize mode=_mode - In the implementation block
+(void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)loadPreviewViewControllerWithMovieURL:(id)arg1 attachmentURL:(id)arg2 overrideShareMessage:(id)arg3 overrideTintColor:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)loadPreviewViewControllerWithMovieURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHostViewController:(RPVideoEditorHostViewController *)arg1 ;
-(void)setPreviewControllerDelegate:(id<RPPreviewViewControllerDelegate>)arg1 ;
-(void)extensionDidFinishWithActivityTypes:(id)arg1 ;
-(void)setWasStatusBarHidden:(BOOL)arg1 ;
-(BOOL)wasStatusBarHidden;
-(id<RPPreviewViewControllerDelegate>)previewControllerDelegate;
-(void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2 ;
-(void)setMovieURL:(NSURL *)arg1 ;
-(NSURL *)movieURL;
-(RPVideoEditorHostViewController *)hostViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
@end

