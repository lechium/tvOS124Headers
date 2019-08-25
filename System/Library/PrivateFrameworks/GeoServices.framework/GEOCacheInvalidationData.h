/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface GEOCacheInvalidationData : NSObject <NSSecureCoding> {

	double _timestamp;
	double _ttl;
	unsigned _version;
	NSArray* _versionDomains;

}

@property (nonatomic,readonly) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double ttl;                            //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,readonly) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * versionDomains;              //@synthesize versionDomains=_versionDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)ttl;
-(BOOL)isInvalidatedByServiceVersion:(unsigned)arg1 domains:(id)arg2 ;
-(NSArray *)versionDomains;
-(id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned)arg3 domains:(id)arg4 ;
-(BOOL)_isKey:(id)arg1 subsetOf:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(unsigned)version;
@end
