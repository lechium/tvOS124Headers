/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTScenarioTrigger.h>

@interface RTScenarioTriggerStayedLate : RTScenarioTrigger {

	double _secondsLate;

}

@property (nonatomic,readonly) double secondsLate;              //@synthesize secondsLate=_secondsLate - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)secondsLate;
-(id)initWithSecondsLate:(double)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

