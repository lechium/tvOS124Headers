/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/_REMLWeightedModel.h>

@class REMLModel;

@interface _REMLSingleWeightedModel : _REMLWeightedModel {

	REMLModel* _model;

}
-(id)initWithFeatureSet:(id)arg1 ;
-(id)predictWithFeatures:(id)arg1 ;
-(BOOL)saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2 ;
-(void)enumerateModels:(/*^block*/id)arg1 ;
@end

