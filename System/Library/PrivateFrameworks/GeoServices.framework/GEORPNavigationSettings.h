/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORPNavigationSettings : PBCodable <NSCopying> {

	unsigned long long _distanceUnits;
	unsigned long long _maxAlternateRouteCount;
	unsigned long long _voiceVolume;
	int _userPreferredTransportType;
	NSString* _voiceLanguage;
	BOOL _beepBeforeInstruction;
	BOOL _muteSpeechOverride;
	BOOL _pauseSpokenAudio;
	BOOL _shouldUseGuidanceEventManager;
	BOOL _speechEnabled;
	SCD_Struct_LO19 _has;

}

@property (assign,nonatomic) BOOL hasVoiceVolume; 
@property (assign,nonatomic) unsigned long long voiceVolume;                         //@synthesize voiceVolume=_voiceVolume - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceUnits; 
@property (assign,nonatomic) unsigned long long distanceUnits;                       //@synthesize distanceUnits=_distanceUnits - In the implementation block
@property (assign,nonatomic) BOOL hasPauseSpokenAudio; 
@property (assign,nonatomic) BOOL pauseSpokenAudio;                                  //@synthesize pauseSpokenAudio=_pauseSpokenAudio - In the implementation block
@property (assign,nonatomic) BOOL hasMuteSpeechOverride; 
@property (assign,nonatomic) BOOL muteSpeechOverride;                                //@synthesize muteSpeechOverride=_muteSpeechOverride - In the implementation block
@property (assign,nonatomic) BOOL hasSpeechEnabled; 
@property (assign,nonatomic) BOOL speechEnabled;                                     //@synthesize speechEnabled=_speechEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasMaxAlternateRouteCount; 
@property (assign,nonatomic) unsigned long long maxAlternateRouteCount;              //@synthesize maxAlternateRouteCount=_maxAlternateRouteCount - In the implementation block
@property (assign,nonatomic) BOOL hasBeepBeforeInstruction; 
@property (assign,nonatomic) BOOL beepBeforeInstruction;                             //@synthesize beepBeforeInstruction=_beepBeforeInstruction - In the implementation block
@property (nonatomic,readonly) BOOL hasVoiceLanguage; 
@property (nonatomic,retain) NSString * voiceLanguage;                               //@synthesize voiceLanguage=_voiceLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasShouldUseGuidanceEventManager; 
@property (assign,nonatomic) BOOL shouldUseGuidanceEventManager;                     //@synthesize shouldUseGuidanceEventManager=_shouldUseGuidanceEventManager - In the implementation block
@property (assign,nonatomic) BOOL hasUserPreferredTransportType; 
@property (assign,nonatomic) int userPreferredTransportType;                         //@synthesize userPreferredTransportType=_userPreferredTransportType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)shouldUseGuidanceEventManager;
-(void)setMaxAlternateRouteCount:(unsigned long long)arg1 ;
-(int)userPreferredTransportType;
-(void)setUserPreferredTransportType:(int)arg1 ;
-(void)setHasUserPreferredTransportType:(BOOL)arg1 ;
-(BOOL)hasUserPreferredTransportType;
-(id)userPreferredTransportTypeAsString:(int)arg1 ;
-(int)StringAsUserPreferredTransportType:(id)arg1 ;
-(void)setVoiceLanguage:(NSString *)arg1 ;
-(void)setVoiceVolume:(unsigned long long)arg1 ;
-(void)setHasVoiceVolume:(BOOL)arg1 ;
-(BOOL)hasVoiceVolume;
-(void)setDistanceUnits:(unsigned long long)arg1 ;
-(void)setHasDistanceUnits:(BOOL)arg1 ;
-(BOOL)hasDistanceUnits;
-(void)setPauseSpokenAudio:(BOOL)arg1 ;
-(void)setHasPauseSpokenAudio:(BOOL)arg1 ;
-(BOOL)hasPauseSpokenAudio;
-(void)setMuteSpeechOverride:(BOOL)arg1 ;
-(void)setHasMuteSpeechOverride:(BOOL)arg1 ;
-(BOOL)hasMuteSpeechOverride;
-(void)setSpeechEnabled:(BOOL)arg1 ;
-(void)setHasSpeechEnabled:(BOOL)arg1 ;
-(BOOL)hasSpeechEnabled;
-(void)setHasMaxAlternateRouteCount:(BOOL)arg1 ;
-(BOOL)hasMaxAlternateRouteCount;
-(void)setBeepBeforeInstruction:(BOOL)arg1 ;
-(void)setHasBeepBeforeInstruction:(BOOL)arg1 ;
-(BOOL)hasBeepBeforeInstruction;
-(BOOL)hasVoiceLanguage;
-(void)setShouldUseGuidanceEventManager:(BOOL)arg1 ;
-(void)setHasShouldUseGuidanceEventManager:(BOOL)arg1 ;
-(BOOL)hasShouldUseGuidanceEventManager;
-(unsigned long long)voiceVolume;
-(unsigned long long)distanceUnits;
-(BOOL)pauseSpokenAudio;
-(BOOL)muteSpeechOverride;
-(BOOL)speechEnabled;
-(unsigned long long)maxAlternateRouteCount;
-(BOOL)beepBeforeInstruction;
-(NSString *)voiceLanguage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

