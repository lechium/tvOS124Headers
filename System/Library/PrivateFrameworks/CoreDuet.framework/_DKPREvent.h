/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, _DKPRSource, _DKPRStream, _DKPRValue;

@interface _DKPREvent : PBCodable <NSCopying> {

	double _creationDate;
	double _endDate;
	double _startDate;
	NSString* _identifier;
	NSMutableArray* _metadatas;
	_DKPRSource* _source;
	_DKPRStream* _stream;
	_DKPRValue* _value;
	SCD_Struct_DK5 _has;

}

@property (nonatomic,retain) _DKPRStream * stream;                    //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) double startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) _DKPRValue * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) _DKPRSource * source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSMutableArray * metadatas;              //@synthesize metadatas=_metadatas - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
+(Class)metadataType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)startDate;
-(double)endDate;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(double)creationDate;
-(BOOL)hasSource;
-(void)setStartDate:(double)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)addMetadata:(id)arg1 ;
-(NSMutableArray *)metadatas;
-(unsigned long long)metadatasCount;
-(void)clearMetadatas;
-(id)metadataAtIndex:(unsigned long long)arg1 ;
-(void)setMetadatas:(NSMutableArray *)arg1 ;
-(void)setStream:(_DKPRStream *)arg1 ;
-(_DKPRStream *)stream;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(_DKPRValue *)value;
-(void)setValue:(_DKPRValue *)arg1 ;
-(void)setSource:(_DKPRSource *)arg1 ;
-(_DKPRSource *)source;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

