/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRequestParameters;

@interface GEOMapItemInitialRequestData : PBCodable <NSCopying> {

	GEOPDPlaceRequestParameters* _placeRequestParameters;
	int _requestType;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                                   //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceRequestParameters; 
@property (nonatomic,retain) GEOPDPlaceRequestParameters * placeRequestParameters;              //@synthesize placeRequestParameters=_placeRequestParameters - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)requestType;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(void)setPlaceRequestParameters:(GEOPDPlaceRequestParameters *)arg1 ;
-(BOOL)hasPlaceRequestParameters;
-(GEOPDPlaceRequestParameters *)placeRequestParameters;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

