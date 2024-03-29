/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVSInternationalization : NSObject
+(id)availableRegions;
+(id)deviceLanguageIdentifier;
+(id)preferredLanguagesForRegion:(id)arg1 ;
+(id)displayNameForLanguage:(id)arg1 ;
+(id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 ;
+(id)availableSystemLanguages;
+(id)systemLanguage;
+(void)postNotificationForLocaleChange;
+(void)postNotificationForLanguageChange;
+(id)effectiveSystemLanguagesWithUnsupportedVariant:(BOOL)arg1 forPreferredLanguages:(id)arg2 ;
+(id)regionalVariantLanguagesForBaseLanguage:(id)arg1 ;
+(void)setRegion:(id)arg1 ignoringExistingLocale:(BOOL)arg2 ;
+(void)setSystemLanguage:(id)arg1 ;
+(id)availableBaseSystemLanguages;
+(id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 ;
+(void)setRegion:(id)arg1 ;
+(id)region;
@end

