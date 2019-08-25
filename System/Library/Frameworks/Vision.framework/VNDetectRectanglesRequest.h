/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSString, NSArray;

@interface VNDetectRectanglesRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign,nonatomic) unsigned long long requiredVersion; 
@property (assign,nonatomic) float minimumAspectRatio; 
@property (assign,nonatomic) float maximumAspectRatio; 
@property (assign,nonatomic) float quadratureTolerance; 
@property (assign,nonatomic) float minimumSize; 
@property (assign,nonatomic) float minimumConfidence; 
@property (assign,nonatomic) unsigned long long maximumObservations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * supportedImageSizeSet; 
+(Class)configurationClass;
-(unsigned long long)requiredVersion;
-(void)setRequiredVersion:(unsigned long long)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(NSArray *)supportedImageSizeSet;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(/*^block*/id)resultsSortingComparator;
-(long long)dependencyProcessingOrdinality;
-(void)setSortedResults:(id)arg1 ;
-(void)setMinimumAspectRatio:(float)arg1 ;
-(void)setMaximumAspectRatio:(float)arg1 ;
-(void)setQuadratureTolerance:(float)arg1 ;
-(void)setMinimumConfidence:(float)arg1 ;
-(void)setMaximumObservations:(unsigned long long)arg1 ;
-(float)minimumAspectRatio;
-(float)maximumAspectRatio;
-(float)quadratureTolerance;
-(float)minimumConfidence;
-(unsigned long long)maximumObservations;
-(id)_detectorOptions;
-(float)minimumSize;
-(void)setMinimumSize:(float)arg1 ;
@end

