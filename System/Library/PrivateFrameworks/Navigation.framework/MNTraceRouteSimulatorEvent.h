/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocation;

@interface MNTraceRouteSimulatorEvent : NSObject {

	double _timestamp;
	GEOLocation* _location;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) GEOLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) id completion;                       //@synthesize completion=_completion - In the implementation block
-(id)initWithLocation:(id)arg1 ;
-(id)initWithTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)description;
-(id)completion;
-(double)timestamp;
-(GEOLocation *)location;
@end

