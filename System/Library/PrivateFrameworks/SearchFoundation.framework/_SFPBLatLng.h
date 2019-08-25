/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBLatLng.h>
@class NSData;


@protocol _SFPBLatLng <NSObject>
@property (assign,nonatomic) double lat; 
@property (assign,nonatomic) double lng; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setLat:(double)arg1;
-(double)lat;
-(double)lng;
-(void)setLng:(double)arg1;
-(id)initWithJSON:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBLatLng : PBCodable <_SFPBLatLng, NSSecureCoding> {

	double _lat;
	double _lng;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double lat;                            //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) double lng;                            //@synthesize lng=_lng - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLat:(double)arg1 ;
-(double)lat;
-(double)lng;
-(void)setLng:(double)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
@end

