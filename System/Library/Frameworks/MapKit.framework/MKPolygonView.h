/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathView.h>

@class MKPolygon;

@interface MKPolygonView : MKOverlayPathView

@property (nonatomic,readonly) MKPolygon * polygon; 
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithPolygon:(id)arg1 ;
-(MKPolygon *)polygon;
-(void)createPath;
@end

