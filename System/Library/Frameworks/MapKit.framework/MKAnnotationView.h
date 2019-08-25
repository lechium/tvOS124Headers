/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_MKKVOProxyDelegate.h>
#import <libobjc.A.dylib/MKAnnotationRepresentation.h>
#import <libobjc.A.dylib/MKLocatableObject.h>

@protocol MKAnnotation;
@class MKUserLocationAnnotationViewProxy, _MKAnnotationViewAnchor, GEORouteMatch, NSMutableArray, _MKKVOProxy, _MKAnnotationViewCustomFeatureAnnotation, NSString, UIImage, MKCalloutView, UIView, CALayer, VKAnchorWrapper;

@interface MKAnnotationView : UIView <_MKKVOProxyDelegate, MKAnnotationRepresentation, MKLocatableObject> {

	CLLocationCoordinate2D _presentationCoordinate;
	double _presentationCourse;
	/*^block*/id _presentationCoordinateChangedCallback;
	CLLocationCoordinate2D _coordinate;
	MKUserLocationAnnotationViewProxy* _userLocationProxy;
	double _rotationRadians;
	_MKAnnotationViewAnchor* _anchor;
	GEORouteMatch* _routeMatch;
	double _mapRotationRadians;
	unsigned long long _hiddenReasons;
	NSMutableArray* _hiddenCompletionBlocks;
	double _realAlpha;
	CGPoint _realOffset;
	double _mapPitchRadians;
	SCD_Struct_MK18 _mapDisplayStyle;
	float _selectionPriority;
	_MKKVOProxy* _annotationObserver;
	_MKAnnotationViewCustomFeatureAnnotation* _customFeatureAnnotation;
	id<MKAnnotation> _annotation;
	float _displayPriority;
	CGRect _collisionFrame;
	NSString* _clusteringIdentifier;
	UIImage* _image;
	MKCalloutView* _calloutView;
	UIView* _leftCalloutAccessoryView;
	UIView* _rightCalloutAccessoryView;
	UIView* _detailCalloutAccessoryView;
	long long _collisionMode;
	NSString* _reuseIdentifier;
	MKAnnotationView* _clusterAnnotationView;
	unsigned long long _mapType;
	unsigned long long _zIndex;
	CGPoint _centerOffset;
	CGPoint _calloutOffset;
	unsigned long long _dragState;
	struct {
		unsigned pendingSelectionAnimated : 1;
		unsigned disabled : 1;
		unsigned selected : 1;
		unsigned canShowCallout : 1;
		unsigned isHighlighted : 1;
		unsigned canDisplayDisclosureInCallout : 1;
		unsigned canDisplayPlacemarkInCallout : 1;
		unsigned draggable : 1;
		unsigned useBalloonCallouts : 1;
		unsigned customTransformApplied : 1;
		unsigned internalTransformApplied : 1;
		unsigned animatingToCoordinate : 1;
		unsigned tracking : 1;
		unsigned pendingOffsetAnimation : 1;
		unsigned pendingHideAnimation : 1;
		unsigned setSelectState : 2;
	}  _flags;
	CALayer* _imageLayer;
	BOOL _animatingToCoordinate;
	BOOL _tracking;
	BOOL _pendingSelectionAnimated;
	double _direction;
	CGPoint _leftCalloutOffset;
	CGPoint _rightCalloutOffset;

}

@property (setter=_setCalloutView:,getter=_calloutView,nonatomic,retain) MKCalloutView * _calloutView;                                           //@synthesize calloutView=_calloutView - In the implementation block
@property (assign,setter=_setPendingSelectionAnimated:,getter=_isPendingSelectionAnimated,nonatomic) BOOL pendingSelectionAnimated;              //@synthesize pendingSelectionAnimated=_pendingSelectionAnimated - In the implementation block
@property (nonatomic,readonly) VKAnchorWrapper * anchor; 
@property (setter=_setRouteMatch:,nonatomic,retain) GEORouteMatch * _routeMatch;                                                                 //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) MKUserLocationAnnotationViewProxy * _userLocationProxy; 
@property (getter=_significantBounds,nonatomic,readonly) CGRect significantBounds; 
@property (nonatomic,readonly) CGRect _significantFrame; 
@property (assign,setter=_setDirection:,nonatomic) double _direction;                                                                            //@synthesize direction=_direction - In the implementation block
@property (assign,setter=_setPresentationCoordinate:,nonatomic) CLLocationCoordinate2D _presentationCoordinate;                                  //@synthesize presentationCoordinate=_presentationCoordinate - In the implementation block
@property (setter=_setPresentationCoordinateChangedCallback:,nonatomic,copy) id _presentationCoordinateChangedCallback;                          //@synthesize presentationCoordinateChangedCallback=_presentationCoordinateChangedCallback - In the implementation block
@property (assign,setter=_setPresentationCourse:,nonatomic) double _presentationCourse;                                                          //@synthesize presentationCourse=_presentationCourse - In the implementation block
@property (assign,setter=_setAnimatingToCoordinate:,getter=_isAnimatingToCoordinate,nonatomic) BOOL _animatingToCoordinate;                      //@synthesize animatingToCoordinate=_animatingToCoordinate - In the implementation block
@property (assign,setter=_setTracking:,getter=_isTracking,nonatomic) BOOL _tracking;                                                             //@synthesize tracking=_tracking - In the implementation block
@property (assign,setter=_setMapDisplayStyle:,getter=_mapDisplayStyle,nonatomic) SCD_Struct_MK18 mapDisplayStyle;                                //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,setter=_setSelectionPriority:,getter=_selectionPriority,nonatomic) float selectionPriority;                                    //@synthesize selectionPriority=_selectionPriority - In the implementation block
@property (assign,nonatomic) CGPoint leftCalloutOffset;                                                                                          //@synthesize leftCalloutOffset=_leftCalloutOffset - In the implementation block
@property (assign,nonatomic) CGPoint rightCalloutOffset;                                                                                         //@synthesize rightCalloutOffset=_rightCalloutOffset - In the implementation block
@property (assign,setter=_setMapRotationRadians:,getter=_mapRotationRadians,nonatomic) double mapRotationRadians;                                //@synthesize mapRotationRadians=_mapRotationRadians - In the implementation block
@property (assign,setter=_setMapPitchRadians:,getter=_mapPitchRadians,nonatomic) double mapPitchRadians;                                         //@synthesize mapPitchRadians=_mapPitchRadians - In the implementation block
@property (getter=_collisionFrame,nonatomic,readonly) CGRect collisionFrame;                                                                     //@synthesize collisionFrame=_collisionFrame - In the implementation block
@property (assign,setter=_setUseBalloonCallouts:,getter=_useBalloonCallouts,nonatomic) BOOL useBalloonCallouts; 
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,retain) id<MKAnnotation> annotation; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGPoint centerOffset; 
@property (assign,nonatomic) CGPoint calloutOffset; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL canShowCallout; 
@property (nonatomic,retain) UIView * leftCalloutAccessoryView;                                                                                  //@synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * rightCalloutAccessoryView;                                                                                 //@synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * detailCalloutAccessoryView;                                                                                //@synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView - In the implementation block
@property (assign,getter=isDraggable,nonatomic) BOOL draggable; 
@property (assign,nonatomic) unsigned long long dragState; 
@property (nonatomic,copy) NSString * clusteringIdentifier;                                                                                      //@synthesize clusteringIdentifier=_clusteringIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) MKAnnotationView * clusterAnnotationView;                                                                  //@synthesize clusterAnnotationView=_clusterAnnotationView - In the implementation block
@property (assign,nonatomic) float displayPriority;                                                                                              //@synthesize displayPriority=_displayPriority - In the implementation block
@property (assign,nonatomic) long long collisionMode;                                                                                            //@synthesize collisionMode=_collisionMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
+(float)_defaultDisplayPriority;
+(Class)calloutViewClass;
+(id)currentLocationTitle;
+(unsigned long long)_zIndex;
+(unsigned long long)_selectedZIndex;
+(id)_disclosureCalloutButton;
+(BOOL)_isInitiallyHiddenWhenAdded;
+(BOOL)_followsTerrain;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(id)_annotationContainer;
-(unsigned long long)_mapType;
-(SCD_Struct_MK18)_mapDisplayStyle;
-(void)_setMapDisplayStyle:(SCD_Struct_MK18)arg1 ;
-(BOOL)canShowCallout;
-(void)_unhideForDisplay;
-(void)_didDragWithVelocity:(CGPoint)arg1 ;
-(void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldDeselectWhenDragged;
-(BOOL)isProvidingCustomFeature;
-(void)configureCustomFeature:(id)arg1 ;
-(MKCalloutView *)_calloutView;
-(void)setLeftCalloutAccessoryView:(UIView *)arg1 ;
-(UIView *)leftCalloutAccessoryView;
-(void)setRightCalloutAccessoryView:(UIView *)arg1 ;
-(UIView *)rightCalloutAccessoryView;
-(void)setDetailCalloutAccessoryView:(UIView *)arg1 ;
-(UIView *)detailCalloutAccessoryView;
-(CGPoint)_draggingDropOffset;
-(CGRect)_significantBounds;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(void)_didUpdatePosition;
-(double)_direction;
-(id)viewRepresentation;
-(void)_setHiddenForOffscreen:(BOOL)arg1 ;
-(void)_invalidateCachedCoordinate;
-(BOOL)_isPendingSelectionAnimated;
-(void)_mkObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)_zIndex;
-(CLLocationCoordinate2D)_presentationCoordinate;
-(double)_presentationCourse;
-(id)_presentationCoordinateChangedCallback;
-(MKUserLocationAnnotationViewProxy *)_userLocationProxy;
-(GEORouteMatch *)_routeMatch;
-(double)_mapRotationRadians;
-(double)_mapPitchRadians;
-(float)_selectionPriority;
-(id)_customFeatureAnnotation;
-(CGRect)_collisionFrame;
-(BOOL)shouldShowCallout;
-(void)_updateAnchorPosition:(CGPoint)arg1 alignToPixels:(BOOL)arg2 ;
-(void)setClusterAnnotationView:(MKAnnotationView *)arg1 ;
-(long long)compareForClustering:(id)arg1 ;
-(long long)compareForCollision:(id)arg1 ;
-(id)_getPopover:(id)arg1 ;
-(void)_removePopover;
-(BOOL)_shouldShowCalloutIfSelected;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(CGPoint)calloutOffset;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(void)_setMapRotationRadians:(double)arg1 ;
-(void)_setDirection:(double)arg1 ;
-(void)_setPresentationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(CGRect)_significantFrame;
-(BOOL)isDraggable;
-(unsigned long long)dragState;
-(void)setDragState:(unsigned long long)arg1 ;
-(BOOL)_canDisplayDisclosureInCallout;
-(void)_setCanDisplayDisclosureInCallout:(BOOL)arg1 ;
-(BOOL)_canDisplayPlacemarkInCallout;
-(void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1 ;
-(void)_setZIndex:(unsigned long long)arg1 notify:(BOOL)arg2 ;
-(void)_setZIndex:(unsigned long long)arg1 ;
-(unsigned long long)_effectiveZIndex;
-(void)_resetZIndex;
-(void)_resetZIndexNotify:(BOOL)arg1 ;
-(BOOL)_isHiddenForReason:(unsigned long long)arg1 ;
-(void)_performHideAnimationIfNeeded;
-(void)_performOffsetAnimationIfNeeded;
-(void)_performStateUpdatesIfNeeded;
-(void)_setHidden:(BOOL)arg1 forReason:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_setHidden:(BOOL)arg1 forReason:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setPositionOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_offsetToAnnotationView:(id)arg1 ;
-(void)_enableRotationForHeadingMode:(double)arg1 ;
-(void)_userTrackingModeDidChange:(id)arg1 ;
-(void)_transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3 ;
-(BOOL)_hasAlternateOrientation;
-(unsigned long long)_orientationCount;
-(BOOL)_canChangeOrientation;
-(void)_setVKNavigationPuckMarker:(id)arg1 ;
-(id)_vkNavigationPuckMarker;
-(double)_pointsForDistance:(double)arg1 ;
-(void)_updateFromMap;
-(BOOL)_useBalloonCallouts;
-(void)_setUseBalloonCallouts:(BOOL)arg1 ;
-(void)_addAnnotationObservation;
-(void)_removeAnnotationObservation;
-(BOOL)isCollidingWithAnnotationView:(id)arg1 previouslyCollided:(BOOL)arg2 ;
-(void)_setPresentationCoordinateChangedCallback:(/*^block*/id)arg1 ;
-(void)_setPresentationCourse:(double)arg1 ;
-(BOOL)_isAnimatingToCoordinate;
-(BOOL)_isTracking;
-(void)_setCalloutView:(id)arg1 ;
-(CGPoint)leftCalloutOffset;
-(void)setLeftCalloutOffset:(CGPoint)arg1 ;
-(CGPoint)rightCalloutOffset;
-(void)setRightCalloutOffset:(CGPoint)arg1 ;
-(void)_setRouteMatch:(id)arg1 ;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)_setSelectionPriority:(float)arg1 ;
-(void)_setPendingSelectionAnimated:(BOOL)arg1 ;
-(float)displayPriority;
-(void)setDisplayPriority:(float)arg1 ;
-(NSString *)clusteringIdentifier;
-(void)setClusteringIdentifier:(NSString *)arg1 ;
-(MKAnnotationView *)clusterAnnotationView;
-(void)invalidateCustomFeatureForced:(BOOL)arg1 ;
-(id)customFeatureAnnotation;
-(id)_mapView;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCanShowCallout:(BOOL)arg1 ;
-(void)setDraggable:(BOOL)arg1 ;
-(id)_contentLayer;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(id)_containerView;
-(double)alpha;
-(void)didMoveToSuperview;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_commonInit;
-(void)prepareForDisplay;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)reuseIdentifier;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<MKAnnotation>)annotation;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
-(long long)collisionMode;
-(void)setCollisionMode:(long long)arg1 ;
-(CGPoint)centerOffset;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(void)prepareForSnapshotting;
-(VKAnchorWrapper *)anchor;
-(BOOL)isPersistent;
-(BOOL)isSelectable;
@end

