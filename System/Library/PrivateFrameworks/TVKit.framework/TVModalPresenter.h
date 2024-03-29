/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class NSHashTable, _UIProgressiveBlurPresentationAnimator, NSArray, NSString;

@interface TVModalPresenter : NSObject <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate> {

	NSHashTable* __presentationControllers;
	_UIProgressiveBlurPresentationAnimator* _presentingAnimator;
	_UIProgressiveBlurPresentationAnimator* _dismissingAnimator;

}

@property (nonatomic,readonly) NSHashTable * _presentationControllers; 
@property (nonatomic,copy,readonly) NSArray * presentedViewControllers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_viewControllerForResponder:(id)arg1 ;
+(id)sharedInstance;
-(NSHashTable *)_presentationControllers;
-(NSArray *)presentedViewControllers;
-(void)presentViewController:(id)arg1 forResponder:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissViewControllerWithResponder:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissAllViewControllersWithAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentViewController:(id)arg1 fromViewController:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

