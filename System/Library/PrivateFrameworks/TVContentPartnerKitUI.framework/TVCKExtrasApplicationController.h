/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVApplicationController.h>

@class _TVImageView, UIVisualEffectView, UIActivityIndicatorView;

@interface TVCKExtrasApplicationController : TVApplicationController {

	BOOL _extrasDidPushRoot;
	_TVImageView* _loadingImageView;
	UIVisualEffectView* _loadingVisualEffectView;
	UIActivityIndicatorView* _loadingSpinnerView;

}

@property (nonatomic,readonly) BOOL extrasDidPushRoot;                                    //@synthesize extrasDidPushRoot=_extrasDidPushRoot - In the implementation block
@property (nonatomic,readonly) _TVImageView * loadingImageView;                           //@synthesize loadingImageView=_loadingImageView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * loadingVisualEffectView;              //@synthesize loadingVisualEffectView=_loadingVisualEffectView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * loadingSpinnerView;              //@synthesize loadingSpinnerView=_loadingSpinnerView - In the implementation block
+(id)extrasLaunchContextForURL:(id)arg1 adamID:(id)arg2 actionParams:(id)arg3 previewURL:(id)arg4 loadingImage:(id)arg5 lightTheme:(BOOL)arg6 ;
-(id)_bestURLForSrcSet:(id)arg1 ;
-(id)_parseSrcset:(id)arg1 ;
-(id)initWithContext:(id)arg1 window:(id)arg2 delegate:(id)arg3 ;
-(void)presentWithViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(_TVImageView *)loadingImageView;
-(void)_showSpinner;
-(void)_controllerDidDisplay:(id)arg1 ;
-(void)_hideExtrasLoadingImageView;
-(UIVisualEffectView *)loadingVisualEffectView;
-(UIActivityIndicatorView *)loadingSpinnerView;
-(BOOL)extrasDidPushRoot;
-(void)_hideSpinner;
@end
