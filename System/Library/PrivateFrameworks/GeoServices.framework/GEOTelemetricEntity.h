/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTelemetricEntity : PBCodable <NSCopying> {

	unsigned long long _eventValue;
	NSString* _eventDetail;
	int _eventKey;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasEventKey; 
@property (assign,nonatomic) int eventKey;                               //@synthesize eventKey=_eventKey - In the implementation block
@property (assign,nonatomic) BOOL hasEventValue; 
@property (assign,nonatomic) unsigned long long eventValue;              //@synthesize eventValue=_eventValue - In the implementation block
@property (nonatomic,readonly) BOOL hasEventDetail; 
@property (nonatomic,retain) NSString * eventDetail;                     //@synthesize eventDetail=_eventDetail - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setEventKey:(int)arg1 ;
-(void)setEventValue:(unsigned long long)arg1 ;
-(void)setEventDetail:(NSString *)arg1 ;
-(int)eventKey;
-(void)setHasEventKey:(BOOL)arg1 ;
-(BOOL)hasEventKey;
-(id)eventKeyAsString:(int)arg1 ;
-(int)StringAsEventKey:(id)arg1 ;
-(void)setHasEventValue:(BOOL)arg1 ;
-(BOOL)hasEventValue;
-(BOOL)hasEventDetail;
-(unsigned long long)eventValue;
-(NSString *)eventDetail;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

