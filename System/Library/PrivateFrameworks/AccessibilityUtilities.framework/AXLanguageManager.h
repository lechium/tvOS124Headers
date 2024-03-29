/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXDialectMap, NSArray, NSCharacterSet, NSLocale, NSString;

@interface AXLanguageManager : NSObject {

	AXDialectMap* _dialectForSystemLanguage;
	AXDialectMap* _dialectForCurrentLocale;
	AXDialectMap* _dialectForCurrentRegion;
	NSArray* _langMaps;
	NSCharacterSet* _commonCharacters;
	NSLocale* _userLocale;

}

@property (nonatomic,retain) NSArray * langMaps;                                          //@synthesize langMaps=_langMaps - In the implementation block
@property (nonatomic,copy) NSLocale * userLocale;                                         //@synthesize userLocale=_userLocale - In the implementation block
@property (nonatomic,retain) NSCharacterSet * commonCharacters;                           //@synthesize commonCharacters=_commonCharacters - In the implementation block
@property (assign,nonatomic,__weak) AXDialectMap * dialectForSystemLanguage; 
@property (assign,nonatomic,__weak) AXDialectMap * dialectForCurrentLocale; 
@property (assign,nonatomic,__weak) AXDialectMap * dialectForCurrentRegion; 
@property (nonatomic,readonly) NSString * systemLanguageID; 
@property (nonatomic,__weak,readonly) AXDialectMap * dialectForUserLocale; 
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1 ;
+(id)nonlocalizedNameForLanguage:(id)arg1 ;
+(id)commonPunctuationCharacters;
+(id)doNotTranslateWords;
+(id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1 ;
+(id)nameForAlternativeVoiceIdentifier:(id)arg1 ;
+(id)dialectForAlternativeVoiceIdentifier:(id)arg1 ;
+(id)sharedInstance;
-(id)dialectForLanguageID:(id)arg1 ;
-(AXDialectMap *)dialectForSystemLanguage;
-(NSString *)systemLanguageID;
-(id)basicDescription;
-(NSLocale *)userLocale;
-(BOOL)isCharacterCommon:(unsigned short)arg1 ;
-(void)setUserLocale:(NSLocale *)arg1 ;
-(void)_handleUserLocaleDidChange:(id)arg1 ;
-(void)setCommonCharacters:(NSCharacterSet *)arg1 ;
-(AXDialectMap *)dialectForCurrentLocale;
-(AXDialectMap *)dialectForCurrentRegion;
-(id)_loadLangMaps;
-(void)updateCachedDialects;
-(NSArray *)langMaps;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)_preferredLanguageIDsFromUserSelectedKeyboards;
-(NSCharacterSet *)commonCharacters;
-(void)setDialectForSystemLanguage:(AXDialectMap *)arg1 ;
-(void)setDialectForCurrentLocale:(AXDialectMap *)arg1 ;
-(void)setDialectForCurrentRegion:(AXDialectMap *)arg1 ;
-(id)characterSetForRanges:(id)arg1 ;
-(AXDialectMap *)dialectForUserLocale;
-(id)dialectThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)ambiguousDialectsFromUserKeyboardPreferences;
-(BOOL)isStringComposedByCommonCharacters:(id)arg1 ;
-(id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2 ;
-(void)setLangMaps:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
@end

