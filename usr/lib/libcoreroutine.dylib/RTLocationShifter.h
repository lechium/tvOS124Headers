/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class GEOLocationShifter;

@interface RTLocationShifter : NSObject {

	GEOLocationShifter* _geoLocationShifter;

}
+(BOOL)isLocationShiftRequiredForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)shiftCoordinate:(CLLocationCoordinate2D)arg1 accuracy:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)shiftLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)shiftedLocation:(id)arg1 allowNetwork:(BOOL)arg2 error:(id*)arg3 ;
-(id)init;
@end

