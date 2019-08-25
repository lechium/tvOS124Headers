/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEORouteSet;

@interface GEOLazyRouteSetIterator : NSObject {

	GEORouteSet* _routeSet;
	unsigned long long _contingencyRouteIndex;

}
-(id)initWithRouteSet:(id)arg1 ;
-(id)nextLazyRoute;
-(void)setContingencyRouteIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end
