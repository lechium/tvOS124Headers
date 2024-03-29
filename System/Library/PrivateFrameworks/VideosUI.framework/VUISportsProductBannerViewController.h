/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class IKViewElement, VUISportsProductBannerView;

@interface VUISportsProductBannerViewController : UIViewController {

	IKViewElement* _viewElement;
	VUISportsProductBannerView* _bannerView;

}

@property (nonatomic,retain) VUISportsProductBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                          //@synthesize viewElement=_viewElement - In the implementation block
-(VUISportsProductBannerView *)bannerView;
-(void)setBannerView:(VUISportsProductBannerView *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_configureViewSubviews;
@end

