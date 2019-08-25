/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval;

@interface _REPeriodOfDay : NSObject {

	NSDateInterval* _interval;
	unsigned long long _periodOfDay;

}

@property (nonatomic,readonly) NSDateInterval * interval;                   //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) unsigned long long periodOfDay;              //@synthesize periodOfDay=_periodOfDay - In the implementation block
-(id)initWithInterval:(id)arg1 periodOfDay:(unsigned long long)arg2 ;
-(unsigned long long)periodOfDay;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDateInterval *)interval;
@end
