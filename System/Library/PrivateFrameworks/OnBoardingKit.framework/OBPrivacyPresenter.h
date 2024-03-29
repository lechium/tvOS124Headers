/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OnBoardingKit/OnBoardingKit-Structs.h>
@class OBPrivacySplashController, OBPrivacyCombinedController, UIViewController, NSArray;

@interface OBPrivacyPresenter : NSObject {

	/*^block*/id _dismissHandler;
	OBPrivacySplashController* _splashController;
	OBPrivacyCombinedController* _combinedController;
	UIViewController* _presentingViewController;
	UIViewController* _presentedController;
	NSArray* _presentedIdentifiers;

}

@property (retain) OBPrivacySplashController * splashController;                  //@synthesize splashController=_splashController - In the implementation block
@property (retain) OBPrivacyCombinedController * combinedController;              //@synthesize combinedController=_combinedController - In the implementation block
@property (retain) UIViewController * presentedController;                        //@synthesize presentedController=_presentedController - In the implementation block
@property (retain) NSArray * presentedIdentifiers;                                //@synthesize presentedIdentifiers=_presentedIdentifiers - In the implementation block
@property (copy) id dismissHandler;                                               //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (__weak) UIViewController * presentingViewController;                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(id)presenterForPrivacySplashWithIdentifier:(id)arg1 ;
+(id)presenterForPrivacySplashWithIdentifer:(id)arg1 ;
+(id)presenterForPrivacyUnifiedAbout;
+(id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setSplashController:(OBPrivacySplashController *)arg1 ;
-(OBPrivacySplashController *)splashController;
-(void)setPresentedIdentifiers:(NSArray *)arg1 ;
-(void)setCombinedController:(OBPrivacyCombinedController *)arg1 ;
-(void)setPresentedController:(UIViewController *)arg1 ;
-(OBPrivacyCombinedController *)combinedController;
-(void)_presenterDidDismiss;
-(UIViewController *)presentedController;
-(NSArray *)presentedIdentifiers;
-(UIViewController *)presentingViewController;
-(void)present;
-(void)setDismissHandler:(id)arg1 ;
-(id)dismissHandler;
@end

