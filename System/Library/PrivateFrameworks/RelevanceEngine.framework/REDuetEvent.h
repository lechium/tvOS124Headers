/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval, REFeatureValue;

@interface REDuetEvent : NSObject {

	NSDateInterval* _interval;
	REFeatureValue* _value;
	double _confidence;

}

@property (nonatomic,readonly) NSDateInterval * interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) REFeatureValue * value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
+(id)eventWithInterval:(id)arg1 value:(id)arg2 confidence:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(REFeatureValue *)value;
-(NSDateInterval *)interval;
-(double)confidence;
@end

