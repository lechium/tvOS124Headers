/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLengthFormatter.h>

@class NSLocale;

@interface WeatherPrecipitationFormatter : NSLengthFormatter {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)convenienceFormatter;
-(id)stringFromDistance:(double)arg1 isDataMetric:(BOOL)arg2 ;
-(long long)precipitationUnit;
-(double)convertDistanceInMetric:(double)arg1 to:(long long)arg2 ;
-(double)convertDistanceInImperial:(double)arg1 to:(long long)arg2 ;
-(id)stringFromCentimeters:(double)arg1 ;
-(id)stringFromInches:(double)arg1 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
@end

