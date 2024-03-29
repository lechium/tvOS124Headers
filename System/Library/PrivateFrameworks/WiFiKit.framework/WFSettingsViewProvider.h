/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFNetworkViewProvider.h>

@class NSMapTable, WFCredentialsProviderController, WFSettingsController, NSString;

@interface WFSettingsViewProvider : NSObject <WFNetworkViewProvider> {

	NSMapTable* _credentialsViewControllerMap;
	WFCredentialsProviderController* _credentialsProviderController;
	WFSettingsController* _settingsController;

}

@property (nonatomic,retain) NSMapTable * credentialsViewControllerMap;                                    //@synthesize credentialsViewControllerMap=_credentialsViewControllerMap - In the implementation block
@property (nonatomic,retain) WFCredentialsProviderController * credentialsProviderController;              //@synthesize credentialsProviderController=_credentialsProviderController - In the implementation block
@property (nonatomic,retain) WFSettingsController * settingsController;                                    //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFSettingsController *)settingsController;
-(id)credentialsViewControllerWithContext:(id)arg1 ;
-(id)certificateViewControllerWithContext:(id)arg1 ;
-(id)networkErrorViewControllerWithContext:(id)arg1 ;
-(id)otherNetworkViewControllerWithContext:(id)arg1 ;
-(id)networkDetailsViewControllerWithContext:(id)arg1 ;
-(void)didDismissNetworkViewController:(id)arg1 forContext:(id)arg2 ;
-(void)setSettingsController:(WFSettingsController *)arg1 ;
-(NSMapTable *)credentialsViewControllerMap;
-(void)setCredentialsViewControllerMap:(NSMapTable *)arg1 ;
-(WFCredentialsProviderController *)credentialsProviderController;
-(void)setCredentialsProviderController:(WFCredentialsProviderController *)arg1 ;
-(id)init;
@end

