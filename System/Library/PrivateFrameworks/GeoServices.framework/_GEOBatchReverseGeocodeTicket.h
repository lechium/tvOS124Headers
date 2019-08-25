/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class GEOBatchRevGeocodeRequest;

@interface _GEOBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket {

	GEOBatchRevGeocodeRequest* _batchReverseGeocodeRequest;
	BOOL _shiftLocationsIfNeeded;

}
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)_batchReverseGeocodeWithRequest:(id)arg1 auditToken:(id)arg2 handler:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
-(BOOL)isEqualForHistoryToTicket:(id)arg1 ;
-(id)description;
-(void)cancel;
@end

