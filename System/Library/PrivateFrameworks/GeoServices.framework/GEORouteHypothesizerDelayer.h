/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEORouteHypothesizer, NSObject;

@interface GEORouteHypothesizerDelayer : NSObject {

	CFBinaryHeapRef _minHeap;
	GEORouteHypothesizer* _nextHypothesizer;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(void)checkin;
-(void)_setNextHypothesizer:(id)arg1 ;
-(void)_startValidHypothesizers;
-(void)delayStartOfHypothesizer:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

