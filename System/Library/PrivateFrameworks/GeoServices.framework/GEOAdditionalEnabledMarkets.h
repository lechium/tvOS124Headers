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

@class PBUnknownFields, NSMutableArray, NSArray, NSDictionary;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _transitMarkets;

}

@property (nonatomic,readonly) NSArray * queryItems; 
@property (nonatomic,readonly) NSDictionary * queryParameters; 
@property (nonatomic,retain) NSMutableArray * transitMarkets;                //@synthesize transitMarkets=_transitMarkets - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)additionalEnabledMarkets;
+(Class)transitMarketType;
+(id)_additionalEnabledTransitMarkets;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSArray *)queryItems;
-(void)addTransitMarket:(id)arg1 ;
-(unsigned long long)transitMarketsCount;
-(void)clearTransitMarkets;
-(id)transitMarketAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transitMarkets;
-(void)setTransitMarkets:(NSMutableArray *)arg1 ;
-(NSDictionary *)queryParameters;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)reload;
@end

