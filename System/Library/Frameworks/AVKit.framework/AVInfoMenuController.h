/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <AVKit/AVInfoCollectionViewHorizontalLayoutDelegate.h>

@protocol AVInfoMenuDelegate;
@class UIVisualEffectView, UIView, AVInfoPanelContentViewController, AVInfoMenuTransitioningAnimation, NSArray, NSIndexPath, UICollectionView, NSLayoutConstraint, NSString;

@interface AVInfoMenuController : UIViewController <UICollectionViewDataSource, AVInfoCollectionViewHorizontalLayoutDelegate> {

	UIVisualEffectView* _dividerContainer;
	UIView* _divider;
	AVInfoPanelContentViewController* _selectedViewController;
	double _timeOfLastFocusChange;
	AVInfoMenuTransitioningAnimation* _transitioningAnimation;
	id<AVInfoMenuDelegate> _delegate;
	NSArray* _viewControllers;
	NSIndexPath* _selectedIndexPath;
	UICollectionView* _collectionView;
	UIView* _panelWrapperView;
	NSLayoutConstraint* _panelWrapperViewHeightConstraint;

}

@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                        //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UIView * panelWrapperView;                                            //@synthesize panelWrapperView=_panelWrapperView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * panelWrapperViewHeightConstraint;                  //@synthesize panelWrapperViewHeightConstraint=_panelWrapperViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) UIView * menuView; 
@property (assign,nonatomic,__weak) id<AVInfoMenuDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                                                //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex; 
@property (nonatomic,retain) AVInfoPanelContentViewController * selectedViewController; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUseClassicMenuMetrics:(BOOL)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(id)infoMenuLayout;
-(id)dividerContainer;
-(void)_focusIndexPath:(id)arg1 ;
-(CGSize)preferredSizeForViewController:(id)arg1 ;
-(void)transitionSelectionFrom:(id)arg1 to:(id)arg2 animated:(BOOL)arg3 ;
-(void)_interruptTransitioningAnimation;
-(UIView *)panelWrapperView;
-(NSLayoutConstraint *)panelWrapperViewHeightConstraint;
-(void)setPanelWrapperViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)divider;
-(id)init;
-(void)setDelegate:(id<AVInfoMenuDelegate>)arg1 ;
-(id<AVInfoMenuDelegate>)delegate;
-(UIView *)backgroundView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(AVInfoPanelContentViewController *)selectedViewController;
-(void)setSelectedViewController:(AVInfoPanelContentViewController *)arg1 ;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(BOOL)_isTransitioning;
-(UIView *)menuView;
@end
