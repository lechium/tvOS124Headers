/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEORouteManagerDelegate;
@class GEOApplicationAuditToken;

@interface GEORouteManager : NSObject {

	id<GEORouteManagerDelegate> _delegate;
	GEOApplicationAuditToken* _auditToken;

}

@property (assign,nonatomic,__weak) id<GEORouteManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;                    //@synthesize auditToken=_auditToken - In the implementation block
+(void)setShouldRequestServerLatencyInfo:(BOOL)arg1 ;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(void)addedRoutesToRouteSet:(id)arg1 ;
-(id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2 ;
-(void)handleResponse:(id)arg1 routeSet:(id)arg2 forTicket:(id)arg3 ;
-(void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3 ;
-(void)fetchDirectionsForTicket:(id)arg1 routeSet:(id)arg2 networkActivity:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<GEORouteManagerDelegate>)arg1 ;
-(id<GEORouteManagerDelegate>)delegate;
-(GEOApplicationAuditToken *)auditToken;
@end

