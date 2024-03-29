/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {

	SCD_Struct_GE106* _parameters;
	double _radius;
	int _status;

}

@property (assign,nonatomic) int status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long parametersCount; 
@property (nonatomic,readonly) double* parameters; 
@property (assign,nonatomic) double radius;                                     //@synthesize radius=_radius - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(unsigned long long)parametersCount;
-(void)clearParameters;
-(double)parametersAtIndex:(unsigned long long)arg1 ;
-(void)addParameters:(double)arg1 ;
-(void)setParameters:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)radius;
-(int)status;
-(void)copyTo:(id)arg1 ;
-(void)setRadius:(double)arg1 ;
-(id)dictionaryRepresentation;
-(double*)parameters;
-(void)setStatus:(int)arg1 ;
@end

