/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SiriCoreCorrectionPronunciation;

@interface SiriCoreUserCorrectionsProfileEntry : PBCodable <NSCopying> {

	unsigned _alternativesCorrectionsCount;
	NSString* _correctedText;
	SiriCoreCorrectionPronunciation* _pronunciationData;
	unsigned _spellingCorrectionsCount;
	unsigned _tap2editCorrectionsCount;
	SCD_Struct_Si1 _has;

}

@property (nonatomic,readonly) BOOL hasCorrectedText; 
@property (nonatomic,retain) NSString * correctedText;                                         //@synthesize correctedText=_correctedText - In the implementation block
@property (nonatomic,readonly) BOOL hasPronunciationData; 
@property (nonatomic,retain) SiriCoreCorrectionPronunciation * pronunciationData;              //@synthesize pronunciationData=_pronunciationData - In the implementation block
@property (assign,nonatomic) BOOL hasSpellingCorrectionsCount; 
@property (assign,nonatomic) unsigned spellingCorrectionsCount;                                //@synthesize spellingCorrectionsCount=_spellingCorrectionsCount - In the implementation block
@property (assign,nonatomic) BOOL hasTap2editCorrectionsCount; 
@property (assign,nonatomic) unsigned tap2editCorrectionsCount;                                //@synthesize tap2editCorrectionsCount=_tap2editCorrectionsCount - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativesCorrectionsCount; 
@property (assign,nonatomic) unsigned alternativesCorrectionsCount;                            //@synthesize alternativesCorrectionsCount=_alternativesCorrectionsCount - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(SiriCoreCorrectionPronunciation *)pronunciationData;
-(void)setPronunciationData:(SiriCoreCorrectionPronunciation *)arg1 ;
-(BOOL)hasCorrectedText;
-(BOOL)hasPronunciationData;
-(void)setSpellingCorrectionsCount:(unsigned)arg1 ;
-(void)setHasSpellingCorrectionsCount:(BOOL)arg1 ;
-(BOOL)hasSpellingCorrectionsCount;
-(void)setTap2editCorrectionsCount:(unsigned)arg1 ;
-(void)setHasTap2editCorrectionsCount:(BOOL)arg1 ;
-(BOOL)hasTap2editCorrectionsCount;
-(void)setAlternativesCorrectionsCount:(unsigned)arg1 ;
-(void)setHasAlternativesCorrectionsCount:(BOOL)arg1 ;
-(BOOL)hasAlternativesCorrectionsCount;
-(unsigned)spellingCorrectionsCount;
-(unsigned)tap2editCorrectionsCount;
-(unsigned)alternativesCorrectionsCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)correctedText;
-(void)setCorrectedText:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end

