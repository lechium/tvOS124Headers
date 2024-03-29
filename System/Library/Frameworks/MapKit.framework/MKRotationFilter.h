/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKRotationFilterDelegate;
#import <MapKit/MapKit-Structs.h>
@class VKMapView;

@interface MKRotationFilter : NSObject {

	VKMapView* _mapLayer;
	double _gestureStartAngle;
	BOOL _userRotatedAwayFromVerticalYaw;
	double _previousVerticalYawOverride;
	BOOL _snappedToNorth;
	BOOL _snappedAtStart;
	BOOL _snappingEnabled;
	double _additionalSnappingAngle;
	id<MKRotationFilterDelegate> _delegate;

}

@property (assign,getter=isSnappedToNorth,nonatomic) BOOL snappedToNorth;               //@synthesize snappedToNorth=_snappedToNorth - In the implementation block
@property (assign,nonatomic) double additionalSnappingAngle;                            //@synthesize additionalSnappingAngle=_additionalSnappingAngle - In the implementation block
@property (assign,nonatomic,__weak) id<MKRotationFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMapLayer:(id)arg1 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 withSnapping:(BOOL)arg2 ;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)snapToNorthAnimated:(BOOL)arg1 forceTrueNorth:(BOOL)arg2 ;
-(void)updateSnappedToNorth;
-(BOOL)hasAdditionalSnappingAngle;
-(BOOL)isSnappedToNorth;
-(void)setSnappedToNorth:(BOOL)arg1 ;
-(double)additionalSnappingAngle;
-(void)setAdditionalSnappingAngle:(double)arg1 ;
-(id)init;
-(void)setDelegate:(id<MKRotationFilterDelegate>)arg1 ;
-(id<MKRotationFilterDelegate>)delegate;
@end

