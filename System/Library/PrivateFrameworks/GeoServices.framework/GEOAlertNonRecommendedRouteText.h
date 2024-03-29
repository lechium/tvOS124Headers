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

@class GEOPlaceFormattedString, GEOFormattedString;

@interface GEOAlertNonRecommendedRouteText : PBCodable <NSCopying> {

	GEOPlaceFormattedString* _body;
	GEOFormattedString* _responseAlertPrimary;
	GEOFormattedString* _responseAlertSecondary;
	GEOPlaceFormattedString* _title;

}

@property (nonatomic,readonly) BOOL hasResponseAlertPrimary; 
@property (nonatomic,retain) GEOFormattedString * responseAlertPrimary;                //@synthesize responseAlertPrimary=_responseAlertPrimary - In the implementation block
@property (nonatomic,readonly) BOOL hasResponseAlertSecondary; 
@property (nonatomic,retain) GEOFormattedString * responseAlertSecondary;              //@synthesize responseAlertSecondary=_responseAlertSecondary - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOPlaceFormattedString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) GEOPlaceFormattedString * body;                           //@synthesize body=_body - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setResponseAlertPrimary:(GEOFormattedString *)arg1 ;
-(void)setResponseAlertSecondary:(GEOFormattedString *)arg1 ;
-(BOOL)hasResponseAlertPrimary;
-(BOOL)hasResponseAlertSecondary;
-(BOOL)hasBody;
-(GEOFormattedString *)responseAlertPrimary;
-(GEOFormattedString *)responseAlertSecondary;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(GEOPlaceFormattedString *)arg1 ;
-(GEOPlaceFormattedString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasTitle;
-(void)setBody:(GEOPlaceFormattedString *)arg1 ;
-(GEOPlaceFormattedString *)body;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

