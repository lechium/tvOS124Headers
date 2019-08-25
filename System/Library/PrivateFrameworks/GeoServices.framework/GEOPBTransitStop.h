/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, NSString, GEOStyleAttributes, NSMutableArray;

@interface GEOPBTransitStop : PBCodable <GEOTransitNamedItem, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	unsigned _hallIndex;
	GEOLatLng* _latLng;
	NSString* _nameDisplayString;
	unsigned _stopIndex;
	GEOStyleAttributes* _styleAttributes;
	NSString* _timezone;
	NSMutableArray* _zoomNames;
	SCD_Struct_GE23 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasStopIndex; 
@property (assign,nonatomic) unsigned stopIndex;                                //@synthesize stopIndex=_stopIndex - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                           //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng;                                //@synthesize latLng=_latLng - In the implementation block
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) NSString * timezone;                               //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasHallIndex; 
@property (assign,nonatomic) unsigned hallIndex;                                //@synthesize hallIndex=_hallIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * zoomNames;                        //@synthesize zoomNames=_zoomNames - In the implementation block
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString;                      //@synthesize nameDisplayString=_nameDisplayString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)zoomNameType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOLatLng *)latLng;
-(void)setTimezone:(NSString *)arg1 ;
-(BOOL)hasTimezone;
-(NSString *)timezone;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(BOOL)hasStyleAttributes;
-(BOOL)hasHallIndex;
-(unsigned)hallIndex;
-(id)bestName;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(BOOL)hasNameDisplayString;
-(NSString *)nameDisplayString;
-(void)addZoomName:(id)arg1 ;
-(unsigned long long)zoomNamesCount;
-(void)clearZoomNames;
-(id)zoomNameAtIndex:(unsigned long long)arg1 ;
-(void)setStopIndex:(unsigned)arg1 ;
-(void)setHasStopIndex:(BOOL)arg1 ;
-(BOOL)hasStopIndex;
-(BOOL)hasLatLng;
-(void)setHallIndex:(unsigned)arg1 ;
-(void)setHasHallIndex:(BOOL)arg1 ;
-(unsigned)stopIndex;
-(NSMutableArray *)zoomNames;
-(void)setZoomNames:(NSMutableArray *)arg1 ;
-(id)bestNameWithLocale:(out id*)arg1 ;
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

