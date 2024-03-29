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

@class GEOCacheHit, GEOCacheMiss;

@interface GEOLogMsgEventTileCacheAnalytic : PBCodable <NSCopying> {

	GEOCacheHit* _cacheHit;
	GEOCacheMiss* _cacheMiss;

}

@property (nonatomic,readonly) BOOL hasCacheHit; 
@property (nonatomic,retain) GEOCacheHit * cacheHit;                //@synthesize cacheHit=_cacheHit - In the implementation block
@property (nonatomic,readonly) BOOL hasCacheMiss; 
@property (nonatomic,retain) GEOCacheMiss * cacheMiss;              //@synthesize cacheMiss=_cacheMiss - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCacheHit:(GEOCacheHit *)arg1 ;
-(GEOCacheHit *)cacheHit;
-(void)setCacheMiss:(GEOCacheMiss *)arg1 ;
-(GEOCacheMiss *)cacheMiss;
-(BOOL)hasCacheHit;
-(BOOL)hasCacheMiss;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

