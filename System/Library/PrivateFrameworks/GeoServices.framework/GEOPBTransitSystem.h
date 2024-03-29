/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPBTransitArtwork, NSString, GEOStyleAttributes;

@interface GEOPBTransitSystem : PBCodable <GEOTransitNamedItem, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	GEOPBTransitArtwork* _artwork;
	NSString* _nameDisplayString;
	GEOStyleAttributes* _styleAttributes;
	unsigned _systemIndex;
	NSString* _website;
	SCD_Struct_GE22 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasSystemIndex; 
@property (assign,nonatomic) unsigned systemIndex;                              //@synthesize systemIndex=_systemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                           //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasWebsite; 
@property (nonatomic,retain) NSString * website;                                //@synthesize website=_website - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork;                     //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString;                      //@synthesize nameDisplayString=_nameDisplayString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(BOOL)hasStyleAttributes;
-(id)bestName;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(BOOL)hasArtwork;
-(void)setSystemIndex:(unsigned)arg1 ;
-(void)setHasSystemIndex:(BOOL)arg1 ;
-(BOOL)hasSystemIndex;
-(BOOL)hasNameDisplayString;
-(GEOPBTransitArtwork *)artwork;
-(unsigned)systemIndex;
-(NSString *)nameDisplayString;
-(id)geoTransitSystem;
-(void)setWebsite:(NSString *)arg1 ;
-(BOOL)hasWebsite;
-(NSString *)website;
-(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
@end

