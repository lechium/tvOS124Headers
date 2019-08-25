/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPMerchantLookupCorrections : PBCodable <NSCopying> {

	BOOL _isCategoryIncorrect;
	BOOL _isMerchantIncorrect;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasIsCategoryIncorrect; 
@property (assign,nonatomic) BOOL isCategoryIncorrect;                 //@synthesize isCategoryIncorrect=_isCategoryIncorrect - In the implementation block
@property (assign,nonatomic) BOOL hasIsMerchantIncorrect; 
@property (assign,nonatomic) BOOL isMerchantIncorrect;                 //@synthesize isMerchantIncorrect=_isMerchantIncorrect - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsCategoryIncorrect:(BOOL)arg1 ;
-(void)setHasIsCategoryIncorrect:(BOOL)arg1 ;
-(BOOL)hasIsCategoryIncorrect;
-(void)setIsMerchantIncorrect:(BOOL)arg1 ;
-(void)setHasIsMerchantIncorrect:(BOOL)arg1 ;
-(BOOL)hasIsMerchantIncorrect;
-(BOOL)isCategoryIncorrect;
-(BOOL)isMerchantIncorrect;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

