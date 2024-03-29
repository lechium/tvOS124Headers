/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying> {

	unsigned _groupRetryCount;
	int _logMessageType;
	NSMutableArray* _logMsgEvents;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasGroupRetryCount; 
@property (assign,nonatomic) unsigned groupRetryCount; 
@property (nonatomic,retain) NSMutableArray * logMsgEvents;              //@synthesize logMsgEvents=_logMsgEvents - In the implementation block
@property (assign,nonatomic) BOOL hasLogMessageType; 
@property (assign,nonatomic) int logMessageType;                         //@synthesize logMessageType=_logMessageType - In the implementation block
+(BOOL)allowApplicationStatesForLogMsgEvent:(id)arg1 ;
+(id)logMessagesForEvent:(id)arg1 ;
+(id)disallowedStatesForLogMsgEvent:(id)arg1 logMessage:(id)arg2 ;
+(Class)logMsgEventType;
+(id)acceptedLogMsgEvents;
+(id)acceptedLogMsgEventsForLogMessageType:(int)arg1 ;
+(id)allowedSessionTypes;
+(BOOL)logMessageType:(int)arg1 acceptsLogMsgEventType:(int)arg2 ;
+(BOOL)supportsCohortSessionForLogMsgEvent:(id)arg1 ;
+(BOOL)disallowedStateWithStateType:(int)arg1 logMsgEvent:(id)arg2 logMessage:(id)arg3 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)logMessageType;
-(NSMutableArray *)logMsgEvents;
-(unsigned)groupItemIdHash;
-(unsigned)groupItemCount;
-(BOOL)hasGroupRetryCount;
-(unsigned)groupRetryCount;
-(long long)groupItemQueuedTime;
-(id)groupIdentifier;
-(unsigned long long)allowedSessionType;
-(BOOL)isNavigationSessionAllowed;
-(BOOL)isFullCarPlayStateAllowed;
-(void)addLogMsgEvent:(id)arg1 ;
-(void)removeUnsupportedStatesFromEvent;
-(void)setHasGroupRetryCount:(BOOL)arg1 ;
-(unsigned long long)logMsgEventsCount;
-(void)clearLogMsgEvents;
-(id)logMsgEventAtIndex:(unsigned long long)arg1 ;
-(void)setLogMessageType:(int)arg1 ;
-(void)setHasLogMessageType:(BOOL)arg1 ;
-(BOOL)hasLogMessageType;
-(id)logMessageTypeAsString:(int)arg1 ;
-(int)StringAsLogMessageType:(id)arg1 ;
-(void)setLogMsgEvents:(NSMutableArray *)arg1 ;
-(void)setGroupRetryCount:(unsigned)arg1 ;
-(BOOL)acceptsLogMsgEvent:(id)arg1 ;
-(BOOL)isStateAllowed:(id)arg1 ;
-(unsigned)groupSequenceNumber;
-(BOOL)isFullExperimentsStateAllowed;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

