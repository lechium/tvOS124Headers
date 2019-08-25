/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAbstractRangeStatusItem.h>

@interface HFHumidityStatusItem : HFAbstractRangeStatusItem
+(id)controllableServiceTypes;
+(id)sensorServiceTypes;
+(id)currentValueCharacteristicType;
+(id)targetValueCharacteristicType;
+(id)minimumTargetValueCharacteristicType;
+(id)maximumTargetValueCharacteristicType;
+(id)currentModeCharacteristicTypes;
+(id)targetModeCharacteristicTypes;
+(unsigned long long)abstractCurrentModeInResponse:(id)arg1 ;
+(unsigned long long)abstractTargetModeInResponse:(id)arg1 ;
+(BOOL)isPercentRange;
+(/*^block*/id)displayValueComparator;
+(id)localizationKeyPrefix;
@end
