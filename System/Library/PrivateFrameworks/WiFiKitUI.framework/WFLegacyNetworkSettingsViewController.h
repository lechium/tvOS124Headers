/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKitUI/WFNetworkSettingsViewController.h>
#import <libobjc.A.dylib/WFAccessoryViewController.h>

@class NSString;

@interface WFLegacyNetworkSettingsViewController : WFNetworkSettingsViewController <WFAccessoryViewController>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_sectionTypeAtSection:(long long)arg1 ;
-(void)_updateTableInsets;
-(void)_updateIPv4ConfigurationMethod:(long long)arg1 ;
-(BOOL)_isIPv4ConfigManual;
-(BOOL)_isIPv4ConfigAuto;
-(id)_stringFromArray:(id)arg1 ;
-(void)_updateDNSAddresses:(id)arg1 ;
-(void)_updateDNSSearchDomains:(id)arg1 ;
-(void)_updateProxyConfigurationMethod:(long long)arg1 ;
-(void)_updateProxyAuthentication:(id)arg1 ;
-(id)arrayFromString:(id)arg1 ;
-(id)_sectionsFromConfig:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

