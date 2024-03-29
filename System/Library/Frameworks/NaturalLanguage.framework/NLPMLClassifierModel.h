/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NLModel.h>
#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription;

@interface NLPMLClassifierModel : NLModel <MLCustomModel> {

	MLModelDescription* _modelDescription;

}

@property (copy,readonly) MLModelDescription * modelDescription; 
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLModelDescription *)modelDescription;
@end

