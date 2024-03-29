/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKLabelMarkerView.h>
#import <libobjc.A.dylib/_MKBalloonCalloutViewConfiguring.h>

@class UIColor, UIImage, UIView, NSString;

@interface _MKBalloonLabelMarkerView : _MKLabelMarkerView <_MKBalloonCalloutViewConfiguring> {

	UIView* _anchorDotView;
	BOOL _needsToResolveBalloonAttributes;
	long long _balloonCalloutStyle;
	BOOL _balloonCalloutShouldOriginateFromSmallSize;
	UIColor* _balloonFillColor;
	UIColor* _balloonStrokeColor;
	UIImage* _balloonImage;
	UIView* _balloonContentView;
	double _smallBalloonScaleFactor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_balloonCalloutStyle,nonatomic,readonly) long long balloonCalloutStyle; 
@property (getter=_balloonTintColor,nonatomic,readonly) UIColor * balloonTintColor; 
@property (getter=_balloonStrokeColor,nonatomic,readonly) UIColor * balloonStrokeColor; 
@property (getter=_balloonImage,nonatomic,readonly) UIImage * balloonImage; 
@property (getter=_balloonContentView,nonatomic,readonly) UIView * balloonContentView; 
@property (getter=_balloonInnerStrokeColor,nonatomic,readonly) UIColor * balloonInnerStrokeColor; 
+(Class)calloutViewClass;
-(BOOL)shouldShowCallout;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(id)_balloonTintColor;
-(id)_balloonInnerStrokeColor;
-(id)_balloonStrokeColor;
-(id)_balloonImage;
-(id)_balloonContentView;
-(BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1 ;
-(long long)_balloonCalloutStyle;
-(void)_resolveBalloonAttributesIfNecessary;
-(void)_addAnchorDotViewIfNeeded;
-(void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
@end

