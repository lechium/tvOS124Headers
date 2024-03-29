/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSArray;

@interface MLAppleWordTaggerParameters : NSObject {

	unsigned long long _revision;
	NSString* _language;
	NSString* _inputFeatureName;
	NSString* _tokensOutputFeatureName;
	NSString* _tokenTagsOutputFeatureName;
	NSString* _tokenLocationsOutputFeatureName;
	NSString* _tokenLengthsOutputFeatureName;
	NSData* _modelParameterData;
	NSArray* _tagNames;

}

@property (assign) unsigned long long revision;                             //@synthesize revision=_revision - In the implementation block
@property (retain) NSString * language;                                     //@synthesize language=_language - In the implementation block
@property (retain) NSString * inputFeatureName;                             //@synthesize inputFeatureName=_inputFeatureName - In the implementation block
@property (retain) NSString * tokensOutputFeatureName;                      //@synthesize tokensOutputFeatureName=_tokensOutputFeatureName - In the implementation block
@property (retain) NSString * tokenTagsOutputFeatureName;                   //@synthesize tokenTagsOutputFeatureName=_tokenTagsOutputFeatureName - In the implementation block
@property (retain) NSString * tokenLocationsOutputFeatureName;              //@synthesize tokenLocationsOutputFeatureName=_tokenLocationsOutputFeatureName - In the implementation block
@property (retain) NSString * tokenLengthsOutputFeatureName;                //@synthesize tokenLengthsOutputFeatureName=_tokenLengthsOutputFeatureName - In the implementation block
@property (retain) NSData * modelParameterData;                             //@synthesize modelParameterData=_modelParameterData - In the implementation block
@property (retain) NSArray * tagNames;                                      //@synthesize tagNames=_tagNames - In the implementation block
-(NSString *)inputFeatureName;
-(void)setInputFeatureName:(NSString *)arg1 ;
-(NSData *)modelParameterData;
-(void)setModelParameterData:(NSData *)arg1 ;
-(id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 tokensFeatureName:(id)arg4 tokenTagsFeatureName:(id)arg5 tokenLocationsFeatureName:(id)arg6 tokenLengthsFeatureName:(id)arg7 modelData:(id)arg8 tagNames:(id)arg9 error:(id*)arg10 ;
-(NSString *)tokensOutputFeatureName;
-(void)setTokensOutputFeatureName:(NSString *)arg1 ;
-(NSString *)tokenTagsOutputFeatureName;
-(void)setTokenTagsOutputFeatureName:(NSString *)arg1 ;
-(NSString *)tokenLocationsOutputFeatureName;
-(void)setTokenLocationsOutputFeatureName:(NSString *)arg1 ;
-(NSString *)tokenLengthsOutputFeatureName;
-(void)setTokenLengthsOutputFeatureName:(NSString *)arg1 ;
-(NSArray *)tagNames;
-(void)setTagNames:(NSArray *)arg1 ;
-(unsigned long long)revision;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setRevision:(unsigned long long)arg1 ;
@end

