/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEORouteMatch, GEORoadMatch, GEOLocation, GEONavigationMatchInfo;

@interface GEONavigationMatchResult : NSObject {

	unsigned long long _type;
	GEORouteMatch* _routeMatch;
	GEORoadMatch* _roadMatch;
	GEOLocation* _rawLocation;
	GEONavigationMatchInfo* _detailedMatchInfo;
	BOOL _locationUnreliable;

}

@property (nonatomic,readonly) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) GEORouteMatch * routeMatch;                              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) GEORoadMatch * roadMatch;                                //@synthesize roadMatch=_roadMatch - In the implementation block
@property (nonatomic,readonly) GEOLocation * rawLocation;                               //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,readonly) GEONavigationMatchInfo * detailedMatchInfo;              //@synthesize detailedMatchInfo=_detailedMatchInfo - In the implementation block
@property (nonatomic,readonly) BOOL locationUnreliable;                                 //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
+(id)matchResultWithRawLocation:(id)arg1 ;
+(id)matchResultWithRouteMatch:(id)arg1 location:(id)arg2 ;
+(id)matchResultWithRoadMatch:(id)arg1 location:(id)arg2 ;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(GEORoadMatch *)roadMatch;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(GEONavigationMatchInfo *)detailedMatchInfo;
-(void)setDetailedMatchInfo:(GEONavigationMatchInfo *)arg1 ;
-(id)initWithRouteMatch:(id)arg1 location:(id)arg2 ;
-(id)initWithRoadMatch:(id)arg1 location:(id)arg2 ;
-(id)initWithRawLocation:(id)arg1 ;
-(GEOLocation *)rawLocation;
-(BOOL)locationUnreliable;
-(unsigned long long)type;
@end

