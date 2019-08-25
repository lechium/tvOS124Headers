/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPCorrectedFlag : PBCodable <NSCopying> {

	int _flag;
	BOOL _correctedValue;
	BOOL _originalValue;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasFlag; 
@property (assign,nonatomic) int flag;                            //@synthesize flag=_flag - In the implementation block
@property (assign,nonatomic) BOOL hasOriginalValue; 
@property (assign,nonatomic) BOOL originalValue;                  //@synthesize originalValue=_originalValue - In the implementation block
@property (assign,nonatomic) BOOL hasCorrectedValue; 
@property (assign,nonatomic) BOOL correctedValue;                 //@synthesize correctedValue=_correctedValue - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setOriginalValue:(BOOL)arg1 ;
-(void)setCorrectedValue:(BOOL)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(BOOL)originalValue;
-(BOOL)correctedValue;
-(int)flag;
-(void)setFlag:(int)arg1 ;
-(void)setHasFlag:(BOOL)arg1 ;
-(BOOL)hasFlag;
-(id)flagAsString:(int)arg1 ;
-(int)StringAsFlag:(id)arg1 ;
-(void)setHasOriginalValue:(BOOL)arg1 ;
-(void)setHasCorrectedValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

