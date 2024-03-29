/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventLogFramework : PBCodable <NSCopying> {

	unsigned long long _messageSize;
	NSMutableArray* _logFrameworkItems;
	unsigned _messageCount;
	int _messageType;
	int _metricState;
	int _metricType;
	int _purgeReason;
	SCD_Struct_GE40 _has;

}

@property (assign,nonatomic) BOOL hasMetricType; 
@property (assign,nonatomic) int metricType;                                  //@synthesize metricType=_metricType - In the implementation block
@property (assign,nonatomic) BOOL hasMetricState; 
@property (assign,nonatomic) int metricState;                                 //@synthesize metricState=_metricState - In the implementation block
@property (assign,nonatomic) BOOL hasMessageCount; 
@property (assign,nonatomic) unsigned messageCount;                           //@synthesize messageCount=_messageCount - In the implementation block
@property (assign,nonatomic) BOOL hasMessageSize; 
@property (assign,nonatomic) unsigned long long messageSize;                  //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) int messageType;                                 //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) NSMutableArray * logFrameworkItems;              //@synthesize logFrameworkItems=_logFrameworkItems - In the implementation block
@property (assign,nonatomic) BOOL hasPurgeReason; 
@property (assign,nonatomic) int purgeReason;                                 //@synthesize purgeReason=_purgeReason - In the implementation block
+(Class)logFrameworkItemType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMetricType:(int)arg1 ;
-(void)setMetricState:(int)arg1 ;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)setPurgeReason:(int)arg1 ;
-(void)setMessageType:(int)arg1 ;
-(void)addLogFrameworkItem:(id)arg1 ;
-(int)metricType;
-(void)setHasMetricType:(BOOL)arg1 ;
-(BOOL)hasMetricType;
-(id)metricTypeAsString:(int)arg1 ;
-(int)StringAsMetricType:(id)arg1 ;
-(int)metricState;
-(void)setHasMetricState:(BOOL)arg1 ;
-(BOOL)hasMetricState;
-(id)metricStateAsString:(int)arg1 ;
-(int)StringAsMetricState:(id)arg1 ;
-(void)setMessageCount:(unsigned)arg1 ;
-(void)setHasMessageCount:(BOOL)arg1 ;
-(BOOL)hasMessageCount;
-(void)setHasMessageSize:(BOOL)arg1 ;
-(BOOL)hasMessageSize;
-(unsigned long long)messageSize;
-(unsigned long long)logFrameworkItemsCount;
-(void)clearLogFrameworkItems;
-(id)logFrameworkItemAtIndex:(unsigned long long)arg1 ;
-(int)messageType;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(int)purgeReason;
-(void)setHasPurgeReason:(BOOL)arg1 ;
-(BOOL)hasPurgeReason;
-(id)purgeReasonAsString:(int)arg1 ;
-(int)StringAsPurgeReason:(id)arg1 ;
-(NSMutableArray *)logFrameworkItems;
-(void)setLogFrameworkItems:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)messageCount;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

