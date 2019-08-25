/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineLocationAwarenessIntervalHistogram : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	NSMutableArray* _anyPositiveIntervalHistograms;
	NSMutableArray* _lessThan10mIntervalHistograms;
	NSMutableArray* _lessThan200mIntervalHistograms;
	NSMutableArray* _lessThan25mIntervalHistograms;
	NSMutableArray* _lessThan55mIntervalHistograms;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * lessThan10mIntervalHistograms;               //@synthesize lessThan10mIntervalHistograms=_lessThan10mIntervalHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * lessThan25mIntervalHistograms;               //@synthesize lessThan25mIntervalHistograms=_lessThan25mIntervalHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * lessThan55mIntervalHistograms;               //@synthesize lessThan55mIntervalHistograms=_lessThan55mIntervalHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * lessThan200mIntervalHistograms;              //@synthesize lessThan200mIntervalHistograms=_lessThan200mIntervalHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * anyPositiveIntervalHistograms;               //@synthesize anyPositiveIntervalHistograms=_anyPositiveIntervalHistograms - In the implementation block
+(Class)lessThan10mIntervalHistogramType;
+(Class)lessThan25mIntervalHistogramType;
+(Class)lessThan55mIntervalHistogramType;
+(Class)lessThan200mIntervalHistogramType;
+(Class)anyPositiveIntervalHistogramType;
-(void)setLessThan10mIntervalHistograms:(NSMutableArray *)arg1 ;
-(void)setLessThan25mIntervalHistograms:(NSMutableArray *)arg1 ;
-(void)setLessThan55mIntervalHistograms:(NSMutableArray *)arg1 ;
-(void)setLessThan200mIntervalHistograms:(NSMutableArray *)arg1 ;
-(void)setAnyPositiveIntervalHistograms:(NSMutableArray *)arg1 ;
-(void)addLessThan10mIntervalHistogram:(id)arg1 ;
-(void)addLessThan25mIntervalHistogram:(id)arg1 ;
-(void)addLessThan55mIntervalHistogram:(id)arg1 ;
-(void)addLessThan200mIntervalHistogram:(id)arg1 ;
-(void)addAnyPositiveIntervalHistogram:(id)arg1 ;
-(unsigned long long)lessThan10mIntervalHistogramsCount;
-(void)clearLessThan10mIntervalHistograms;
-(id)lessThan10mIntervalHistogramAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lessThan25mIntervalHistogramsCount;
-(void)clearLessThan25mIntervalHistograms;
-(id)lessThan25mIntervalHistogramAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lessThan55mIntervalHistogramsCount;
-(void)clearLessThan55mIntervalHistograms;
-(id)lessThan55mIntervalHistogramAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lessThan200mIntervalHistogramsCount;
-(void)clearLessThan200mIntervalHistograms;
-(id)lessThan200mIntervalHistogramAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)anyPositiveIntervalHistogramsCount;
-(void)clearAnyPositiveIntervalHistograms;
-(id)anyPositiveIntervalHistogramAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)lessThan10mIntervalHistograms;
-(NSMutableArray *)lessThan25mIntervalHistograms;
-(NSMutableArray *)lessThan55mIntervalHistograms;
-(NSMutableArray *)lessThan200mIntervalHistograms;
-(NSMutableArray *)anyPositiveIntervalHistograms;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

