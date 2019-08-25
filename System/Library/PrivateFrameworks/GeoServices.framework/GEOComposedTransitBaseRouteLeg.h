/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteLeg.h>

@interface GEOComposedTransitBaseRouteLeg : GEOComposedRouteLeg {

	NSRange _transitStepRange;

}
-(id)_accessPointsForTransitStep:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(NSRange)arg3 transitStepRange:(NSRange)arg4 pointRange:(NSRange)arg5 ;
-(id)startingTransitStop;
-(id)endingTransitStop;
-(id)enterTransitAccessPoints;
-(id)exitTransitAccessPoints;
-(NSRange)transitStepRange;
@end

