/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSTDEVValue : NSObject {

	double _observationInterval;
	double _tdev;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double tdev;                             //@synthesize tdev=_tdev - In the implementation block
-(id)initWithObservationInterval:(double)arg1 andTDEV:(double)arg2 ;
-(double)tdev;
-(double)observationInterval;
-(id)description;
@end

