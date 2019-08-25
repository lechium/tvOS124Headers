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

@class NSString;

@interface GEORPProblemResponse : PBCodable <NSCopying> {

	NSString* _problemId;
	int _statusCode;
	BOOL _isNotificationSupported;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                               //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemId; 
@property (nonatomic,retain) NSString * problemId;                         //@synthesize problemId=_problemId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNotificationSupported; 
@property (assign,nonatomic) BOOL isNotificationSupported;                 //@synthesize isNotificationSupported=_isNotificationSupported - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(NSString *)problemId;
-(BOOL)isNotificationSupported;
-(void)setProblemId:(NSString *)arg1 ;
-(BOOL)hasProblemId;
-(void)setIsNotificationSupported:(BOOL)arg1 ;
-(void)setHasIsNotificationSupported:(BOOL)arg1 ;
-(BOOL)hasIsNotificationSupported;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
@end

