/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol UIAccessibilityHUDGestureDelegate;
@class UIView, UIViewController, UILongPressGestureRecognizer, NSMutableArray, NSString;

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate> {

	UIView* _view;
	id<UIAccessibilityHUDGestureDelegate> _delegate;
	UIViewController* _viewControllerDisplayingHUD;
	UILongPressGestureRecognizer* _recognizer;
	NSMutableArray* _subscribedConcurrentGestureRecognizers;
	BOOL _delegateDirectlyShowsHUD;

}

@property (nonatomic,__weak,readonly) UIView * view;                //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_gestureRecognizerChanged:(id)arg1 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)_clearButtonItemGestureSubscriptions;
-(id)_subscribedConcurrentGestureRecognizers;
-(void)_concurrentGestureRecognizerFired:(id)arg1 ;
-(id)_bestViewControllerForView;
-(void)_dismissAccessibilityHUD;
-(void)_showAccessibilityHUDItem:(id)arg1 ;
-(UIView *)view;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithView:(id)arg1 delegate:(id)arg2 ;
@end

