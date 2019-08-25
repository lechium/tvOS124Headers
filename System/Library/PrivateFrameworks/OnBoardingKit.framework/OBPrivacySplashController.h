/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSUITextAlertController.h>

@class OBPrivacyFlow, NSString;

@interface OBPrivacySplashController : TVSUITextAlertController {

	OBPrivacyFlow* _flow;
	BOOL _suppressPerPageAnalyticsLogging;
	BOOL _allowsOpeningSafari;
	BOOL _showLinkToPrivacyGateway;
	BOOL _showsLinkToUnifiedAbout;
	BOOL _useSmallTitle;
	BOOL _forceLargeMargins;
	BOOL _useModalStyle;
	BOOL _isCombined;
	NSString* _displayLanguage;

}

@property (assign) BOOL suppressPerPageAnalyticsLogging;                 //@synthesize suppressPerPageAnalyticsLogging=_suppressPerPageAnalyticsLogging - In the implementation block
@property (assign) BOOL allowsOpeningSafari;                             //@synthesize allowsOpeningSafari=_allowsOpeningSafari - In the implementation block
@property (assign,nonatomic) BOOL showLinkToPrivacyGateway;              //@synthesize showLinkToPrivacyGateway=_showLinkToPrivacyGateway - In the implementation block
@property (assign) BOOL showsLinkToUnifiedAbout;                         //@synthesize showsLinkToUnifiedAbout=_showsLinkToUnifiedAbout - In the implementation block
@property (assign) BOOL useSmallTitle;                                   //@synthesize useSmallTitle=_useSmallTitle - In the implementation block
@property (assign) BOOL forceLargeMargins;                               //@synthesize forceLargeMargins=_forceLargeMargins - In the implementation block
@property (retain) NSString * displayLanguage;                           //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (assign) BOOL useModalStyle;                                   //@synthesize useModalStyle=_useModalStyle - In the implementation block
@property (assign,nonatomic) BOOL isCombined;                            //@synthesize isCombined=_isCombined - In the implementation block
+(id)splashPageWithBundleIdentifier:(id)arg1 ;
-(id)initWithPrivacyIdentifier:(id)arg1 ;
-(id)initWithFlow:(id)arg1 ;
-(NSString *)displayLanguage;
-(BOOL)suppressPerPageAnalyticsLogging;
-(void)_initializeFromBundle;
-(id)_defaultButtonTitle;
-(void)setDismissHandlerForDefaultButton:(/*^block*/id)arg1 ;
-(void)setSuppressPerPageAnalyticsLogging:(BOOL)arg1 ;
-(BOOL)allowsOpeningSafari;
-(void)setAllowsOpeningSafari:(BOOL)arg1 ;
-(BOOL)showLinkToPrivacyGateway;
-(void)setShowLinkToPrivacyGateway:(BOOL)arg1 ;
-(BOOL)showsLinkToUnifiedAbout;
-(void)setShowsLinkToUnifiedAbout:(BOOL)arg1 ;
-(BOOL)useSmallTitle;
-(void)setUseSmallTitle:(BOOL)arg1 ;
-(BOOL)forceLargeMargins;
-(void)setForceLargeMargins:(BOOL)arg1 ;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(BOOL)useModalStyle;
-(void)setUseModalStyle:(BOOL)arg1 ;
-(BOOL)isCombined;
-(void)setIsCombined:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

