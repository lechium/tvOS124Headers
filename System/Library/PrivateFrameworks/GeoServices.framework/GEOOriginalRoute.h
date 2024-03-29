/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface GEOOriginalRoute : PBCodable <NSCopying> {

	NSData* _originalDirectionsResponseID;
	int _originalRoutePurpose;
	NSData* _routeHandle;
	unsigned _routeIndex;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasOriginalRoutePurpose; 
@property (assign,nonatomic) int originalRoutePurpose;                            //@synthesize originalRoutePurpose=_originalRoutePurpose - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle;                                //@synthesize routeHandle=_routeHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID;               //@synthesize originalDirectionsResponseID=_originalDirectionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL hasRouteIndex; 
@property (assign,nonatomic) unsigned routeIndex;                                 //@synthesize routeIndex=_routeIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRouteHandle:(NSData *)arg1 ;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(int)originalRoutePurpose;
-(void)setOriginalRoutePurpose:(int)arg1 ;
-(void)setHasOriginalRoutePurpose:(BOOL)arg1 ;
-(BOOL)hasOriginalRoutePurpose;
-(id)originalRoutePurposeAsString:(int)arg1 ;
-(int)StringAsOriginalRoutePurpose:(id)arg1 ;
-(BOOL)hasRouteHandle;
-(BOOL)hasOriginalDirectionsResponseID;
-(void)setRouteIndex:(unsigned)arg1 ;
-(void)setHasRouteIndex:(BOOL)arg1 ;
-(BOOL)hasRouteIndex;
-(NSData *)routeHandle;
-(NSData *)originalDirectionsResponseID;
-(unsigned)routeIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

