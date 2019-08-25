/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsLaunchIntervalMetric : PBCodable <NSCopying> {

	unsigned long long _intervalSincePreviousLaunch;
	unsigned long long _timestamp;
	int _process;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIntervalSincePreviousLaunch; 
@property (assign,nonatomic) unsigned long long intervalSincePreviousLaunch;              //@synthesize intervalSincePreviousLaunch=_intervalSincePreviousLaunch - In the implementation block
@property (assign,nonatomic) BOOL hasProcess; 
@property (assign,nonatomic) int process;                                                 //@synthesize process=_process - In the implementation block
-(void)setProcess:(int)arg1 ;
-(BOOL)hasProcess;
-(int)process;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setIntervalSincePreviousLaunch:(unsigned long long)arg1 ;
-(void)setHasIntervalSincePreviousLaunch:(BOOL)arg1 ;
-(BOOL)hasIntervalSincePreviousLaunch;
-(void)setHasProcess:(BOOL)arg1 ;
-(id)processAsString:(int)arg1 ;
-(int)StringAsProcess:(id)arg1 ;
-(unsigned long long)intervalSincePreviousLaunch;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

