/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFTimer.h>

@interface HMFExponentialBackoffTimer : HMFTimer {

	BOOL _increasing;
	double _minimumTimeInterval;
	double _maximumTimeInterval;
	long long _exponentialFactor;

}

@property (getter=isIncreasing,nonatomic,readonly) BOOL increasing;              //@synthesize increasing=_increasing - In the implementation block
@property (nonatomic,readonly) double minimumTimeInterval;                       //@synthesize minimumTimeInterval=_minimumTimeInterval - In the implementation block
@property (nonatomic,readonly) double maximumTimeInterval;                       //@synthesize maximumTimeInterval=_maximumTimeInterval - In the implementation block
@property (nonatomic,readonly) long long exponentialFactor;                      //@synthesize exponentialFactor=_exponentialFactor - In the implementation block
-(void)__fire;
-(BOOL)isIncreasing;
-(long long)exponentialFactor;
-(double)minimumTimeInterval;
-(id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
-(id)initWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2 exponentialFactor:(long long)arg3 options:(unsigned long long)arg4 ;
-(double)maximumTimeInterval;
-(void)reset;
-(double)timeInterval;
@end

