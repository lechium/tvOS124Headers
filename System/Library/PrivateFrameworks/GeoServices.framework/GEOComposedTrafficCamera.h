/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOComposedEnrouteNotice.h>

@class GEOTrafficCamera, NSString;

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice {

	GEOTrafficCamera* _trafficCamera;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned highlightDistance; 
@property (nonatomic,readonly) BOOL hasSpeedLimitText; 
@property (nonatomic,readonly) NSString * speedLimitText; 
@property (nonatomic,readonly) BOOL hasSpeedThreshold; 
@property (nonatomic,readonly) double speedThreshold; 
@property (nonatomic,readonly) BOOL hasCameraPriority; 
@property (nonatomic,readonly) unsigned cameraPriority; 
-(unsigned)highlightDistance;
-(id)titleFormatForLocation:(id)arg1 ;
-(id)detailFormatForLocation:(id)arg1 ;
-(double)speedThreshold;
-(BOOL)hasSpeedLimitText;
-(NSString *)speedLimitText;
-(BOOL)hasSpeedThreshold;
-(BOOL)hasCameraPriority;
-(unsigned)cameraPriority;
-(id)initWithEnrouteNotice:(id)arg1 trafficCamera:(id)arg2 onRoute:(id)arg3 ;
-(id)description;
-(int)type;
-(id)position;
@end

