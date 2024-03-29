/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class IKViewElement, IKImageElement, UIImage, UIImageView, CALayer, UIView, UIViewController, IKAudioElement, UICollectionView, NSArray, NSIndexPath, _TVProductCollectionViewCell, NSString;

@interface _TVProductTemplateController : _TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, TVAppTemplateImpressionable, CAAnimationDelegate, UIPopoverPresentationControllerDelegate> {

	IKViewElement* _templateElement;
	IKImageElement* _bgImageElement;
	IKImageElement* _heroImageElement;
	UIImage* _bgImage;
	UIImageView* _bgImageView;
	CALayer* _bgBlurSublayer;
	UIView* _backdropView;
	UIView* _backdropAccessoryView;
	IKViewElement* _backdropTintElement;
	UIView* _backdropTintView;
	UIViewController* _backdropTintViewController;
	UIImageView* _vignetteView;
	UIImageView* _tvVignetteView;
	IKAudioElement* _bgAudioElement;
	IKViewElement* _productBannerElement;
	IKViewElement* _infoListElement;
	IKViewElement* _titleElement;
	UICollectionView* _collectionView;
	UIViewController* _bannerViewController;
	NSArray* _viewControllers;
	NSArray* _rowSpacingMetricsList;
	double _productBannerHeight;
	BOOL _isPartialScrollingTemplate;
	NSIndexPath* _autoHighlightIndexPath;
	BOOL _fadedIn;
	double _impressionThreshold;
	BOOL _preloadOnLayout;
	CGSize _preloadContentSize;
	UIImageView* _topHeroImageView;
	UIView* _topHeroSeparatorView;
	UIImageView* _topHeroGradientView;
	BOOL _topHeroImageVisible;
	BOOL _lightStatusBar;
	IKImageElement* _topHeroImageElement;
	double _largeTitleHeight;
	BOOL _sportsProductTemplate;
	_TVProductCollectionViewCell* _bannerCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelImpressionsUpdate;
-(CGSize)_backgroundImageProxySize;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)_updateImpressions;
-(void)_recordImpressionsForVisibleView;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgElement:(id)arg1 ;
-(BOOL)_isBackdropNeeded;
-(void)_updateIndexDisplayMode;
-(void)updateWithProductTemplate:(id)arg1 ;
-(id)_spacingMetricsForViewControllers:(id)arg1 contentSize:(CGSize*)arg2 ;
-(void)_configureWithBannerElement:(id)arg1 ;
-(BOOL)_shouldUsePartialScrollingTemplate;
-(id)_adamIDForElement:(id)arg1 ;
-(id)_canonicalIDForElement:(id)arg1 ;
-(id)_yOffsetForView:(id)arg1 withScrollView:(id)arg2 targetYOffset:(double)arg3 ;
-(id)_relatedSectionHeaderView;
-(UIEdgeInsets)_cellMarginForIndex:(long long)arg1 partialMargins:(UIEdgeInsets*)arg2 ;
-(BOOL)_sportsLandscapePhone;
-(BOOL)_shouldShowTopHeroImage;
-(CGSize)_topHeroImageViewSize;
-(unsigned long long)_lastFocusableCellIndex;
-(void)_purgeBgImages;
-(BOOL)_sportsLandscapePhoneIsOverlaySection:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(long long)_blurEffectStyle;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(id)_backgroundImageProxy;
@end

