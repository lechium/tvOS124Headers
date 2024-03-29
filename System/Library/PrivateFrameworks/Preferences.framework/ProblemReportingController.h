/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PrefsUILinkLabel, PSSpecifier, NSArray;

@interface ProblemReportingController : PSListController {

	PrefsUILinkLabel* _aboutDiagnosticsLinkLabel;
	PSSpecifier* _filesystemMetadataSnapshotSpecifier;
	NSArray* _appActivitySpecifiers;
	NSArray* _iCloudSpecifiers;
	PSSpecifier* _spinnerSpecifier;
	BOOL _shouldShareHealthRecordsData;
	NSArray* _healthDataSpecifiers;
	NSArray* _healthRecordsDataSpecifiers;
	NSArray* _wheelchairDataSpecifiers;

}

@property (assign,nonatomic) BOOL shouldShareHealthRecordsData;                      //@synthesize shouldShareHealthRecordsData=_shouldShareHealthRecordsData - In the implementation block
@property (readonly) PSSpecifier * spinnerSpecifier; 
@property (readonly) PSSpecifier * filesystemMetadataSnapshotSpecifier; 
@property (readonly) NSArray * appActivitySpecifiers; 
@property (readonly) NSArray * healthDataSpecifiers;                                 //@synthesize healthDataSpecifiers=_healthDataSpecifiers - In the implementation block
@property (readonly) NSArray * healthRecordsDataSpecifiers;                          //@synthesize healthRecordsDataSpecifiers=_healthRecordsDataSpecifiers - In the implementation block
@property (readonly) NSArray * wheelchairDataSpecifiers;                             //@synthesize wheelchairDataSpecifiers=_wheelchairDataSpecifiers - In the implementation block
+(BOOL)isProblemReportingEnabled;
-(id)specifiers;
-(void)dismissAboutSheet:(id)arg1 ;
-(void)setProblemReportingEnabled:(BOOL)arg1 ;
-(NSArray *)appActivitySpecifiers;
-(PSSpecifier *)spinnerSpecifier;
-(PSSpecifier *)filesystemMetadataSnapshotSpecifier;
-(void)snapshot:(id)arg1 ;
-(void)setShouldShareAppActivityWithAppDevelopers:(id)arg1 specifier:(id)arg2 ;
-(id)shouldShareAppActivityWithAppDevelopers;
-(void)setBoolValue:(BOOL)arg1 forIdMSConfigKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldShowiCloudSpecifiersForAccount:(id)arg1 ;
-(void)setShouldShareiCloudAnalytics:(id)arg1 specifier:(id)arg2 ;
-(id)shouldShareiCloudAnalytics:(id)arg1 ;
-(void)setShouldShareHealthData:(id)arg1 specifier:(id)arg2 ;
-(id)shouldShareHealthDataForSpecifier:(id)arg1 ;
-(void)setShouldShareHealthRecordsData:(id)arg1 specifier:(id)arg2 ;
-(id)shouldShareHealthRecordsDataForSpecifier:(id)arg1 ;
-(BOOL)shouldShareHealthRecordsData;
-(void)setShouldShareWheelchairData:(id)arg1 specifier:(id)arg2 ;
-(id)shouldShareWheelchairDataForSpecifier:(id)arg1 ;
-(void)setProblemReportingEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)problemReportingEnabled:(id)arg1 ;
-(id)iCloudSpecifiers;
-(NSArray *)healthDataSpecifiers;
-(NSArray *)healthRecordsDataSpecifiers;
-(NSArray *)wheelchairDataSpecifiers;
-(void)checkDiagnosticsSessionAvailability;
-(void)updateiCloudAnalyticsForSpecifierID:(id)arg1 ;
-(void)updateHealthRecordsPreferenceForSpecifierID:(id)arg1 ;
-(void)launchDiagnosticsSession:(id)arg1 ;
-(void)showAboutSheetWithTitle:(id)arg1 content:(id)arg2 ;
-(void)showAboutAnalyticsSheet;
-(void)showAboutiCloudAnalyticsSheet;
-(void)showAboutAppAnalyticsSheet;
-(void)showAboutHealthDataSheet;
-(void)showAboutHealthRecordsDataSheet;
-(void)showAboutWheelchairDataSheet;
-(void)_handleUpdateForSpecifierID:(id)arg1 value:(id)arg2 error:(id)arg3 ;
-(void)setShouldShareHealthRecordsData:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
@end

