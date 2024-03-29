/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNetworkServiceProxyRequestStatistics : PBCodable <NSCopying> {

	SCD_Struct_AW21* _directConnectionFirstByteBuckets;
	SCD_Struct_AW21* _directConnectionLastByteBuckets;
	SCD_Struct_AW21* _firstByteBuckets;
	SCD_Struct_AW21* _lastByteBuckets;
	SCD_Struct_AW21* _udpRttBuckets;
	unsigned long long _timestamp;
	unsigned _directConnectionCount;
	unsigned _directConnectionFailedCount;
	NSString* _firstPartyServiceName;
	int _interfaceType;
	int _protocolType;
	unsigned _requestCount;
	unsigned _requestFailedCount;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) int interfaceType;                                                       //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstPartyServiceName; 
@property (nonatomic,retain) NSString * firstPartyServiceName;                                        //@synthesize firstPartyServiceName=_firstPartyServiceName - In the implementation block
@property (assign,nonatomic) BOOL hasRequestCount; 
@property (assign,nonatomic) unsigned requestCount;                                                   //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) BOOL hasRequestFailedCount; 
@property (assign,nonatomic) unsigned requestFailedCount;                                             //@synthesize requestFailedCount=_requestFailedCount - In the implementation block
@property (assign,nonatomic) BOOL hasDirectConnectionCount; 
@property (assign,nonatomic) unsigned directConnectionCount;                                          //@synthesize directConnectionCount=_directConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasDirectConnectionFailedCount; 
@property (assign,nonatomic) unsigned directConnectionFailedCount;                                    //@synthesize directConnectionFailedCount=_directConnectionFailedCount - In the implementation block
@property (nonatomic,readonly) unsigned long long firstByteBucketsCount; 
@property (nonatomic,readonly) unsigned* firstByteBuckets; 
@property (nonatomic,readonly) unsigned long long lastByteBucketsCount; 
@property (nonatomic,readonly) unsigned* lastByteBuckets; 
@property (nonatomic,readonly) unsigned long long directConnectionFirstByteBucketsCount; 
@property (nonatomic,readonly) unsigned* directConnectionFirstByteBuckets; 
@property (nonatomic,readonly) unsigned long long directConnectionLastByteBucketsCount; 
@property (nonatomic,readonly) unsigned* directConnectionLastByteBuckets; 
@property (nonatomic,readonly) unsigned long long udpRttBucketsCount; 
@property (nonatomic,readonly) unsigned* udpRttBuckets; 
@property (assign,nonatomic) BOOL hasProtocolType; 
@property (assign,nonatomic) int protocolType;                                                        //@synthesize protocolType=_protocolType - In the implementation block
-(void)setInterfaceType:(int)arg1 ;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(BOOL)hasInterfaceType;
-(int)interfaceType;
-(id)interfaceTypeAsString:(int)arg1 ;
-(int)StringAsInterfaceType:(id)arg1 ;
-(void)setProtocolType:(int)arg1 ;
-(void)setHasProtocolType:(BOOL)arg1 ;
-(BOOL)hasProtocolType;
-(id)protocolTypeAsString:(int)arg1 ;
-(int)StringAsProtocolType:(id)arg1 ;
-(void)setHasRequestCount:(BOOL)arg1 ;
-(BOOL)hasRequestCount;
-(void)setFirstPartyServiceName:(NSString *)arg1 ;
-(unsigned long long)firstByteBucketsCount;
-(void)clearFirstByteBuckets;
-(unsigned)firstByteBucketsAtIndex:(unsigned long long)arg1 ;
-(void)addFirstByteBuckets:(unsigned)arg1 ;
-(unsigned long long)lastByteBucketsCount;
-(void)clearLastByteBuckets;
-(unsigned)lastByteBucketsAtIndex:(unsigned long long)arg1 ;
-(void)addLastByteBuckets:(unsigned)arg1 ;
-(unsigned long long)directConnectionFirstByteBucketsCount;
-(void)clearDirectConnectionFirstByteBuckets;
-(unsigned)directConnectionFirstByteBucketsAtIndex:(unsigned long long)arg1 ;
-(void)addDirectConnectionFirstByteBuckets:(unsigned)arg1 ;
-(unsigned long long)directConnectionLastByteBucketsCount;
-(void)clearDirectConnectionLastByteBuckets;
-(unsigned)directConnectionLastByteBucketsAtIndex:(unsigned long long)arg1 ;
-(void)addDirectConnectionLastByteBuckets:(unsigned)arg1 ;
-(unsigned long long)udpRttBucketsCount;
-(void)clearUdpRttBuckets;
-(unsigned)udpRttBucketsAtIndex:(unsigned long long)arg1 ;
-(void)addUdpRttBuckets:(unsigned)arg1 ;
-(BOOL)hasFirstPartyServiceName;
-(void)setRequestFailedCount:(unsigned)arg1 ;
-(void)setHasRequestFailedCount:(BOOL)arg1 ;
-(BOOL)hasRequestFailedCount;
-(void)setDirectConnectionCount:(unsigned)arg1 ;
-(void)setHasDirectConnectionCount:(BOOL)arg1 ;
-(BOOL)hasDirectConnectionCount;
-(void)setDirectConnectionFailedCount:(unsigned)arg1 ;
-(void)setHasDirectConnectionFailedCount:(BOOL)arg1 ;
-(BOOL)hasDirectConnectionFailedCount;
-(unsigned*)firstByteBuckets;
-(void)setFirstByteBuckets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)lastByteBuckets;
-(void)setLastByteBuckets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)directConnectionFirstByteBuckets;
-(void)setDirectConnectionFirstByteBuckets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)directConnectionLastByteBuckets;
-(void)setDirectConnectionLastByteBuckets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)udpRttBuckets;
-(void)setUdpRttBuckets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)firstPartyServiceName;
-(unsigned)requestFailedCount;
-(unsigned)directConnectionCount;
-(unsigned)directConnectionFailedCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(int)protocolType;
-(void)setRequestCount:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)requestCount;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

