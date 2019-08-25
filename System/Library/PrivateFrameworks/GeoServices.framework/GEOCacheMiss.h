/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOCacheMiss : PBCodable <NSCopying> {

	unsigned _bytes;
	unsigned _count;
	NSMutableArray* _errors;
	unsigned _httpStatus;
	int _missType;
	int _requestorType;
	SCD_Struct_GE87 _has;

}

@property (assign,nonatomic) BOOL hasRequestorType; 
@property (assign,nonatomic) int requestorType;                    //@synthesize requestorType=_requestorType - In the implementation block
@property (assign,nonatomic) BOOL hasMissType; 
@property (assign,nonatomic) int missType;                         //@synthesize missType=_missType - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasBytes; 
@property (assign,nonatomic) unsigned bytes;                       //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * errors;              //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatus; 
@property (assign,nonatomic) unsigned httpStatus;                  //@synthesize httpStatus=_httpStatus - In the implementation block
+(Class)errorsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequestorType:(int)arg1 ;
-(void)setBytes:(unsigned)arg1 ;
-(void)setMissType:(int)arg1 ;
-(void)setHttpStatus:(unsigned)arg1 ;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)addErrors:(id)arg1 ;
-(unsigned long long)errorsCount;
-(void)clearErrors;
-(id)errorsAtIndex:(unsigned long long)arg1 ;
-(int)requestorType;
-(void)setHasRequestorType:(BOOL)arg1 ;
-(BOOL)hasRequestorType;
-(id)requestorTypeAsString:(int)arg1 ;
-(int)StringAsRequestorType:(id)arg1 ;
-(int)missType;
-(void)setHasMissType:(BOOL)arg1 ;
-(BOOL)hasMissType;
-(id)missTypeAsString:(int)arg1 ;
-(int)StringAsMissType:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setHasBytes:(BOOL)arg1 ;
-(BOOL)hasBytes;
-(void)setHasHttpStatus:(BOOL)arg1 ;
-(BOOL)hasHttpStatus;
-(NSMutableArray *)errors;
-(unsigned)httpStatus;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)count;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)bytes;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
@end

