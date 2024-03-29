/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOSignGuidanceFeedback : PBCodable <NSCopying> {

	int _signDetailIndex;
	int _signTitleIndex;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasSignTitleIndex; 
@property (assign,nonatomic) int signTitleIndex;                   //@synthesize signTitleIndex=_signTitleIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSignDetailIndex; 
@property (assign,nonatomic) int signDetailIndex;                  //@synthesize signDetailIndex=_signDetailIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)signTitleIndex;
-(void)setSignTitleIndex:(int)arg1 ;
-(void)setHasSignTitleIndex:(BOOL)arg1 ;
-(BOOL)hasSignTitleIndex;
-(int)signDetailIndex;
-(void)setSignDetailIndex:(int)arg1 ;
-(void)setHasSignDetailIndex:(BOOL)arg1 ;
-(BOOL)hasSignDetailIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

