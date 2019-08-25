/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVContentPartnerKitUI/TVApplicationControllerDelegate.h>

@class TVCKSearchSiriContext, TVCKSearchAppSetupHelper, TVApplicationController, UINavigationController, NSString;

@interface TVCKSearchAppViewController : UIViewController <UIGestureRecognizerDelegate, TVApplicationControllerDelegate> {

	TVCKSearchSiriContext* _siriContext;
	TVCKSearchAppSetupHelper* _setupHelper;
	TVApplicationController* _appController;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) TVCKSearchAppSetupHelper * setupHelper;                     //@synthesize setupHelper=_setupHelper - In the implementation block
@property (nonatomic,retain) TVApplicationController * appController;                    //@synthesize appController=_appController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) TVCKSearchSiriContext * siriContext;                      //@synthesize siriContext=_siriContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAppController:(TVApplicationController *)arg1 ;
-(TVCKSearchSiriContext *)siriContext;
-(TVCKSearchAppSetupHelper *)setupHelper;
-(void)setSetupHelper:(TVCKSearchAppSetupHelper *)arg1 ;
-(void)_startAppControllerWithBootURL:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLoad;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(TVApplicationController *)appController;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(id)_launchOptions;
@end
