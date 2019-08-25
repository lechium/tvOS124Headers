/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ETModelDef, ETOptimizerDef, ETImageDescriptorExtractor;

@interface ETTask : NSObject {

	BOOL _dumpData;
	ETModelDef* _model;
	ETOptimizerDef* _optimizer;
	ETImageDescriptorExtractor* _extractor;

}

@property (assign,nonatomic) ETModelDef * model;                                  //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) ETOptimizerDef * optimizer;                          //@synthesize optimizer=_optimizer - In the implementation block
@property (assign,nonatomic) ETImageDescriptorExtractor * extractor;              //@synthesize extractor=_extractor - In the implementation block
@property (assign,nonatomic) BOOL dumpData;                                       //@synthesize dumpData=_dumpData - In the implementation block
-(void)setModel:(ETModelDef *)arg1 ;
-(void)setDumpData:(BOOL)arg1 ;
-(void)setOptimizer:(ETOptimizerDef *)arg1 ;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 ;
-(float)fit:(id)arg1 numberOfEpochs:(int)arg2 withProgress:(/*^block*/id)arg3 ;
-(float)fit:(id)arg1 numberOfBatches:(unsigned)arg2 withProgress:(/*^block*/id)arg3 ;
-(void)saveNetwork:(id)arg1 ;
-(ETOptimizerDef *)optimizer;
-(BOOL)dumpData;
-(void)setExtractor:(ETImageDescriptorExtractor *)arg1 ;
-(ETImageDescriptorExtractor *)extractor;
-(id)evaluate:(id)arg1 ;
-(id)init;
-(ETModelDef *)model;
@end

