/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ARPRoutePrediction : NSObject {

	NSString* _outputDeviceID;
	double _confidence;

}

@property (nonatomic,copy,readonly) NSString * outputDeviceID;              //@synthesize outputDeviceID=_outputDeviceID - In the implementation block
@property (nonatomic,readonly) double confidence;                           //@synthesize confidence=_confidence - In the implementation block
-(NSString *)outputDeviceID;
-(id)initWithOutputDeviceID:(id)arg1 confidence:(double)arg2 ;
-(id)description;
-(double)confidence;
@end

