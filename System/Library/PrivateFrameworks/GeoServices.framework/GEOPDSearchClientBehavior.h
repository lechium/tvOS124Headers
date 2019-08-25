/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSearchClientBehavior : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _shouldEnableRedoSearch;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasShouldEnableRedoSearch; 
@property (assign,nonatomic) BOOL shouldEnableRedoSearch;                    //@synthesize shouldEnableRedoSearch=_shouldEnableRedoSearch - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)shouldEnableRedoSearch;
-(BOOL)hasShouldEnableRedoSearch;
-(void)setShouldEnableRedoSearch:(BOOL)arg1 ;
-(void)setHasShouldEnableRedoSearch:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

