/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface HFPowerStateTargetValueTuple : NSObject {

	NSString* _characteristicType;
	NSNumber* _onTargetValue;
	NSNumber* _offTargetValue;

}

@property (nonatomic,readonly) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,readonly) NSNumber * onTargetValue;                   //@synthesize onTargetValue=_onTargetValue - In the implementation block
@property (nonatomic,readonly) NSNumber * offTargetValue;                  //@synthesize offTargetValue=_offTargetValue - In the implementation block
+(id)fanStateTargetValueTuple;
-(id)initWithCharacteristicType:(id)arg1 onTargetValue:(id)arg2 offTargetValue:(id)arg3 ;
-(NSNumber *)onTargetValue;
-(NSNumber *)offTargetValue;
-(id)targetValueForPrimaryState:(long long)arg1 ;
-(long long)primaryStateForTargetValue:(id)arg1 ;
-(NSString *)characteristicType;
-(id)init;
@end

