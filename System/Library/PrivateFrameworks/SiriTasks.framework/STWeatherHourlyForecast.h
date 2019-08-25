/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STWeatherHourlyForecast : STSiriModelObject {

	long long _timeIndex;
	long long _conditionCode;
	NSNumber* _temperature;
	NSNumber* _chanceOfPrecipitation;

}
+(BOOL)supportsSecureCoding;
-(id)temperature;
-(long long)conditionCode;
-(id)chanceOfPrecipitation;
-(long long)timeIndex;
-(id)_initWithConditionCodeIndex:(long long)arg1 timeIndex:(long long)arg2 temperature:(id)arg3 chanceOfPrecipitation:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

