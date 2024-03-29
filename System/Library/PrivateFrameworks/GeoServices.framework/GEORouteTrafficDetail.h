/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORouteTrafficDetail : PBCodable <NSCopying> {

	int _routeTrafficCondition;
	NSString* _spokenRouteName;
	NSString* _unabbreviatedRouteName;
	NSString* _writtenRouteName;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasRouteTrafficCondition; 
@property (assign,nonatomic) int routeTrafficCondition;                      //@synthesize routeTrafficCondition=_routeTrafficCondition - In the implementation block
@property (nonatomic,readonly) BOOL hasWrittenRouteName; 
@property (nonatomic,retain) NSString * writtenRouteName;                    //@synthesize writtenRouteName=_writtenRouteName - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenRouteName; 
@property (nonatomic,retain) NSString * spokenRouteName;                     //@synthesize spokenRouteName=_spokenRouteName - In the implementation block
@property (nonatomic,readonly) BOOL hasUnabbreviatedRouteName; 
@property (nonatomic,retain) NSString * unabbreviatedRouteName;              //@synthesize unabbreviatedRouteName=_unabbreviatedRouteName - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setWrittenRouteName:(NSString *)arg1 ;
-(void)setSpokenRouteName:(NSString *)arg1 ;
-(void)setUnabbreviatedRouteName:(NSString *)arg1 ;
-(int)routeTrafficCondition;
-(void)setRouteTrafficCondition:(int)arg1 ;
-(void)setHasRouteTrafficCondition:(BOOL)arg1 ;
-(BOOL)hasRouteTrafficCondition;
-(id)routeTrafficConditionAsString:(int)arg1 ;
-(int)StringAsRouteTrafficCondition:(id)arg1 ;
-(BOOL)hasWrittenRouteName;
-(BOOL)hasSpokenRouteName;
-(BOOL)hasUnabbreviatedRouteName;
-(NSString *)writtenRouteName;
-(NSString *)spokenRouteName;
-(NSString *)unabbreviatedRouteName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

