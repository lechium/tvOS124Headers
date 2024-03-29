/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVMediaSelectionOption, NSString;

@interface TVPAudioOption : NSObject {

	int _trackID;
	AVMediaSelectionOption* _avMediaSelectionOption;
	NSString* _localizedDisplayString;
	NSString* _title;
	NSString* _languageCodeFromLocale;
	NSString* _languageCodeBCP47;
	id _propertyListRepresentation;
	NSString* _savedLocaleLanguageCode;

}

@property (nonatomic,retain) AVMediaSelectionOption * avMediaSelectionOption;              //@synthesize avMediaSelectionOption=_avMediaSelectionOption - In the implementation block
@property (nonatomic,copy) NSString * localizedDisplayString;                              //@synthesize localizedDisplayString=_localizedDisplayString - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * languageCodeFromLocale;                              //@synthesize languageCodeFromLocale=_languageCodeFromLocale - In the implementation block
@property (nonatomic,copy) NSString * languageCodeBCP47;                                   //@synthesize languageCodeBCP47=_languageCodeBCP47 - In the implementation block
@property (nonatomic,retain) id propertyListRepresentation;                                //@synthesize propertyListRepresentation=_propertyListRepresentation - In the implementation block
@property (assign,nonatomic) int trackID;                                                  //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,copy) NSString * savedLocaleLanguageCode;                             //@synthesize savedLocaleLanguageCode=_savedLocaleLanguageCode - In the implementation block
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)initWithOption:(id)arg1 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(NSString *)localizedDisplayString;
-(id)mediaRemoteIdentifier;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(AVMediaSelectionOption *)avMediaSelectionOption;
-(void)setLocalizedDisplayString:(NSString *)arg1 ;
-(id)initWithSavedTrackID:(int)arg1 savedLocaleLanguageCode:(id)arg2 ;
-(NSString *)languageCodeFromLocale;
-(void)setAvMediaSelectionOption:(AVMediaSelectionOption *)arg1 ;
-(void)setLanguageCodeFromLocale:(NSString *)arg1 ;
-(void)setLanguageCodeBCP47:(NSString *)arg1 ;
-(void)setPropertyListRepresentation:(id)arg1 ;
-(NSString *)savedLocaleLanguageCode;
-(void)setSavedLocaleLanguageCode:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)languageCodeBCP47;
@end

