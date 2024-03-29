/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _labelLanguage;
	NSString* _labelText;
	unsigned _minZoom;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasMinZoom; 
@property (assign,nonatomic) unsigned minZoom;                               //@synthesize minZoom=_minZoom - In the implementation block
@property (nonatomic,readonly) BOOL hasLabelLanguage; 
@property (nonatomic,retain) NSString * labelLanguage;                       //@synthesize labelLanguage=_labelLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasLabelText; 
@property (nonatomic,retain) NSString * labelText;                           //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setMinZoom:(unsigned)arg1 ;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(BOOL)hasMinZoom;
-(unsigned)minZoom;
-(void)setLabelLanguage:(NSString *)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(BOOL)hasLabelLanguage;
-(BOOL)hasLabelText;
-(NSString *)labelLanguage;
-(NSString *)labelText;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

