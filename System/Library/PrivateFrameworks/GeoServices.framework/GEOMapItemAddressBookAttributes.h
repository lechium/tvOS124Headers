/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _addressIdentifier;
	int _addressType;
	NSString* _name;
	NSString* _spokenName;
	BOOL _isMe;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasAddressType; 
@property (assign,nonatomic) int addressType;                                //@synthesize addressType=_addressType - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenName; 
@property (nonatomic,retain) NSString * spokenName;                          //@synthesize spokenName=_spokenName - In the implementation block
@property (assign,nonatomic) BOOL hasIsMe; 
@property (assign,nonatomic) BOOL isMe;                                      //@synthesize isMe=_isMe - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressIdentifier; 
@property (nonatomic,retain) NSString * addressIdentifier;                   //@synthesize addressIdentifier=_addressIdentifier - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasName;
-(void)setSpokenName:(NSString *)arg1 ;
-(BOOL)hasSpokenName;
-(NSString *)spokenName;
-(void)setAddressIdentifier:(NSString *)arg1 ;
-(int)addressType;
-(void)setAddressType:(int)arg1 ;
-(void)setHasAddressType:(BOOL)arg1 ;
-(BOOL)hasAddressType;
-(id)addressTypeAsString:(int)arg1 ;
-(int)StringAsAddressType:(id)arg1 ;
-(void)setIsMe:(BOOL)arg1 ;
-(void)setHasIsMe:(BOOL)arg1 ;
-(BOOL)hasIsMe;
-(BOOL)hasAddressIdentifier;
-(BOOL)isMe;
-(NSString *)addressIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

