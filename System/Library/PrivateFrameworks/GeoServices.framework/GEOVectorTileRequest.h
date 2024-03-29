/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOVectorTileRequest : PBRequest <NSCopying> {

	unsigned long long _lineId;
	NSString* _accessKey;
	NSString* _countryCode;
	NSString* _languageCode;
	float _latitudeHint;
	float _longitudeHint;
	unsigned _scale;
	unsigned _size;
	unsigned _style;
	unsigned _version;
	unsigned _x;
	unsigned _y;
	unsigned _z;
	BOOL _preflight;
	SCD_Struct_GE193 _has;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,x,nonatomic) unsigned x;                           //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) BOOL hasY; 
@property (assign,y,nonatomic) unsigned y;                           //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,z,nonatomic) unsigned z;                           //@synthesize z=_z - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) unsigned style;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL hasPreflight; 
@property (assign,nonatomic) BOOL preflight;                         //@synthesize preflight=_preflight - In the implementation block
@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId;              //@synthesize lineId=_lineId - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) unsigned size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasScale; 
@property (assign,nonatomic) unsigned scale;                         //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessKey; 
@property (nonatomic,retain) NSString * accessKey;                   //@synthesize accessKey=_accessKey - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeHint; 
@property (assign,nonatomic) float longitudeHint;                    //@synthesize longitudeHint=_longitudeHint - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeHint; 
@property (assign,nonatomic) float latitudeHint;                     //@synthesize latitudeHint=_latitudeHint - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                 //@synthesize countryCode=_countryCode - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguageCode;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(BOOL)hasVersion;
-(void)setLineId:(unsigned long long)arg1 ;
-(void)setHasLineId:(BOOL)arg1 ;
-(BOOL)hasLineId;
-(unsigned long long)lineId;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
-(void)setHasZ:(BOOL)arg1 ;
-(BOOL)hasZ;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setAccessKey:(NSString *)arg1 ;
-(void)setPreflight:(BOOL)arg1 ;
-(void)setHasPreflight:(BOOL)arg1 ;
-(BOOL)hasPreflight;
-(void)setHasScale:(BOOL)arg1 ;
-(BOOL)hasScale;
-(BOOL)hasAccessKey;
-(void)setLongitudeHint:(float)arg1 ;
-(void)setHasLongitudeHint:(BOOL)arg1 ;
-(BOOL)hasLongitudeHint;
-(void)setLatitudeHint:(float)arg1 ;
-(void)setHasLatitudeHint:(BOOL)arg1 ;
-(BOOL)hasLatitudeHint;
-(BOOL)preflight;
-(NSString *)accessKey;
-(float)longitudeHint;
-(float)latitudeHint;
-(unsigned)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)scale;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(unsigned)arg1 ;
-(unsigned)style;
-(void)setScale:(unsigned)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setSize:(unsigned)arg1 ;
-(unsigned)x;
-(void)setX:(unsigned)arg1 ;
-(unsigned)y;
-(void)setY:(unsigned)arg1 ;
-(unsigned)z;
-(void)setZ:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end

