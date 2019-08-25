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

@class PBUnknownFields, NSMutableArray;

@interface GEOLanguage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _identifier;
	NSMutableArray* _languages;

}

@property (assign,nonatomic) unsigned identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * languages;                     //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)languageType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)languages;
-(void)addLanguage:(id)arg1 ;
-(unsigned long long)languagesCount;
-(void)clearLanguages;
-(id)languageAtIndex:(unsigned long long)arg1 ;
-(void)setLanguages:(NSMutableArray *)arg1 ;
-(unsigned)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

