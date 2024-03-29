/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateTransit : PBCodable <NSCopying> {

	BOOL _transitNotAvailableAdvisoryShowing;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasTransitNotAvailableAdvisoryShowing; 
@property (assign,nonatomic) BOOL transitNotAvailableAdvisoryShowing;                 //@synthesize transitNotAvailableAdvisoryShowing=_transitNotAvailableAdvisoryShowing - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTransitNotAvailableAdvisoryShowing:(BOOL)arg1 ;
-(void)setHasTransitNotAvailableAdvisoryShowing:(BOOL)arg1 ;
-(BOOL)hasTransitNotAvailableAdvisoryShowing;
-(BOOL)transitNotAvailableAdvisoryShowing;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

