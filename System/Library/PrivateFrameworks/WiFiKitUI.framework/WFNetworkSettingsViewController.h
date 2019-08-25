/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFAccessoryViewController.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFNetworkSettingsViewControllerDataCoordinator, WFNetworkSettingsViewControllerDelegate, WFDetailsProviderContext;
@class WFNetworkSettingsConfig, UITableView, NSArray, WFNetworkSettingsCellFactory, NSAttributedString, WFHyperlinkFooterView, UISwitch, UIColor, NSString;

@interface WFNetworkSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WFAccessoryViewController, WFNetworkView> {

	id<WFNetworkSettingsViewControllerDataCoordinator> _dataCoordinator;
	id<WFNetworkSettingsViewControllerDelegate> _delegate;
	WFNetworkSettingsConfig* _config;
	long long _deviceCapability;
	UITableView* _tableView;
	NSArray* _sections;
	WFNetworkSettingsCellFactory* _cellFactory;
	NSAttributedString* _recommendationLinkAttributedString;
	WFHyperlinkFooterView* _linkFooterView;
	UISwitch* _autoJoinSwitch;
	UISwitch* _autoLoginSwitch;
	UIColor* _backgroundColor;
	id<WFDetailsProviderContext> _context;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                                         //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSArray * sections;                                                                               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsCellFactory * cellFactory;                                             //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,copy) WFNetworkSettingsConfig * config;                                                         //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSAttributedString * recommendationLinkAttributedString;                                //@synthesize recommendationLinkAttributedString=_recommendationLinkAttributedString - In the implementation block
@property (nonatomic,retain) WFHyperlinkFooterView * linkFooterView;                                                 //@synthesize linkFooterView=_linkFooterView - In the implementation block
@property (nonatomic,retain) UISwitch * autoJoinSwitch;                                                              //@synthesize autoJoinSwitch=_autoJoinSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * autoLoginSwitch;                                                             //@synthesize autoLoginSwitch=_autoLoginSwitch - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) id<WFDetailsProviderContext> context;                                                   //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<WFNetworkSettingsViewControllerDataCoordinator> dataCoordinator;              //@synthesize dataCoordinator=_dataCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<WFNetworkSettingsViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long deviceCapability;                                                             //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
-(id)initWithConfig:(id)arg1 ;
-(long long)_sectionTypeAtSection:(long long)arg1 ;
-(BOOL)_isChinaDevice;
-(id<WFNetworkSettingsViewControllerDataCoordinator>)dataCoordinator;
-(WFNetworkSettingsCellFactory *)cellFactory;
-(UISwitch *)autoJoinSwitch;
-(UISwitch *)autoLoginSwitch;
-(BOOL)_isIPv4ConfigAuto;
-(void)_promptForgetNetwork;
-(void)_presentDetailViewController:(id)arg1 ;
-(id)_sectionsFromConfig:(id)arg1 ;
-(void)_logSections:(id)arg1 ;
-(void)setCellFactory:(WFNetworkSettingsCellFactory *)arg1 ;
-(BOOL)_shouldShowIPv6ForConfig:(id)arg1 ;
-(void)_saveConfig:(id)arg1 ;
-(void)_presentRenewLeaseAlertWithSourceRect:(CGRect)arg1 ;
-(BOOL)_showRecommendationSupportLink;
-(WFHyperlinkFooterView *)linkFooterView;
-(NSAttributedString *)recommendationLinkAttributedString;
-(void)_saveAutoJoinEnabledChanged:(BOOL)arg1 ;
-(void)_saveAutoLoginEnabledChanged:(BOOL)arg1 ;
-(void)_autoJoinSwitchChanged:(id)arg1 ;
-(void)_autoLoginSwitchChanged:(id)arg1 ;
-(void)_openRecommendationsLink:(id)arg1 ;
-(id)_stringForSettingsSection:(long long)arg1 ;
-(void)_httpProxyConfigChanged:(long long)arg1 ;
-(void)_httpProxyAuthChanged:(id)arg1 ;
-(void)setRecommendationLinkAttributedString:(NSAttributedString *)arg1 ;
-(void)setLinkFooterView:(WFHyperlinkFooterView *)arg1 ;
-(void)setAutoJoinSwitch:(UISwitch *)arg1 ;
-(void)setAutoLoginSwitch:(UISwitch *)arg1 ;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1 ;
-(id)initWithConfig:(id)arg1 detailsContext:(id)arg2 ;
-(void)setDataCoordinator:(id<WFNetworkSettingsViewControllerDataCoordinator>)arg1 ;
-(void)refreshConfig:(id)arg1 ;
-(void)setDelegate:(id<WFNetworkSettingsViewControllerDelegate>)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id<WFNetworkSettingsViewControllerDelegate>)delegate;
-(void)setContext:(id<WFDetailsProviderContext>)arg1 ;
-(id<WFDetailsProviderContext>)context;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIColor *)backgroundColor;
-(void)viewDidLoad;
-(NSArray *)sections;
-(double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(WFNetworkSettingsConfig *)config;
-(void)setConfig:(WFNetworkSettingsConfig *)arg1 ;
@end

