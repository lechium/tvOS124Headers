/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOPDMapsIdentifier, NSMutableArray;

@interface GEOPDTransitConnection : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	NSString* _entityNameString;
	GEOPDMapsIdentifier* _mapsId;
	NSMutableArray* _transitLabels;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                        //@synthesize muid=_muid - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitLabels;                 //@synthesize transitLabels=_transitLabels - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityNameString; 
@property (nonatomic,retain) NSString * entityNameString;                    //@synthesize entityNameString=_entityNameString - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId;                   //@synthesize mapsId=_mapsId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)transitLabelType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasMapsId;
-(GEOPDMapsIdentifier *)mapsId;
-(NSString *)entityNameString;
-(NSMutableArray *)transitLabels;
-(void)addTransitLabel:(id)arg1 ;
-(unsigned long long)transitLabelsCount;
-(void)clearTransitLabels;
-(id)transitLabelAtIndex:(unsigned long long)arg1 ;
-(void)setEntityNameString:(NSString *)arg1 ;
-(BOOL)hasEntityNameString;
-(void)setTransitLabels:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

