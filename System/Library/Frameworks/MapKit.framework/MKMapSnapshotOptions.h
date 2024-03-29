/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapCamera, NSArray;

@interface MKMapSnapshotOptions : NSObject <NSSecureCoding, NSCopying> {

	MKMapCamera* _camera;
	SCD_Struct_MK1 _mapRect;
	SCD_Struct_MK19 _region;
	unsigned long long _mapType;
	int _mode;
	BOOL _showsPointsOfInterest;
	BOOL _showsPointLabels;
	BOOL _showsBuildings;
	BOOL _showsNightMode;
	BOOL _rendersInBackground;
	BOOL _useSnapshotService;
	CGSize _size;
	double _scale;
	BOOL _usingRect;
	BOOL _showsVenues;
	unsigned char _searchResultsType;
	NSArray* _annotationViews;
	NSArray* _customFeatureAnnotations;

}

@property (nonatomic,readonly) BOOL usingRect;                                                                                                    //@synthesize usingRect=_usingRect - In the implementation block
@property (assign,setter=_setShowsNightMode:,getter=_showsNightMode,nonatomic) BOOL showsNightMode;                                               //@synthesize showsNightMode=_showsNightMode - In the implementation block
@property (assign,setter=_setShowsVenues:,getter=_showsVenues,nonatomic) BOOL showsVenues;                                                        //@synthesize showsVenues=_showsVenues - In the implementation block
@property (assign,setter=_setShowsPointLabels:,getter=_showsPointLabels,nonatomic) BOOL showsPointLabels;                                         //@synthesize showsPointLabels=_showsPointLabels - In the implementation block
@property (assign,setter=_setRendersInBackground:,getter=_rendersInBackground,nonatomic) BOOL rendersInBackground;                                //@synthesize rendersInBackground=_rendersInBackground - In the implementation block
@property (assign,setter=_setUseSnapshotService:,getter=_useSnapshotService,nonatomic) BOOL useSnapshotService;                                   //@synthesize useSnapshotService=_useSnapshotService - In the implementation block
@property (nonatomic,copy) NSArray * annotationViews;                                                                                             //@synthesize annotationViews=_annotationViews - In the implementation block
@property (assign,setter=_setSearchResultsType:,getter=_searchResultsType,nonatomic) unsigned char searchResultsType;                             //@synthesize searchResultsType=_searchResultsType - In the implementation block
@property (setter=_setCustomFeatureAnnotations:,getter=_customFeatureAnnotations,nonatomic,copy) NSArray * customFeatureAnnotations;              //@synthesize customFeatureAnnotations=_customFeatureAnnotations - In the implementation block
@property (nonatomic,copy) MKMapCamera * camera;                                                                                                  //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK1 mapRect;                                                                                              //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK5 region;                                                                                               //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                                                                                          //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) BOOL showsPointsOfInterest;                                                                                          //@synthesize showsPointsOfInterest=_showsPointsOfInterest - In the implementation block
@property (assign,nonatomic) BOOL showsBuildings;                                                                                                 //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                                                                                        //@synthesize scale=_scale - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMapRect:(SCD_Struct_MK1)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(void)setCamera:(MKMapCamera *)arg1 ;
-(unsigned long long)mapType;
-(MKMapCamera *)camera;
-(BOOL)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)showsBuildings;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(BOOL)_showsVenues;
-(void)_setShowsVenues:(BOOL)arg1 ;
-(BOOL)_showsNightMode;
-(void)_setShowsNightMode:(BOOL)arg1 ;
-(SCD_Struct_MK1)mapRect;
-(NSArray *)annotationViews;
-(BOOL)_showsPointLabels;
-(BOOL)_rendersInBackground;
-(BOOL)_useSnapshotService;
-(unsigned char)_searchResultsType;
-(id)_customFeatureAnnotations;
-(BOOL)usingRect;
-(void)_setShowsPointLabels:(BOOL)arg1 ;
-(void)_setUseSnapshotService:(BOOL)arg1 ;
-(void)_setRendersInBackground:(BOOL)arg1 ;
-(void)setAnnotationViews:(NSArray *)arg1 ;
-(void)_setSearchResultsType:(unsigned char)arg1 ;
-(void)_setCustomFeatureAnnotations:(id)arg1 ;
-(CGSize)size;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setRegion:(SCD_Struct_MK5)arg1 ;
-(SCD_Struct_MK5)region;
@end

