/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NLModelConfiguration, NSDictionary;

@interface NLModelImpl : NSObject {

	unsigned long long _numberOfTrainingInstances;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (copy,readonly) NSDictionary * labelMap; 
@property (copy,readonly) NSDictionary * vocabularyMap; 
@property (copy,readonly) NSDictionary * documentFrequencyMap; 
@property (readonly) unsigned long long numberOfTrainingInstances;              //@synthesize numberOfTrainingInstances=_numberOfTrainingInstances - In the implementation block
-(id)modelData;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6 ;
-(id)initWithModelTrainer:(id)arg1 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(NSDictionary *)labelMap;
-(NSDictionary *)vocabularyMap;
-(NSDictionary *)documentFrequencyMap;
-(unsigned long long)numberOfTrainingInstances;
-(NLModelConfiguration *)configuration;
@end

