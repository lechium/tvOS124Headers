/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <TVMLKit/_TVModalPresenterFocusing.h>

@class NSHashTable, UIViewController, NSArray, NSMapTable, UIAlertController, TVModalPresentationConfiguration, NSString, UIView;

@interface TVModalPresentationNavigationController : UINavigationController <_TVModalPresenterFocusing> {

	NSHashTable* _presentedViewControllers;
	UIViewController* _rootViewController;
	NSArray* _previousViewControllers;
	NSMapTable* _pushCompletionBlocks;
	NSMapTable* _popCompletionBlocks;
	UIAlertController* _containingAlertController;
	TVModalPresentationConfiguration* _configuration;

}

@property (nonatomic,readonly) NSHashTable * presentedViewControllers; 
@property (assign,nonatomic,__weak) UIAlertController * containingAlertController;                //@synthesize containingAlertController=_containingAlertController - In the implementation block
@property (nonatomic,retain) TVModalPresentationConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(void)setContainingAlertController:(UIAlertController *)arg1 ;
-(NSHashTable *)presentedViewControllers;
-(id)popViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateConfiguration;
-(void)_dismissForLastViewController:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIAlertController *)containingAlertController;
-(TVModalPresentationConfiguration *)configuration;
-(void)setConfiguration:(TVModalPresentationConfiguration *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

