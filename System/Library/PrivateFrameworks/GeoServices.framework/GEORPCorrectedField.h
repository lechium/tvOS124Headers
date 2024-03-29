/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORPCorrectedField : PBCodable <NSCopying> {

	NSString* _correctedValue;
	int _field;
	NSString* _fieldName;
	NSString* _originalValue;
	BOOL _isMarkedIncorrect;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasField; 
@property (assign,nonatomic) int field;                              //@synthesize field=_field - In the implementation block
@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) NSString * fieldName;                   //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalValue; 
@property (nonatomic,retain) NSString * originalValue;               //@synthesize originalValue=_originalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedValue; 
@property (nonatomic,retain) NSString * correctedValue;              //@synthesize correctedValue=_correctedValue - In the implementation block
@property (assign,nonatomic) BOOL hasIsMarkedIncorrect; 
@property (assign,nonatomic) BOOL isMarkedIncorrect;                 //@synthesize isMarkedIncorrect=_isMarkedIncorrect - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setOriginalValue:(NSString *)arg1 ;
-(void)setCorrectedValue:(NSString *)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(NSString *)originalValue;
-(NSString *)correctedValue;
-(void)setFieldName:(NSString *)arg1 ;
-(void)setField:(int)arg1 ;
-(void)setHasField:(BOOL)arg1 ;
-(BOOL)hasField;
-(id)fieldAsString:(int)arg1 ;
-(int)StringAsField:(id)arg1 ;
-(BOOL)hasFieldName;
-(void)setIsMarkedIncorrect:(BOOL)arg1 ;
-(void)setHasIsMarkedIncorrect:(BOOL)arg1 ;
-(BOOL)hasIsMarkedIncorrect;
-(NSString *)fieldName;
-(BOOL)isMarkedIncorrect;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)field;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

