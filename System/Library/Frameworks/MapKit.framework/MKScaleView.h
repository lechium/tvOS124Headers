/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSNumberFormatter, UIColor, NSMutableArray, _MKScaleUnitsView, UIView, NSMutableDictionary, NSString, MKMapView;

@interface MKScaleView : UIView {

	double _distanceInMeters;
	BOOL _useMetric;
	BOOL _useYardsForShortDistances;
	NSNumberFormatter* _floatNumberFormatter;
	double _magicNumbers[3];
	UIColor* _lightSegmentColorRegular;
	UIColor* _darkSegmentColorRegular;
	UIColor* _borderColorRegular;
	UIColor* _lightSegmentColorSatellite;
	UIColor* _darkSegmentColorSatellite;
	UIColor* _borderColorSatellite;
	NSMutableArray* _segments;
	_MKScaleUnitsView* _unitsView;
	long long _oldNumberOfSegments;
	UIView* _outlineViewA;
	UIView* _outlineViewB;
	UIView* _displayedOutline;
	double _segmentLengthInPixels;
	double _resultSegmentLength;
	double _resultSegmentLengthInMeters;
	NSMutableDictionary* _formattedNumberCache;
	NSString* _feetAbbreviation;
	NSString* _yardAbbreviation;
	NSString* _milesAbbreviation;
	NSString* _metersAbbreviation;
	NSString* _kilometersAbbreviation;
	long long _grQuality;
	int _layoutCounter;
	BOOL _useLightText;
	BOOL _isVisible;
	MKMapView* _mapView;
	long long _scaleVisibility;
	long long _legendAlignment;

}

@property (assign,nonatomic) BOOL useLightText; 
@property (assign,nonatomic) double distanceInMeters; 
@property (assign,nonatomic,__weak) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) long long scaleVisibility;               //@synthesize scaleVisibility=_scaleVisibility - In the implementation block
@property (assign,nonatomic) long long legendAlignment;               //@synthesize legendAlignment=_legendAlignment - In the implementation block
+(id)scaleViewWithMapView:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)setDistanceInMeters:(double)arg1 ;
-(MKMapView *)mapView;
-(void)memoryWarning:(id)arg1 ;
-(void)_updateStrings;
-(void)setUseLightText:(BOOL)arg1 ;
-(BOOL)useLightText;
-(void)setLegendAlignment:(long long)arg1 ;
-(void)setScaleVisibility:(long long)arg1 ;
-(void)shouldUpdateScaleNotification:(id)arg1 ;
-(void)updateLocale:(id)arg1 ;
-(void)_updateSegmentStrokes;
-(void)_calculateSegments;
-(id)_formattedStringForFloat:(double)arg1 ;
-(id)_scaleViewFormattedStringForFloat:(double)arg1 ;
-(id)_scaleViewFormattedStringForInteger:(long long)arg1 ;
-(void)_localizedDistanceStringsWithMeters:(unsigned)arg1 imperial:(double)arg2 useFeet:(BOOL)arg3 inMetric:(BOOL)arg4 displaysYardsForShortDistances:(BOOL)arg5 strings:(id)arg6 ;
-(long long)scaleVisibility;
-(long long)legendAlignment;
-(void)_updateVisibility;
-(id)initWithMapView:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)didMoveToWindow;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
@end

