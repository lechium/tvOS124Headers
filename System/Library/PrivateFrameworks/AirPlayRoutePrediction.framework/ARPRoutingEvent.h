/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDateInterval, NSDictionary;

@interface ARPRoutingEvent : NSObject {

	NSString* _bundleID;
	NSString* _outputDeviceID;
	NSDateInterval* _interval;
	NSDictionary* _probabilityVector;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * outputDeviceID;                //@synthesize outputDeviceID=_outputDeviceID - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * interval;                //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) NSDictionary * probabilityVector;              //@synthesize probabilityVector=_probabilityVector - In the implementation block
+(id)mostRecentRoutingEventInDateInterval:(id)arg1 knowledgeStore:(id)arg2 eventLimit:(unsigned long long)arg3 longFormVideoFilter:(/*^block*/id)arg4 ;
-(NSDictionary *)probabilityVector;
-(NSString *)outputDeviceID;
-(id)initWithBundleID:(id)arg1 outputDeviceID:(id)arg2 interval:(id)arg3 probabilityVector:(id)arg4 ;
-(id)description;
-(NSString *)bundleID;
-(NSDateInterval *)interval;
@end

