/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAllRouteETAsManagerDelegate;
@class _MKRouteETAFetcher, GEOAutomobileOptions, GEOTransitOptions, MKMapItem;

@interface MKAllRouteETAsManager : NSObject {

	_MKRouteETAFetcher* _etaFetcher;
	id<MKAllRouteETAsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKAllRouteETAsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,copy) GEOTransitOptions * transitOptions; 
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,retain) MKMapItem * originMapItem; 
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(MKMapItem *)originMapItem;
-(void)updateETA;
-(id)init;
-(void)setDelegate:(id<MKAllRouteETAsManagerDelegate>)arg1 ;
-(id<MKAllRouteETAsManagerDelegate>)delegate;
@end

