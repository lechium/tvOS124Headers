/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapAnnotationRenderer.h>

@protocol PXPlacesMapPipelineComponentProvider;
@class NSString;

@interface PXPlacesMapPinRenderer : NSObject <PXPlacesMapAnnotationRenderer> {

	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) UIEdgeInsets minimumEdgeInsets; 
-(long long)annotationType;
-(UIEdgeInsets)minimumEdgeInsets;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(BOOL)supportsMoveAnimations;
-(id)viewForAnnotation:(id)arg1 andMapView:(id)arg2 ;
-(id)annotationForGeotaggables:(id)arg1 initialCoordinate:(CLLocationCoordinate2D)arg2 ;
-(void)reset;
@end

