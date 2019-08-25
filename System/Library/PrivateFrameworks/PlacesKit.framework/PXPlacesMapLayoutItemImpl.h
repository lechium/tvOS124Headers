/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapLayoutItem.h>

@class NSOrderedSet, NSMutableOrderedSet, NSString;

@interface PXPlacesMapLayoutItemImpl : NSObject <PXPlacesMapLayoutItem> {

	NSMutableOrderedSet* _layoutGeotaggables;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,retain) NSMutableOrderedSet * layoutGeotaggables;              //@synthesize layoutGeotaggables=_layoutGeotaggables - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) CLLocationCoordinate2D coordinate;                               //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * geotaggables; 
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(NSOrderedSet *)geotaggables;
-(BOOL)isEqualToLayoutItem:(id)arg1 ;
-(void)addGeotaggables:(id)arg1 ;
-(void)addGeotaggable:(id)arg1 ;
-(void)setLayoutGeotaggables:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)layoutGeotaggables;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end
