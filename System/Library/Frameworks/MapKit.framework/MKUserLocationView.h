/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/VKPuckAnimatorTarget.h>

@protocol MKUserLocationHeadingIndicator;
@class CALayer, VKNavigationPuck, CLLocation, NSString;

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget> {

	CALayer* _puckLayer;
	CALayer* _accuracyContainerLayer;
	VKNavigationPuck* _navigationPuckMarker;
	long long _zoomDirection;
	CALayer* _pulseLayer;
	CALayer* _accuracyLayer;
	BOOL _allowsPulse;
	BOOL _shouldPulse;
	BOOL _allowsHeadingIndicator;
	BOOL _shouldDisplayHeading;
	BOOL _shouldDisplayInaccurateHeading;
	double _heading;
	double _headingAccuracy;
	CALayer*<MKUserLocationHeadingIndicator> _headingLayer;
	BOOL _allowsAccuracyRing;
	BOOL _stale;
	BOOL _effectsEnabled;
	double _maxRadiusToShowAccuracyRing;
	double _presentationCourse;
	double _locationAccuracy;
	CLLocation* _lastLocation;
	BOOL _forcesConeIndicator;
	long long _headingIndicatorStyle;

}

@property (assign,setter=setStale:,getter=isStale,nonatomic) BOOL stale;               //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayHeading;                                //@synthesize shouldDisplayHeading=_shouldDisplayHeading - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayInaccurateHeading;                      //@synthesize shouldDisplayInaccurateHeading=_shouldDisplayInaccurateHeading - In the implementation block
@property (assign,nonatomic) BOOL forcesConeIndicator;                                 //@synthesize forcesConeIndicator=_forcesConeIndicator - In the implementation block
@property (assign,nonatomic) double heading;                                           //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                                   //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
@property (nonatomic,readonly) double locationAccuracy;                                //@synthesize locationAccuracy=_locationAccuracy - In the implementation block
@property (assign,nonatomic) float opacity; 
@property (assign,getter=isEffectsEnabled,nonatomic) BOOL effectsEnabled;              //@synthesize effectsEnabled=_effectsEnabled - In the implementation block
@property (assign,nonatomic) long long zoomDirection;                                  //@synthesize zoomDirection=_zoomDirection - In the implementation block
@property (nonatomic,readonly) CLLocation * lastLocation;                              //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,nonatomic) BOOL allowsPulse;                                         //@synthesize allowsPulse=_allowsPulse - In the implementation block
@property (assign,nonatomic) BOOL allowsAccuracyRing;                                  //@synthesize allowsAccuracyRing=_allowsAccuracyRing - In the implementation block
@property (assign,nonatomic) BOOL allowsHeadingIndicator;                              //@synthesize allowsHeadingIndicator=_allowsHeadingIndicator - In the implementation block
@property (assign,nonatomic) double puckAlpha; 
@property (assign,nonatomic) double accuracyRingAlpha; 
@property (assign,nonatomic) long long headingIndicatorStyle;                          //@synthesize headingIndicatorStyle=_headingIndicatorStyle - In the implementation block
@property (assign,nonatomic) double maxRadiusToShowAccuracyRing;                       //@synthesize maxRadiusToShowAccuracyRing=_maxRadiusToShowAccuracyRing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double presentationCourse;                                //@synthesize presentationCourse=_presentationCourse - In the implementation block
+(unsigned long long)_zIndex;
+(unsigned long long)_selectedZIndex;
+(double)accuracyDiameter:(double)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(CLLocation *)lastLocation;
-(double)headingAccuracy;
-(BOOL)_tracking;
-(void)_setPresentationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(void)_setVKNavigationPuckMarker:(id)arg1 ;
-(id)_vkNavigationPuckMarker;
-(void)_updateFromMap;
-(void)_setMapPitchRadians:(double)arg1 ;
-(id)_pulseLayer;
-(void)setPresentationCoordinate:(CGSize)arg1 ;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(double)presentationCourse;
-(void)setPresentationCourse:(double)arg1 ;
-(void)_updateHideLargeAccuracyRing;
-(BOOL)_hideLargeAccuracyRing;
-(BOOL)_shouldShowAccuracyRing;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(id)_pulseAnimation;
-(void)_resumePulse;
-(void)_pausePulse;
-(void)_removePulse;
-(void)_updatePulse;
-(void)setAllowsPulse:(BOOL)arg1 ;
-(void)setMaxRadiusToShowAccuracyRing:(double)arg1 ;
-(void)setAllowsAccuracyRing:(BOOL)arg1 ;
-(id)_baseLayer;
-(id)_headingImageForAccuracy:(double)arg1 anchorPoint:(CGPoint*)arg2 ;
-(void)setAllowsHeadingIndicator:(BOOL)arg1 ;
-(void)setHeadingIndicatorStyle:(long long)arg1 ;
-(void)setForcesConeIndicator:(BOOL)arg1 ;
-(long long)_enforcedHeadingIndicatorStyle;
-(void)_updateHeadingLayerForStyleChange;
-(void)_updateShowHeadingLayer;
-(void)_updateShowHeadingLayerAnimatedIfPossible:(BOOL)arg1 ;
-(void)_updateShowHeadingLayer:(BOOL)arg1 animatedIfPossible:(BOOL)arg2 ;
-(void)setShouldDisplayHeading:(BOOL)arg1 ;
-(void)setShouldDisplayInaccurateHeading:(BOOL)arg1 ;
-(void)setHeadingAccuracy:(double)arg1 ;
-(double)puckAlpha;
-(void)setPuckAlpha:(double)arg1 ;
-(void)setPuckScale:(double)arg1 ;
-(double)accuracyRingAlpha;
-(void)setAccuracyRingAlpha:(double)arg1 ;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(id)_accuracyAnimation:(double)arg1 ;
-(id)_layerToMatchAccuracyRing;
-(void)_resetLayerToMatchAccuracyRing;
-(void)setLocationAccuracy:(double)arg1 duration:(double)arg2 ;
-(BOOL)_shouldPulseForLocation:(id)arg1 ;
-(BOOL)_isLocationStale:(id)arg1 ;
-(void)updateStateFromLocation:(id)arg1 duration:(double)arg2 ;
-(void)locationManagerFailedToUpdateLocation;
-(void)_updateLayers;
-(void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2 ;
-(long long)zoomDirection;
-(void)setZoomDirection:(long long)arg1 ;
-(BOOL)allowsPulse;
-(BOOL)allowsHeadingIndicator;
-(BOOL)shouldDisplayHeading;
-(BOOL)shouldDisplayInaccurateHeading;
-(BOOL)allowsAccuracyRing;
-(double)maxRadiusToShowAccuracyRing;
-(BOOL)isStale;
-(void)setStale:(BOOL)arg1 ;
-(BOOL)isEffectsEnabled;
-(double)locationAccuracy;
-(long long)headingIndicatorStyle;
-(BOOL)forcesConeIndicator;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)didMoveToWindow;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHeading:(double)arg1 ;
-(double)heading;
@end

