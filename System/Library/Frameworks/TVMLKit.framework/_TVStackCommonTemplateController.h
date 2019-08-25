/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>
#import <TVMLKit/_TVCollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UIView, _TVFocusCaptureView, IKViewElement, _TVStackCollectionView, IKAudioElement, IKImageElement, UIImage, NSArray, UIViewController, _TVStackWrappingView, NSString;

@interface _TVStackCommonTemplateController : _TVBgImageLoadingViewController <UIGestureRecognizerDelegate, TVAppTemplateImpressionable, _TVCollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {

	UIView* _overlayView;
	_TVFocusCaptureView* _disabledTemplateFocusCaptureView;
	double _impressionThreshold;
	IKViewElement* _viewElement;
	_TVStackCollectionView* _collectionView;
	IKViewElement* _collectionListElement;
	IKAudioElement* _audioElement;
	IKViewElement* _backgroundElement;
	IKImageElement* _heroImgElement;
	IKImageElement* _bgImgElement;
	IKImageElement* _bannerImgElement;
	IKImageElement* _uberImgElement;
	UIImage* _bgImage;
	NSArray* _supplementaryViewControllers;
	UIViewController* _focusedSupplementaryViewController;

}

@property (nonatomic,retain) IKViewElement * viewElement;                                        //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKAudioElement * audioElement;                                      //@synthesize audioElement=_audioElement - In the implementation block
@property (nonatomic,retain) IKViewElement * backgroundElement;                                  //@synthesize backgroundElement=_backgroundElement - In the implementation block
@property (nonatomic,retain) IKViewElement * collectionListElement;                              //@synthesize collectionListElement=_collectionListElement - In the implementation block
@property (nonatomic,retain) IKImageElement * heroImgElement;                                    //@synthesize heroImgElement=_heroImgElement - In the implementation block
@property (nonatomic,retain) IKImageElement * bgImgElement;                                      //@synthesize bgImgElement=_bgImgElement - In the implementation block
@property (nonatomic,retain) IKImageElement * bannerImgElement;                                  //@synthesize bannerImgElement=_bannerImgElement - In the implementation block
@property (nonatomic,retain) IKImageElement * uberImgElement;                                    //@synthesize uberImgElement=_uberImgElement - In the implementation block
@property (nonatomic,retain) UIImage * bgImage;                                                  //@synthesize bgImage=_bgImage - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryViewControllers;                               //@synthesize supplementaryViewControllers=_supplementaryViewControllers - In the implementation block
@property (nonatomic,retain) UIViewController * focusedSupplementaryViewController;              //@synthesize focusedSupplementaryViewController=_focusedSupplementaryViewController - In the implementation block
@property (nonatomic,retain,readonly) _TVStackWrappingView * stackWrappingView; 
@property (nonatomic,retain) _TVStackCollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelImpressionsUpdate;
-(_TVStackWrappingView *)stackWrappingView;
-(UIImage *)bgImage;
-(void)updateBackdropMaskFactor;
-(IKImageElement *)bgImgElement;
-(void)updateBackgroundAndBackdrop;
-(IKAudioElement *)audioElement;
-(void)setAudioElement:(IKAudioElement *)arg1 ;
-(id)_overlayView;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(void)setBgImage:(UIImage *)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2 ;
-(void)_updateImpressions;
-(void)_recordImpressionsForVisibleView;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_updateViewLayout;
-(void)_dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(BOOL)_isBackdropNeeded;
-(id)_flowLayout;
-(IKViewElement *)collectionListElement;
-(UIEdgeInsets)collectionListMargin;
-(NSArray *)supplementaryViewControllers;
-(BOOL)_updateSupplementaryViewControllersWithElements:(id)arg1 updateStyles:(BOOL)arg2 ;
-(void)_updateBackgroundViews;
-(void)_updateViewOverlay;
-(void)_updateViewSupplementaryViews;
-(void)_updateIndexDisplayMode;
-(id)_preferredFocusedSupplementaryView;
-(UIViewController *)focusedSupplementaryViewController;
-(void)setFocusedSupplementaryViewController:(UIViewController *)arg1 ;
-(void)setSupplementaryViewControllers:(NSArray *)arg1 ;
-(long long)_supplementaryViewSectionIndex;
-(void)setCollectionListElement:(IKViewElement *)arg1 ;
-(void)setBackgroundElement:(IKViewElement *)arg1 ;
-(IKImageElement *)heroImgElement;
-(void)setHeroImgElement:(IKImageElement *)arg1 ;
-(void)setBgImgElement:(IKImageElement *)arg1 ;
-(IKImageElement *)bannerImgElement;
-(void)setBannerImgElement:(IKImageElement *)arg1 ;
-(IKImageElement *)uberImgElement;
-(void)setUberImgElement:(IKImageElement *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(_TVStackCollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)_blurEffectStyle;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)setCollectionView:(_TVStackCollectionView *)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)scrollToTop;
-(id)_backgroundImageProxy;
-(IKViewElement *)backgroundElement;
@end
