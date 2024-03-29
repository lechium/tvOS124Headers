/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKPredictedLocationOfInterest, NSString, NSData, CLLocation;

@interface EKStructuredLocation : EKObject <NSCopying> {

	BOOL _imprecise;
	EKPredictedLocationOfInterest* _predictedLOI;

}

@property (nonatomic,copy) NSString * addressBookEntityID; 
@property (nonatomic,readonly) BOOL isStructured; 
@property (nonatomic,retain) NSString * routing; 
@property (nonatomic,copy) NSData * mapKitHandle; 
@property (nonatomic,readonly) BOOL hasKnownSpatialData; 
@property (nonatomic,retain) NSString * address; 
@property (assign,getter=isImprecise,nonatomic) BOOL imprecise;                         //@synthesize imprecise=_imprecise - In the implementation block
@property (getter=isPrediction,nonatomic,readonly) BOOL prediction; 
@property (nonatomic,retain) EKPredictedLocationOfInterest * predictedLOI;              //@synthesize predictedLOI=_predictedLOI - In the implementation block
@property (nonatomic,copy) NSString * derivedFrom; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) CLLocation * geoLocation; 
@property (assign,nonatomic) double radius; 
+(Class)frozenClass;
+(id)locationWithTitle:(id)arg1 ;
+(id)_stringByStrippingControlCharactersFromString:(id)arg1 ;
+(id)locationWithMapItem:(id)arg1 ;
-(void)setRouting:(NSString *)arg1 ;
-(NSString *)routing;
-(id)referenceFrame;
-(void)setReferenceFrame:(id)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)address;
-(void)setLatitude:(id)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(id)latitude;
-(id)longitude;
-(id)semanticIdentifier;
-(id)calLocation;
-(BOOL)isStructured;
-(NSString *)addressBookEntityID;
-(void)setAddressBookEntityID:(NSString *)arg1 ;
-(NSString *)derivedFrom;
-(void)setDerivedFrom:(NSString *)arg1 ;
-(void)setPredictedLOI:(EKPredictedLocationOfInterest *)arg1 ;
-(BOOL)hasKnownSpatialData;
-(void)updateFromMapItem:(id)arg1 ;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(void)_clearGeoLocationCache;
-(id)radiusRaw;
-(void)setRadiusRaw:(id)arg1 ;
-(EKPredictedLocationOfInterest *)predictedLOI;
-(BOOL)isImprecise;
-(void)setImprecise:(BOOL)arg1 ;
-(id)geoURLString;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(BOOL)isPrediction;
-(CLLocation *)geoLocation;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)radius;
-(id)cacheKey;
-(void)setRadius:(double)arg1 ;
@end

