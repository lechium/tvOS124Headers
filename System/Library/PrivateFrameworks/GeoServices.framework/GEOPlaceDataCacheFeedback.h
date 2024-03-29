/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOPDPlaceRequest;

@interface GEOPlaceDataCacheFeedback : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	GEOPDPlaceRequest* _request;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequest:(GEOPDPlaceRequest *)arg1 ;
-(BOOL)hasRequest;
-(BOOL)hasBundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDPlaceRequest *)request;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

