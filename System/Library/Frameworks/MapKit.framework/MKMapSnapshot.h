/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class VKMapSnapshot, UIImage;

@interface MKMapSnapshot : NSObject {

	VKMapSnapshot* _snapshot;
	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
-(id)snapshotWithAnnotationView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(CLLocationCoordinate2D)arg2 ;
-(CGPoint)pointForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_prepareForRenderWithAnnotationViews:(id)arg1 ;
-(id)_initWithSnapshot:(id)arg1 desiredScale:(double)arg2 ;
-(CLLocationCoordinate2D)_coordinateForPoint:(CGPoint)arg1 ;
-(BOOL)_hasNoDataPlaceholders;
-(UIImage *)image;
@end

