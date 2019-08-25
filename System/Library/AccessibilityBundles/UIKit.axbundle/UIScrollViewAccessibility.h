/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIScrollViewAccessibility_super.h>

@interface UIScrollViewAccessibility : __UIScrollViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)_accessibilityFirstOpaqueElement;
-(id)_accessibilityLastOpaqueElement;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityIsScannerGroup;
-(BOOL)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(id)_accessibilitySubviews;
-(CGPoint)_accessibilityContentOffset;
-(id)_accessibilityScrollStatus;
-(id)_accessibilityDelegateScrollStatus;
-(BOOL)accessibilityScrollLeftPageSupported;
-(BOOL)accessibilityScrollRightPageSupported;
-(id)_axVerticalScrollBar;
-(BOOL)accessibilityScrollUpPageSupported;
-(BOOL)accessibilityScrollDownPageSupported;
-(void)_axSetVerticalScrollBar:(id)arg1 ;
-(id)_axHorizontalScrollBar;
-(void)_announceDelayedStatus;
-(void)_accessibilityScrollToTopWithAnnouncement:(BOOL)arg1 touchLocation:(CGPoint)arg2 originalHandler:(/*^block*/id)arg3 ;
-(BOOL)_accessibilityScrollingEnabled;
-(id)_accessibilityFirstLastOpaqueElement:(BOOL)arg1 ;
-(BOOL)_axScrollViewPagingEnabled;
-(UIEdgeInsets)_accessibilityVisibleContentInset;
-(BOOL)_axShouldScrollToAlignWithPage;
-(BOOL)_accessibilityShouldAnimateScrollToVisible;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 type:(int)arg3 ;
-(double)_accessibilityScrollHeightDistance;
-(double)_accessibilityScrollWidthDistance;
-(BOOL)_accessibilityScrollStatusPrefersVertical;
-(BOOL)_accessibilityUseContentInset;
-(UIEdgeInsets)_accessibilityContentInset;
-(id)_accessibilityRetrieveDelegate;
-(double)_axAllowedPagingOverlap;
-(id)_accessibilityScrollStatusFormatString;
-(void)_accessibilityZoomAtPoint:(CGPoint)arg1 zoomIn:(BOOL)arg2 ;
-(BOOL)_accessibilityCanHandleContentPullDown;
-(void)_handleScrollViewPullDown;
-(BOOL)_accessibilityContentOffsetForScrollDirection:(int)arg1 newContentOffset:(CGPoint*)arg2 distanceMultiplier:(double)arg3 ;
-(BOOL)_accessibilityShouldAnimateScroll;
-(CGPoint)accessibilityValidateScrollContentOffset:(CGPoint)arg1 ;
-(double)_accessibilityScrollAnimationDurationDelay;
-(void)_accessibilitySendScrollStatus;
-(BOOL)_accessibilityScrollPageInDirection:(int)arg1 ;
-(id)_accessibilityStoredVisibleContentInset;
-(UIEdgeInsets)_accessibilityNavigationControllerInset;
-(void)_accessibilitySetStoredVisibleContentInset:(id)arg1 ;
-(void)_axSetHorizontalScrollBar:(id)arg1 ;
-(id)_accessibilityVerticalScrollBarElement;
-(id)_accessibilityHorizontalScrollBarElement;
-(double)_accessibilityZoomScale;
-(BOOL)_accessibilityIsScrollAncestor;
-(CGRect)_accessibilityScrollViewVisibleFrame;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 ;
-(long long)_accessibilityPageCount;
-(long long)_accessibilityPageIndex;
-(void)_accessibilitySetScrollStatus:(id)arg1 ;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(CGPoint)_accessibilityVisibleScrollArea:(BOOL)arg1 ;
-(BOOL)accessibilityScrollUpPage;
-(BOOL)accessibilityScrollDownPage;
-(BOOL)accessibilityScrollLeftPage;
-(BOOL)accessibilityScrollRightPage;
-(CGRect)_accessibilityContentFrame;
-(void)_accessibilitySetVisibleContentInset:(UIEdgeInsets)arg1 ;
-(void)_accessibilitySetNavigationControllerInset:(UIEdgeInsets)arg1 ;
-(CGRect)_accessibilityUIViewAccessibilityFrame;
-(CGRect)accessibilityFrame;
-(long long)accessibilityContainerType;
-(void)_notifyDidScroll;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_staticScrollBar;
@end

