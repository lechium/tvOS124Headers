/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <CoreLocation/CLPlacemark.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface MKPlacemark : CLPlacemark <MKAnnotation>

@property (nonatomic,readonly) NSString * countryCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(CLLocationCoordinate2D)coordinate;
-(NSString *)countryCode;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)thoroughfare;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 addressDictionary:(id)arg2 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 postalAddress:(id)arg2 ;
-(id)mkPostalAddressDictionary;
-(NSString *)title;
@end

