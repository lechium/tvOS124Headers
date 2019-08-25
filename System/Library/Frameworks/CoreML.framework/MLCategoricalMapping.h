/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSDictionary, MLFeatureValue, NSString;

@interface MLCategoricalMapping : MLModel <MLModelSpecificationLoader> {

	NSDictionary* _mapping;
	MLFeatureValue* _valueOnUnknown;

}

@property (nonatomic,readonly) NSDictionary * mapping;                       //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,readonly) MLFeatureValue * valueOnUnknown;              //@synthesize valueOnUnknown=_valueOnUnknown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)mapping;
-(id)initWithMapping:(id)arg1 valueOnUnknown:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8 ;
-(id)mapFeature:(id)arg1 error:(id*)arg2 ;
-(MLFeatureValue *)valueOnUnknown;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

