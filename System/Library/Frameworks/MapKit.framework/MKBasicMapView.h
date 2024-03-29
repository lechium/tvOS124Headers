/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class UIView, VKMapView, NSString;

@interface MKBasicMapView : UIView <GEOResourceManifestTileGroupObserver> {

	UIView* _hostView;
	VKMapView* _mapView;
	double _mapModeStartTime;
	double _trafficStartTime;
	BOOL _changingViewSize;
	BOOL _inactive;

}

@property (nonatomic,readonly) VKMapView * mapView;                                          //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (assign,nonatomic) BOOL rendersInBackground; 
@property (assign,nonatomic) double mapModeStartTime;                                        //@synthesize mapModeStartTime=_mapModeStartTime - In the implementation block
@property (assign,nonatomic) double trafficStartTime;                                        //@synthesize trafficStartTime=_trafficStartTime - In the implementation block
@property (getter=isChangingViewSize,nonatomic,readonly) BOOL changingViewSize;              //@synthesize changingViewSize=_changingViewSize - In the implementation block
@property (assign,nonatomic) BOOL inactive;                                                  //@synthesize inactive=_inactive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(VKMapView *)mapView;
-(BOOL)rendersInBackground;
-(void)setRendersInBackground:(BOOL)arg1 ;
-(CGPoint)convertCoordinate:(CLLocationCoordinate2D)arg1 toPointToView:(id)arg2 ;
-(void)_enterForeground:(id)arg1 ;
-(void)_enterBackground:(id)arg1 ;
-(void)_finishedSnapshot:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andGlobe:(BOOL)arg2 shouldRasterize:(BOOL)arg3 ;
-(void)addCalloutSubview:(id)arg1 ;
-(CGSize)calloutContainerCanvasSize;
-(double)calloutContainerCanvasScale;
-(void)setInactive:(BOOL)arg1 ;
-(void)_animateCanvasForBounds:(CGRect)arg1 ;
-(CGPoint)convertCoordinate:(CLLocationCoordinate2D)arg1 toCameraModelPointToView:(id)arg2 ;
-(BOOL)isPointValidForGesturing:(CGPoint)arg1 ;
-(void)_updateMapViewHidden;
-(void)_updateForCurrentScreen;
-(void)updateStatsForEnablingTraffic:(BOOL)arg1 ;
-(void)_updateStatsForTrafficEnabledTime:(BOOL)arg1 ;
-(void)updateStatsForTrafficEnabledTime;
-(void)updateStatsForSwitchingToMapType:(long long)arg1 ;
-(void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg1 ;
-(void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg1 ignoreIfViewInWindow:(BOOL)arg2 ;
-(double)mapModeStartTime;
-(void)setMapModeStartTime:(double)arg1 ;
-(double)trafficStartTime;
-(void)setTrafficStartTime:(double)arg1 ;
-(BOOL)isChangingViewSize;
-(BOOL)inactive;
-(CLLocationCoordinate2D)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
@end

