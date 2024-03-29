/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSArray;

@interface MLAppleTextClassifierParameters : NSObject {

	unsigned long long _revision;
	NSString* _language;
	NSString* _inputFeatureName;
	NSString* _outputFeatureName;
	NSData* _modelParameterData;
	NSArray* _labelNames;

}

@property (assign) unsigned long long revision;               //@synthesize revision=_revision - In the implementation block
@property (retain) NSString * language;                       //@synthesize language=_language - In the implementation block
@property (retain) NSString * inputFeatureName;               //@synthesize inputFeatureName=_inputFeatureName - In the implementation block
@property (retain) NSString * outputFeatureName;              //@synthesize outputFeatureName=_outputFeatureName - In the implementation block
@property (retain) NSData * modelParameterData;               //@synthesize modelParameterData=_modelParameterData - In the implementation block
@property (retain) NSArray * labelNames;                      //@synthesize labelNames=_labelNames - In the implementation block
-(void)setLabelNames:(NSArray *)arg1 ;
-(id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 labelNames:(id)arg6 error:(id*)arg7 ;
-(NSString *)inputFeatureName;
-(void)setInputFeatureName:(NSString *)arg1 ;
-(NSString *)outputFeatureName;
-(void)setOutputFeatureName:(NSString *)arg1 ;
-(NSData *)modelParameterData;
-(void)setModelParameterData:(NSData *)arg1 ;
-(NSArray *)labelNames;
-(unsigned long long)revision;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setRevision:(unsigned long long)arg1 ;
@end

