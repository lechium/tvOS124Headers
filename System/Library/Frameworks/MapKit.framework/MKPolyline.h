/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString;

@interface MKPolyline : MKMultiPoint <MKOverlay>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK1 boundingMapRect; 
+(id)polylineWithPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 ;
+(id)polylineWithCoordinates:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
-(CLLocationCoordinate2D)coordinate;
-(BOOL)intersectsMapRect:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)boundingMapRect;
-(void)_calculateBounds;
@end

