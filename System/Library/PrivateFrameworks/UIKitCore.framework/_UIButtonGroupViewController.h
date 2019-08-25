/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class _UIButtonBar, UIScrollView, NSArray, NSString;

@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate> {

	_UIButtonBar* _originalOwner;
	_UIButtonBar* _buttonBar;
	UIScrollView* _scrollView;
	NSArray* _barButtonItemGroups;
	BOOL _overLightKeyboard;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)dismissIfNecessary;
-(void)_cleanupForDismissal;
-(id)initWithBarButtonItemGroups:(id)arg1 fromButtonBar:(id)arg2 ;
@end
