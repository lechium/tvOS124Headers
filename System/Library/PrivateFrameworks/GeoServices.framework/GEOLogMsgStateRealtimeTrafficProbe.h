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

@class NSString;

@interface GEOLogMsgStateRealtimeTrafficProbe : PBCodable <NSCopying> {

	long long _recvTime;
	int _probeCount;
	NSString* _tripId;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasTripId; 
@property (nonatomic,retain) NSString * tripId;               //@synthesize tripId=_tripId - In the implementation block
@property (assign,nonatomic) BOOL hasRecvTime; 
@property (assign,nonatomic) long long recvTime;              //@synthesize recvTime=_recvTime - In the implementation block
@property (assign,nonatomic) BOOL hasProbeCount; 
@property (assign,nonatomic) int probeCount;                  //@synthesize probeCount=_probeCount - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)tripId;
-(long long)recvTime;
-(int)probeCount;
-(void)setTripId:(NSString *)arg1 ;
-(BOOL)hasTripId;
-(void)setRecvTime:(long long)arg1 ;
-(void)setHasRecvTime:(BOOL)arg1 ;
-(BOOL)hasRecvTime;
-(void)setProbeCount:(int)arg1 ;
-(void)setHasProbeCount:(BOOL)arg1 ;
-(BOOL)hasProbeCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

