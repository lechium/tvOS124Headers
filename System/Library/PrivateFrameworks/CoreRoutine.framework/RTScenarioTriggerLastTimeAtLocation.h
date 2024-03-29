/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTScenarioTrigger.h>

@class RTLocationOfInterest, NSDate;

@interface RTScenarioTriggerLastTimeAtLocation : RTScenarioTrigger {

	RTLocationOfInterest* _locationOfInterest;
	NSDate* _lastEntryDate;
	NSDate* _lastExitDate;

}

@property (nonatomic,readonly) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (nonatomic,readonly) NSDate * lastEntryDate;                                 //@synthesize lastEntryDate=_lastEntryDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastExitDate;                                  //@synthesize lastExitDate=_lastExitDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastEntryDate;
-(NSDate *)lastExitDate;
-(RTLocationOfInterest *)locationOfInterest;
-(id)initWithLocationOfInterest:(id)arg1 lastEntryDate:(id)arg2 lastExitDate:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

