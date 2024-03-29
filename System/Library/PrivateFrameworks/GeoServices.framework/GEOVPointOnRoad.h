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

@interface GEOVPointOnRoad : PBCodable <NSCopying> {

	int _featureIndex;
	int _vertexIndex;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) int featureIndex;                 //@synthesize featureIndex=_featureIndex - In the implementation block
@property (assign,nonatomic) BOOL hasVertexIndex; 
@property (assign,nonatomic) int vertexIndex;                  //@synthesize vertexIndex=_vertexIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setVertexIndex:(int)arg1 ;
-(void)setHasVertexIndex:(BOOL)arg1 ;
-(BOOL)hasVertexIndex;
-(int)vertexIndex;
-(int)featureIndex;
-(void)setFeatureIndex:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

