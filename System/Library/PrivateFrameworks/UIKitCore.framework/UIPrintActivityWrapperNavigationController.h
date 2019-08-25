/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>

@class NSString;

@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate> {

	/*^block*/id _completionHandler;
	BOOL _presentedPrintInteractionController;

}

@property (assign,nonatomic) BOOL presentedPrintInteractionController;              //@synthesize presentedPrintInteractionController=_presentedPrintInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)presentedPrintInteractionController;
-(void)setPresentedPrintInteractionController:(BOOL)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
@end

