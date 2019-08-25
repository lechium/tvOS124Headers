/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/STSiriModelObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface STAlarm : STSiriModelObject <NSCopying> {

	BOOL _enabled;
	long long _daysOfWeek;
	long long _hourOfDay;
	long long _minuteOfHour;
	NSString* _label;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long daysOfWeek;                       //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (assign,nonatomic) long long hourOfDay;                        //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) long long minuteOfHour;                     //@synthesize minuteOfHour=_minuteOfHour - In the implementation block
@property (nonatomic,copy) NSString * label;                             //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)minuteOfHour;
-(void)setHourOfDay:(long long)arg1 ;
-(long long)hourOfDay;
-(void)setMinuteOfHour:(long long)arg1 ;
-(void)setDaysOfWeek:(long long)arg1 ;
-(long long)daysOfWeek;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

