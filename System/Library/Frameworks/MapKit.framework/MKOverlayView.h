/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MKOverlay, OS_dispatch_queue;
@class NSObject, MKMapView;

@interface MKOverlayView : UIView {

	id<MKOverlay> _overlay;
	SCD_Struct_MK1 _boundingMapRect;
	id _renderer;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	MKMapView* _mapView;

}

@property (nonatomic,readonly) id<MKOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
-(id)initWithOverlay:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 ;
-(SCD_Struct_MK1)_boundingMapRect;
-(id)_renderer;
-(CGSize)_originMapPoint;
-(id)_mk_overlayView;
-(id)_mk_overlayLayer;
-(void)_setMapView:(id)arg1 ;
-(CGPoint)pointForMapPoint:(CGSize)arg1 ;
-(CGSize)mapPointForPoint:(CGPoint)arg1 ;
-(CGRect)rectForMapRect:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)mapRectForRect:(CGRect)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK1)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 ;
-(void)set_boundingMapRect:(SCD_Struct_MK1)arg1 ;
-(void)set_renderer:(id)arg1 ;
-(BOOL)_mayExtendOutsideBounds;
-(BOOL)overlay:(id)arg1 canDrawKey:(const SCD_Struct_MK16*)arg2 ;
-(void)overlay:(id)arg1 drawKey:(const SCD_Struct_MK16*)arg2 inContext:(CGContextRef)arg3 ;
-(id)_mapView;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)setNeedsDisplay;
-(BOOL)_canDrawContent;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id<MKOverlay>)overlay;
@end

