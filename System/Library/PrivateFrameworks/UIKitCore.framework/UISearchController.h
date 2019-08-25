/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerPresenting.h>
#import <UIKitCore/_UIScrollViewScrollObserver_Internal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerAnimatedTransitioning, UISearchResultsUpdating, UISearchControllerDelegate;
@class UISearchBar, _UISearchControllerDidScrollDelegate, UISystemInputViewController, UITapGestureRecognizer, UIView, _UINavigationControllerManagedSearchPalette, UIViewController, NSString;

@interface UISearchController : UIViewController <UIViewControllerPresenting, _UIScrollViewScrollObserver_Internal, NSCoding, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	UISearchBar* _searchBar;
	int _barPresentationStyle;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id _windowWillAnimateToken;
	_UISearchControllerDidScrollDelegate* _didScrollDelegate;
	UISystemInputViewController* _systemInputViewController;
	BOOL _shouldFocusResults;
	UITapGestureRecognizer* _backButtonDismissGestureRecognizer;
	UITapGestureRecognizer* _doneButtonGestureRecognizer;
	long long _lastKnownInterfaceOrientation;
	SCD_Struct_UI21 _controllerFlags;
	BOOL _showsSearchResultsController;
	BOOL _automaticallyShowsCancelButton;
	BOOL _obscuresBackgroundDuringPresentation;
	BOOL _hidesNavigationBarDuringPresentation;
	BOOL __showResultsForEmptySearch;
	BOOL __shouldRespectPreferredContentSize;
	BOOL _automaticallyShowsSearchResultsController;
	UIView* _resultsControllerViewContainer;
	_UINavigationControllerManagedSearchPalette* _managedPalette;
	id<UISearchResultsUpdating> _searchResultsUpdater;
	id<UISearchControllerDelegate> _delegate;
	UIViewController* _searchResultsController;
	long long __previousSearchBarPosition;
	double __resultsContentScrollViewPresentationOffset;
	UIView* __systemInputMarginView;
	unsigned long long __requestedInteractionModel;

}

@property (nonatomic,readonly) int _barPresentationStyle;                                                                                                                                         //@synthesize barPresentationStyle=_barPresentationStyle - In the implementation block
@property (nonatomic,readonly) BOOL _searchbarWasTableHeaderView; 
@property (assign,nonatomic) long long _previousSearchBarPosition;                                                                                                                                //@synthesize _previousSearchBarPosition=__previousSearchBarPosition - In the implementation block
@property (nonatomic,retain) UIView * _resultsControllerViewContainer;                                                                                                                            //@synthesize resultsControllerViewContainer=_resultsControllerViewContainer - In the implementation block
@property (assign,nonatomic) double _resultsContentScrollViewPresentationOffset;                                                                                                                  //@synthesize _resultsContentScrollViewPresentationOffset=__resultsContentScrollViewPresentationOffset - In the implementation block
@property (nonatomic,readonly) UISystemInputViewController * _systemInputViewController; 
@property (nonatomic,retain) UIView * _systemInputMarginView;                                                                                                                                     //@synthesize _systemInputMarginView=__systemInputMarginView - In the implementation block
@property (nonatomic,retain,readonly) _UINavigationControllerManagedSearchPalette * _managedPalette;                                                                                              //@synthesize managedPalette=_managedPalette - In the implementation block
@property (assign,setter=_setShowResultsForEmptySearch:,nonatomic) BOOL _showResultsForEmptySearch;                                                                                               //@synthesize _showResultsForEmptySearch=__showResultsForEmptySearch - In the implementation block
@property (assign,setter=_setRequestedInteractionModel:,nonatomic) unsigned long long _requestedInteractionModel;                                                                                 //@synthesize _requestedInteractionModel=__requestedInteractionModel - In the implementation block
@property (assign,setter=_setShouldRespectPreferredContentSize:,nonatomic) BOOL _shouldRespectPreferredContentSize;                                                                               //@synthesize _shouldRespectPreferredContentSize=__shouldRespectPreferredContentSize - In the implementation block
@property (assign,setter=_setAutomaticallyShowsCancelButton:,nonatomic) BOOL _automaticallyShowsCancelButton;                                                                                     //@synthesize automaticallyShowsCancelButton=_automaticallyShowsCancelButton - In the implementation block
@property (assign,setter=_setAutomaticallyShowsSearchResultsController:,getter=_automaticallyShowsSearchResultsController,nonatomic) BOOL automaticallyShowsSearchResultsController;              //@synthesize automaticallyShowsSearchResultsController=_automaticallyShowsSearchResultsController - In the implementation block
@property (assign,setter=_setShowsSearchResultsController:,getter=_showsSearchResultsController,nonatomic) BOOL showsSearchResultsController;                                                     //@synthesize showsSearchResultsController=_showsSearchResultsController - In the implementation block
@property (assign,nonatomic,__weak) id<UISearchResultsUpdating> searchResultsUpdater;                                                                                                             //@synthesize searchResultsUpdater=_searchResultsUpdater - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic,__weak) id<UISearchControllerDelegate> delegate;                                                                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL dimsBackgroundDuringPresentation; 
@property (assign,nonatomic) BOOL obscuresBackgroundDuringPresentation;                                                                                                                           //@synthesize obscuresBackgroundDuringPresentation=_obscuresBackgroundDuringPresentation - In the implementation block
@property (assign,nonatomic) BOOL hidesNavigationBarDuringPresentation;                                                                                                                           //@synthesize hidesNavigationBarDuringPresentation=_hidesNavigationBarDuringPresentation - In the implementation block
@property (nonatomic,readonly) UIViewController * searchResultsController;                                                                                                                        //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar;                                                                                                                                           //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_resignSearchBarAsFirstResponder:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UISearchControllerDelegate>)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(id<UISearchControllerDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(id)focusItemContainer;
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)_uninstallBackGestureRecognizer;
-(void)_installBackGestureRecognizer;
-(void)viewDidLayoutSubviews;
-(void)_dismissFromBackButton:(id)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)_requiresCustomPresentationController;
-(void)_commonInit;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)_updateSearchBarMaskIfNecessary;
-(void)_searchBarSuperviewChanged;
-(void)_searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(_UINavigationControllerManagedSearchPalette *)_managedPalette;
-(void)_searchBarCancelButtonClicked:(id)arg1 ;
-(void)_searchBarTextDidBeginEditing:(id)arg1 ;
-(void)_searchBarSearchButtonClicked:(id)arg1 ;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_searchBarShouldFinalizeBecomingFirstResponder;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_presentingViewControllerDidChange:(id)arg1 ;
-(void)_presentingViewControllerWillChange:(id)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2 ;
-(UISearchBar *)searchBar;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg1 ;
-(id)_defaultAnimationController;
-(unsigned long long)_requestedInteractionModel;
-(id)_searchPresentationController;
-(BOOL)obscuresBackgroundDuringPresentation;
-(UISystemInputViewController *)_systemInputViewController;
-(UIView *)_resultsControllerViewContainer;
-(BOOL)_automaticallyShowsCancelButton;
-(void)set_systemInputMarginView:(UIView *)arg1 ;
-(UIView *)_systemInputMarginView;
-(void)set_resultsContentScrollViewPresentationOffset:(double)arg1 ;
-(void)set_previousSearchBarPosition:(long long)arg1 ;
-(UIViewController *)searchResultsController;
-(BOOL)hidesNavigationBarDuringPresentation;
-(double)_resultsContentScrollViewPresentationOffset;
-(long long)_previousSearchBarPosition;
-(BOOL)dimsBackgroundDuringPresentation;
-(BOOL)_showsSearchResultsController;
-(int)_barPresentationStyle;
-(BOOL)_shouldRespectPreferredContentSize;
-(BOOL)_searchbarWasTableHeaderView;
-(BOOL)_resultsControllerWillLayoutVisibleUnderContainerView;
-(void)_dismissPresentation:(BOOL)arg1 ;
-(void)_updateSearchResultsControllerWithDelta:(CGSize)arg1 ;
-(void)_updateSystemInputViewController;
-(void)setObscuresBackgroundDuringPresentation:(BOOL)arg1 ;
-(void)_connectSearchBar:(id)arg1 ;
-(void)_adjustSearchBarSizeForOrientation:(long long)arg1 ;
-(void)_uninstallDoneGestureRecognizer;
-(void)_removeCarPlayLimitedUIObserver;
-(void)_limitedUIDidChangeAnimated:(BOOL)arg1 ;
-(id)_createAnimationCoordinator;
-(void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg1 ;
-(id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(BOOL)arg2 ;
-(void)_resizeResultsControllerWithDelta:(CGSize)arg1 ;
-(void)_performAutomaticPresentation;
-(void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1 ;
-(id)_locatePresentingViewController;
-(id<UISearchResultsUpdating>)searchResultsUpdater;
-(void)_watchScrollView:(id)arg1 forScrolling:(BOOL)arg2 ;
-(id)_locatePresentingViewControllerIfInManagedPalette;
-(void)_sizeSearchViewToPresentingViewController:(id)arg1 ;
-(void)_willPresentFromViewController:(id)arg1 ;
-(void)_didPresentFromViewController:(id)arg1 ;
-(void)_willDismissSearchController;
-(void)_didDismissSearchController;
-(void)_installDoneGestureRecognizer;
-(id)_carPlayLimitedUIToken;
-(void)_setCarPlayLimitedUIToken:(id)arg1 ;
-(void)_updateFocusFromDoneButton:(id)arg1 ;
-(id)_carPlayLimitedUIViewController;
-(void)_setCarPlayLimitedUIViewController:(id)arg1 ;
-(void)_updateBarPresentationStyleForPresentingViewController:(id)arg1 ;
-(BOOL)_allowFormSheetStylePresentation;
-(void)_adjustSearchBarSizeForOrientation:(long long)arg1 oldPaletteFrame:(CGRect)arg2 ;
-(BOOL)_containedInNavigationPaletteAndNotHidden;
-(void)_updateSearchResultsContentScrollViewWithDelta:(CGSize)arg1 ;
-(void)_updateSearchResultsPositionWithDelta:(CGSize)arg1 ;
-(void)_beginWatchingPresentingController;
-(void)_endWatchingPresentingController;
-(void)_navigationControllerWillShowViewController:(id)arg1 ;
-(id)initWithSearchResultsController:(id)arg1 ;
-(void)setDimsBackgroundDuringPresentation:(BOOL)arg1 ;
-(void)_setRequestedInteractionModel:(unsigned long long)arg1 ;
-(void)_setAutomaticallyShowsSearchResultsController:(BOOL)arg1 ;
-(void)_setShowResultsForEmptySearch:(BOOL)arg1 ;
-(void)_setShowsSearchResultsController:(BOOL)arg1 ;
-(void)_startManagingPalette:(id)arg1 ;
-(void)_stopManagingPalette;
-(void)set_resultsControllerViewContainer:(UIView *)arg1 ;
-(void)_setAutomaticallyShowsCancelButton:(BOOL)arg1 ;
-(void)setSearchResultsUpdater:(id<UISearchResultsUpdating>)arg1 ;
-(void)setHidesNavigationBarDuringPresentation:(BOOL)arg1 ;
-(BOOL)_showResultsForEmptySearch;
-(void)_setShouldRespectPreferredContentSize:(BOOL)arg1 ;
-(BOOL)_automaticallyShowsSearchResultsController;
@end

