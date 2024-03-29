/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLBatchExtractionStrategyStorage;
@class NSArray, NSEnumerator, CPLBatchExtractionStep, NSString;

@interface CPLBatchExtractionStrategy : NSObject {

	NSArray* _steps;
	NSEnumerator* _stepEnumerator;
	CPLBatchExtractionStep* _currentStep;
	BOOL _loggedForThisStep;
	BOOL _finished;
	NSString* _strategyName;
	id<CPLBatchExtractionStrategyStorage> _storage;
	NSString* _scopeIdentifier;
	unsigned long long _maximumRecordCountPerBatch;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * strategyName;                                      //@synthesize strategyName=_strategyName - In the implementation block
@property (nonatomic,__weak,readonly) id<CPLBatchExtractionStrategyStorage> storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSString * scopeIdentifier;                                        //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long maximumRecordCountPerBatch;                       //@synthesize maximumRecordCountPerBatch=_maximumRecordCountPerBatch - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentStepDescription; 
+(id)overQuotaStrategyWithStorage:(id)arg1 coveringScopeIdentifier:(id)arg2 ;
+(void)setMaximumRecordCountPerBatch:(unsigned long long)arg1 ;
+(id)usualStrategyWithStorage:(id)arg1 coveringScopeIdentifier:(id)arg2 ;
-(id<CPLBatchExtractionStrategyStorage>)storage;
-(void)resetConditionallyFromNewIncomingChange:(id)arg1 ;
-(NSString *)currentStepDescription;
-(id)initWithName:(id)arg1 storage:(id)arg2 scopeIdentifier:(id)arg3 steps:(id)arg4 ;
-(BOOL)_hasChanges;
-(void)_computeNextStep;
-(void)setMaximumRecordCountPerBatch:(unsigned long long)arg1 ;
-(BOOL)extractBatch:(out id*)arg1 maximumResourceSize:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSString *)strategyName;
-(unsigned long long)maximumRecordCountPerBatch;
-(NSString *)scopeIdentifier;
-(NSString *)name;
-(void)reset;
@end

