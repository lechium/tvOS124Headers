/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <TVMLKit/_TVCollectionViewDelegate.h>

@class NSIndexPath, NSArray, IKViewElement, UIImage, NSString;

@interface _TVShowcaseViewController : UIViewController <UICollectionViewDataSource, _TVCollectionViewDelegate> {

	BOOL _updateAutohighlight;
	NSIndexPath* _pendingPreviewedIndexPath;
	NSIndexPath* _lastPreviewedIndexPath;
	double _lastPreviewDelay;
	NSIndexPath* _indexPathForFocusedItem;
	/*^block*/id _transitionHandler;
	NSArray* _lockupElements;
	IKViewElement* _bannerElement;

}

@property (nonatomic,copy) NSArray * lockupElements;                           //@synthesize lockupElements=_lockupElements - In the implementation block
@property (nonatomic,retain) IKViewElement * bannerElement;                    //@synthesize bannerElement=_bannerElement - In the implementation block
@property (nonatomic,retain) UIImage * bgImage; 
@property (nonatomic,copy) NSIndexPath * indexPathForFocusedItem;              //@synthesize indexPathForFocusedItem=_indexPathForFocusedItem - In the implementation block
@property (nonatomic,copy) id transitionHandler;                               //@synthesize transitionHandler=_transitionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)bgImage;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(void)setBgImage:(UIImage *)arg1 ;
-(void)_dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)_delayedUpdatePreview;
-(void)setLockupElements:(NSArray *)arg1 ;
-(void)setBannerElement:(IKViewElement *)arg1 ;
-(void)setIndexPathForFocusedItem:(NSIndexPath *)arg1 ;
-(NSArray *)lockupElements;
-(void)_updateLockupInforViewForIndexPath:(id)arg1 ;
-(id)transitionHandler;
-(void)updateWithLockupElements:(id)arg1 bannerElement:(id)arg2 focusedIndexPath:(id)arg3 update:(BOOL)arg4 ;
-(NSIndexPath *)indexPathForFocusedItem;
-(void)setTransitionHandler:(id)arg1 ;
-(IKViewElement *)bannerElement;
-(void)dealloc;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)loadView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
@end

