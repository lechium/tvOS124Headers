/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDPlacecardLayoutConfiguration : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _entries;

}

@property (nonatomic,retain) NSMutableArray * entries;                       //@synthesize entries=_entries - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)entriesType;
+(id)placecardLayoutConfigurationPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addEntries:(id)arg1 ;
-(unsigned long long)entriesCount;
-(void)clearEntries;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)entries;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
