/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLRegressor.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLRegressor : MLModel <MLRegressor>

@property (nonatomic,readonly) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(id)predictionFromFeatures:(id)arg1 regressor:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)regressorResultFromOutputFeatures:(id)arg1 error:(id*)arg2 ;
-(id)initDescriptionOnlyWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initWithInterface:(id)arg1 metadata:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

