/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
@class NSString, NSArray, NSDictionary, NSSet;

@interface BFFLocationController : NSObject {

	NSString* _guessedCountryFromTelephony;
	NSArray* _guessedCountries;
	NSDictionary* _aliasDict;
	NSSet* _validCountries;
	WiFiManagerClientRef fWifiManager;
	WiFiDeviceClientRef fWifiDevice;
	BOOL _fakeMode;
	NSArray* _firstGuessedLanguages;

}

@property (nonatomic,retain) NSArray * guessedCountries;                   //@synthesize guessedCountries=_guessedCountries - In the implementation block
@property (nonatomic,retain) NSArray * firstGuessedLanguages;              //@synthesize firstGuessedLanguages=_firstGuessedLanguages - In the implementation block
@property (assign,nonatomic) BOOL fakeMode;                                //@synthesize fakeMode=_fakeMode - In the implementation block
+(id)sharedBuddyLocationController;
-(NSArray *)guessedCountries;
-(id)aliasDict;
-(id)_checkForAliases:(id)arg1 ;
-(id)_countriesFromDefaults;
-(void)setGuessedCountries:(NSArray *)arg1 ;
-(BOOL)getCountryFromTelephony;
-(void)_startWifiScan;
-(void)_closeWifiConnection;
-(id)_countryFromTelephony;
-(id)_checkedArrayForString:(id)arg1 ;
-(void)_setGuessedCountryDefault:(id)arg1 ;
-(void)setFirstGuessedLanguages:(NSArray *)arg1 ;
-(id)_checkForAliasesOrInvalid:(id)arg1 ;
-(id)guessedCountryFromTelephony;
-(id)guessedLanguages;
-(void)_scanComplete:(id)arg1 error:(BOOL)arg2 ;
-(NSArray *)firstGuessedLanguages;
-(BOOL)fakeMode;
-(void)setFakeMode:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
@end

