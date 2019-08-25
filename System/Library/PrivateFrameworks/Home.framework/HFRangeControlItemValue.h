/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, HFNumberRange;

@interface HFRangeControlItemValue : NSObject {

	unsigned long long _mode;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _targetValue;

}

@property (assign,nonatomic) unsigned long long mode;                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSNumber * minimumValue;                      //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,copy) NSNumber * maximumValue;                      //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy) NSNumber * targetValue;                       //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) HFNumberRange * numberRange; 
+(id)thresholdValueWithMinimumValue:(id)arg1 maximumValue:(id)arg2 ;
+(id)targetValueWithValue:(id)arg1 ;
-(HFNumberRange *)numberRange;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)targetValue;
-(void)setTargetValue:(NSNumber *)arg1 ;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(unsigned long long)mode;
-(void)setMode:(unsigned long long)arg1 ;
@end
