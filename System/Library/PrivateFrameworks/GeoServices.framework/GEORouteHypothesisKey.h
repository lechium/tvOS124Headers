/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteHypothesisRequest;

@interface GEORouteHypothesisKey : NSObject <NSCopying, NSSecureCoding> {

	GEORouteHypothesisRequest* _request;

}

@property (nonatomic,readonly) GEORouteHypothesisRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)_isEqual:(id)arg1 ;
-(id)initWithRouteHypothesisRequest:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEORouteHypothesisRequest *)request;
@end
