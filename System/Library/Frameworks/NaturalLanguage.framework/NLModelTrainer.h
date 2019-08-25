/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NLModelTrainerDelegate;
@class NLModelConfiguration, NLDataSet, NSDictionary, NLModel;

@interface NLModelTrainer : NSObject {

	NLModelConfiguration* _configuration;
	NLDataSet* _dataSet;
	NSDictionary* _options;
	NLModel* _model;
	id<NLModelTrainerDelegate> _delegate;
	BOOL _delegateRespondsToLogMessage;
	BOOL _delegateRespondsToShouldStop;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (readonly) NLDataSet * dataSet; 
@property (copy,readonly) NSDictionary * options; 
@property (readonly) id<NLModelTrainerDelegate> delegate; 
@property (copy,readonly) NLModel * trainedModel; 
@property (copy,readonly) NSDictionary * testResults; 
+(id)modelTrainerWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(void)logMessage:(id)arg1 ;
-(NLDataSet *)dataSet;
-(void)setModel:(id)arg1 ;
-(BOOL)shouldStop;
-(void)trainModel;
-(NLModel *)trainedModel;
-(id)initWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(Class)modelImplClass;
-(NSDictionary *)testResults;
-(void)trainer:(id)arg1 logMessage:(id)arg2 ;
-(BOOL)trainerShouldStop:(id)arg1 ;
-(id<NLModelTrainerDelegate>)delegate;
-(NLModelConfiguration *)configuration;
-(NSDictionary *)options;
-(id)model;
@end

