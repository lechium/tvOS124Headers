/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Filter;

@interface FilterActions : NSObject {

	unsigned _triggerSymptomId;
	Filter* _initialFilter;
	long long _delayValue;
	Filter* _finalFilter;

}

@property (assign,nonatomic) unsigned triggerSymptomId;              //@synthesize triggerSymptomId=_triggerSymptomId - In the implementation block
@property (nonatomic,readonly) Filter * initialFilter;               //@synthesize initialFilter=_initialFilter - In the implementation block
@property (nonatomic,readonly) long long delayValue;                 //@synthesize delayValue=_delayValue - In the implementation block
@property (nonatomic,readonly) Filter * finalFilter;                 //@synthesize finalFilter=_finalFilter - In the implementation block
+(id)initForSymptom:(unsigned)arg1 trigger:(unsigned)arg2 triggering:(id)arg3 finally:(id)arg4 after:(id)arg5 ;
-(void)initForSymptom:(unsigned)arg1 trigger:(unsigned)arg2 triggering:(id)arg3 finally:(id)arg4 after:(id)arg5 ;
-(unsigned)triggerSymptomId;
-(void)setTriggerSymptomId:(unsigned)arg1 ;
-(Filter *)initialFilter;
-(long long)delayValue;
-(Filter *)finalFilter;
-(id)description;
@end

