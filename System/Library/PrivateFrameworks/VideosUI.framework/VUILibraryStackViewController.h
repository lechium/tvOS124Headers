/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryFetchControllerViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSIndexPath, VUILibraryStackView, UICollectionView, NSString;

@interface VUILibraryStackViewController : VUILibraryFetchControllerViewController <UICollectionViewDelegate> {

	BOOL _requiresRelayout;
	NSIndexPath* _focusedIndexPath;
	VUILibraryStackView* _stackView;
	UICollectionView* _stackCollectionView;

}

@property (nonatomic,readonly) VUILibraryStackView * stackView;                     //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UICollectionView * stackCollectionView;              //@synthesize stackCollectionView=_stackCollectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(VUILibraryStackView *)stackView;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(long long)preferredStatusBarStyle;
-(UICollectionView *)stackCollectionView;
-(void)_updateNavigationBarPadding;
-(void)scrollToTop;
-(void)_invalidateLayouts;
@end

