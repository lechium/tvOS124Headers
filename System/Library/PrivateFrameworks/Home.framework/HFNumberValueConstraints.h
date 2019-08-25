/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSNumber, HFNumberRange, NSString;

@interface HFNumberValueConstraints : NSObject <NAIdentifiable> {

	NSNumber* _minValue;
	NSNumber* _maxValue;
	NSNumber* _stepValue;

}

@property (nonatomic,copy,readonly) NSNumber * minValue;                     //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * maxValue;                     //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,copy,readonly) HFNumberRange * validRange; 
@property (nonatomic,copy,readonly) NSNumber * stepValue;                    //@synthesize stepValue=_stepValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(NSNumber *)maxValue;
-(NSNumber *)minValue;
-(id)normalizedValueForValue:(id)arg1 ;
-(id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3 ;
-(id)roundedValueForValue:(id)arg1 ;
-(id)boundedValueForValue:(id)arg1 ;
-(HFNumberRange *)validRange;
-(id)percentageConstraintsWithinRange:(id)arg1 ;
-(id)_normalizeRangeValue:(id)arg1 withinRange:(id)arg2 ;
-(id)_normalizeStepValue:(id)arg1 withinRange:(id)arg2 ;
-(id)initWithValidRange:(id)arg1 stepValue:(id)arg2 ;
-(id)normalizedRangeForRange:(id)arg1 ;
-(id)percentageConstraints;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)stepValue;
@end

