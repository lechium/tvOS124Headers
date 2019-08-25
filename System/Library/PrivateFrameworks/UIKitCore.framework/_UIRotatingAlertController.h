/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAlertController.h>

@protocol UIPopoverPresentationControllerDelegate, _UIRotatingAlertControllerDelegate;
@class UIViewController;

@interface _UIRotatingAlertController : UIAlertController {

	unsigned long long _arrowDirections;
	BOOL _isRotating;
	BOOL _readyToPresentAfterRotation;
	UIViewController* _presentedViewControllerWhileRotating;
	id<UIPopoverPresentationControllerDelegate> _popoverPresentationControllerDelegateWhileRotating;
	id<_UIRotatingAlertControllerDelegate> _rotatingSheetDelegate;

}

@property (assign,nonatomic,__weak) id<_UIRotatingAlertControllerDelegate> rotatingSheetDelegate;              //@synthesize rotatingSheetDelegate=_rotatingSheetDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirections;                                               //@synthesize arrowDirections=_arrowDirections - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_presentingViewControllerDidChange:(id)arg1 ;
-(void)_presentingViewControllerWillChange:(id)arg1 ;
-(BOOL)_shouldAbortAdaptationFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(void)setRotatingSheetDelegate:(id<_UIRotatingAlertControllerDelegate>)arg1 ;
-(BOOL)presentSheet;
-(void)doneWithSheet;
-(BOOL)presentSheetFromRect:(CGRect)arg1 ;
-(void)_didRotateAndLayout;
-(id<_UIRotatingAlertControllerDelegate>)rotatingSheetDelegate;
-(void)_updateSheetPositionAfterRotation;
-(unsigned long long)arrowDirections;
-(void)setArrowDirections:(unsigned long long)arg1 ;
@end

