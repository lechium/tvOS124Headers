/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface GEORerouteInfo : NSObject <NSSecureCoding> {

	double _distancePenalty;
	double _throttledReroutesPenalty;
	double _penalty;
	NSDate* _time;
	double _distanceFromDestination;

}

@property (nonatomic,readonly) double penalty;                            //@synthesize penalty=_penalty - In the implementation block
@property (nonatomic,retain) NSDate * time;                               //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double distanceFromDestination;              //@synthesize distanceFromDestination=_distanceFromDestination - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)updateWithCurrentTime:(id)arg1 location:(id)arg2 isMostRecentReroute:(BOOL)arg3 destinationCoordinate:(SCD_Struct_GE3)arg4 numThrottledReroutes:(unsigned long long)arg5 ;
-(double)penalty;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(double)distanceFromDestination;
-(void)setDistanceFromDestination:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

