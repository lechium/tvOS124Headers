/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOVLabelLanguage : PBCodable <NSCopying> {

	unsigned _endOffset;
	NSString* _languageLocale;
	unsigned _startOffset;

}

@property (assign,nonatomic) unsigned startOffset;                   //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) unsigned endOffset;                     //@synthesize endOffset=_endOffset - In the implementation block
@property (nonatomic,retain) NSString * languageLocale;              //@synthesize languageLocale=_languageLocale - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEndOffset:(unsigned)arg1 ;
-(void)setLanguageLocale:(NSString *)arg1 ;
-(NSString *)languageLocale;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)startOffset;
-(unsigned)endOffset;
-(void)setStartOffset:(unsigned)arg1 ;
@end

