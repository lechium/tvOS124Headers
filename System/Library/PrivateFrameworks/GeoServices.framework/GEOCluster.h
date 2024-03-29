/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPlaceResult;

@interface GEOCluster : PBCodable <NSCopying> {

	SCD_Struct_GE2* _indexs;
	GEOPlaceResult* _container;

}

@property (nonatomic,readonly) BOOL hasContainer; 
@property (nonatomic,retain) GEOPlaceResult * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) unsigned long long indexsCount; 
@property (nonatomic,readonly) int* indexs; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)indexsCount;
-(void)clearIndexs;
-(int)indexAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasContainer;
-(int*)indexs;
-(void)setIndexs:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addIndex:(int)arg1 ;
-(GEOPlaceResult *)container;
-(void)setContainer:(GEOPlaceResult *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

