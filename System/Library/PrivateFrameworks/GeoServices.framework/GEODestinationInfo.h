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

@interface GEODestinationInfo : PBCodable <NSCopying> {

	BOOL _hasDisplayAddress;
	BOOL _hasDisplayName;
	BOOL _hasSpokenAddress;
	BOOL _hasSpokenName;
	SCD_Struct_GE70 _has;

}

@property (assign,nonatomic) BOOL hasHasDisplayName; 
@property (assign,nonatomic) BOOL hasDisplayName;                    //@synthesize hasDisplayName=_hasDisplayName - In the implementation block
@property (assign,nonatomic) BOOL hasHasSpokenName; 
@property (assign,nonatomic) BOOL hasSpokenName;                     //@synthesize hasSpokenName=_hasSpokenName - In the implementation block
@property (assign,nonatomic) BOOL hasHasDisplayAddress; 
@property (assign,nonatomic) BOOL hasDisplayAddress;                 //@synthesize hasDisplayAddress=_hasDisplayAddress - In the implementation block
@property (assign,nonatomic) BOOL hasHasSpokenAddress; 
@property (assign,nonatomic) BOOL hasSpokenAddress;                  //@synthesize hasSpokenAddress=_hasSpokenAddress - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSpokenName;
-(BOOL)hasSpokenAddress;
-(BOOL)hasDisplayName;
-(void)setHasDisplayName:(BOOL)arg1 ;
-(void)setHasHasDisplayName:(BOOL)arg1 ;
-(BOOL)hasHasDisplayName;
-(void)setHasSpokenName:(BOOL)arg1 ;
-(void)setHasHasSpokenName:(BOOL)arg1 ;
-(BOOL)hasHasSpokenName;
-(void)setHasDisplayAddress:(BOOL)arg1 ;
-(void)setHasHasDisplayAddress:(BOOL)arg1 ;
-(BOOL)hasHasDisplayAddress;
-(void)setHasSpokenAddress:(BOOL)arg1 ;
-(void)setHasHasSpokenAddress:(BOOL)arg1 ;
-(BOOL)hasHasSpokenAddress;
-(BOOL)hasDisplayAddress;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

