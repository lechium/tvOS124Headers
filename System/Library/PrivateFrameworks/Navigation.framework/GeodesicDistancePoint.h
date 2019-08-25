/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface GeodesicDistancePoint : NSObject {

	NSDate* _date;
	double _geodesicDistance;

}

@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double geodesicDistance;                    //@synthesize geodesicDistance=_geodesicDistance - In the implementation block
@property (readonly) double timeIntervalSinceReferenceDate; 
-(double)geodesicDistance;
-(id)initWithDate:(id)arg1 geodesicDistance:(double)arg2 ;
-(void)setGeodesicDistance:(double)arg1 ;
-(id)description;
-(NSDate *)date;
-(double)timeIntervalSinceReferenceDate;
-(void)setDate:(NSDate *)arg1 ;
@end
