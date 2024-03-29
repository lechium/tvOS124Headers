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

@class PBUnknownFields, NSString;

@interface GEOPDVenueLabel : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _detail;
	NSString* _name;
	NSString* _nameShort;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasNameShort; 
@property (nonatomic,retain) NSString * nameShort;                           //@synthesize nameShort=_nameShort - In the implementation block
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) NSString * detail;                              //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasName;
-(BOOL)hasDetail;
-(NSString *)detail;
-(void)setNameShort:(NSString *)arg1 ;
-(BOOL)hasNameShort;
-(NSString *)nameShort;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

