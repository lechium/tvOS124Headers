/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOStructuredAddress;

@interface GEOPDLocalizedSpokenStructuredAddress : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _language;
	GEOStructuredAddress* _spokenStructuredAddress;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                         //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * spokenStructuredAddress;              //@synthesize spokenStructuredAddress=_spokenStructuredAddress - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOStructuredAddress *)spokenStructuredAddress;
-(void)setSpokenStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(BOOL)hasLanguage;
-(BOOL)hasSpokenStructuredAddress;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end

