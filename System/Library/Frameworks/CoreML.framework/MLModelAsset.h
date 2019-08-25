/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLModeling;
#import <CoreML/CoreML-Structs.h>
@class NSURL, NSObject, MLModelConfiguration;

@interface MLModelAsset : NSObject {

	BOOL _ranLoad;
	NSURL* _compiledURL;
	NSObject*<MLModeling> _asset;
	MLModelConfiguration* _loadConfiguration;

}

@property (assign) BOOL ranLoad;                                                      //@synthesize ranLoad=_ranLoad - In the implementation block
@property (retain) NSObject*<MLModeling> asset;                                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * loadConfiguration;              //@synthesize loadConfiguration=_loadConfiguration - In the implementation block
@property (readonly) NSURL * compiledURL;                                             //@synthesize compiledURL=_compiledURL - In the implementation block
@property (nonatomic,readonly) id<MLModeling> model; 
@property (nonatomic,readonly) id<MLRegressor> regressor; 
@property (nonatomic,readonly) id<MLClassifier> classifier; 
+(id)modelAssetWithURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)modelAssetWithSpecificationURL:(id)arg1 error:(id*)arg2 ;
+(id)modelAssetWithURL:(id)arg1 error:(id*)arg2 ;
+(id)modelAssetWithSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
-(BOOL)load:(id*)arg1 ;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)modelWithError:(id*)arg1 ;
-(id)classifierWithError:(id*)arg1 ;
-(id)regressorWithError:(id*)arg1 ;
-(id<MLClassifier>)classifier;
-(id<MLRegressor>)regressor;
-(NSURL *)compiledURL;
-(BOOL)ranLoad;
-(void)setRanLoad:(BOOL)arg1 ;
-(MLModelConfiguration *)loadConfiguration;
-(id)description;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id<MLModeling>)model;
-(void)setAsset:(NSObject*<MLModeling>)arg1 ;
-(NSObject*<MLModeling>)asset;
@end

