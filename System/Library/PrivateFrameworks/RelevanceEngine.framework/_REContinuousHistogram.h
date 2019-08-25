/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REHistogram.h>

@class REFeatureValue, RESortedDictionary;

@interface _REContinuousHistogram : REHistogram {

	REFeatureValue* _binningValue;
	RESortedDictionary* _values;

}
-(unsigned long long)countForValue:(id)arg1 ;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)mean;
-(id)standardDeviation;
-(void)removeValue:(id)arg1 ;
-(id)initWithFeature:(id)arg1 binningSize:(id)arg2 ;
-(unsigned long long)countOfValuesBetweenMinValue:(id)arg1 maxValue:(id)arg2 ;
-(void)_enumerateValuesBetweenMinValue:(id)arg1 maxValue:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addValue:(id)arg1 ;
@end

