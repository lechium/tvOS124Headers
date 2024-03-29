/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopying;
@class CIImage, NSDictionary, NSMutableArray, AXMDiagnosticMetricToken, NSError, AXMVisionAnalysisOptions, NSNumber, AXMDiagnostics, AXMVisionResult, VNImageRequestHandler, NSArray;

@interface AXMVisionPipelineContext : NSObject <NSSecureCoding> {

	CIImage* _sourceImage;
	NSDictionary* _sourceParameters;
	BOOL _sourceProvidesOwnResults;
	CVBufferRef _nativeFormatPixelBuffer;
	NSMutableArray* _resultHandlers;
	CGColorSpaceRef _extendedSRGBColorSpace;
	CGSize _cachedSize;
	AXMDiagnosticMetricToken* _processingDiagnosticToken;
	BOOL _shouldProcessRemotely;
	BOOL _shouldCallCompletionHandlersForEngineBusyError;
	BOOL _shouldCallCompletionHandlersForEmptyResultSet;
	BOOL _evaluationExclusivelyUsesVisionFramework;
	NSError* _error;
	AXMVisionAnalysisOptions* _analysisOptions;
	NSNumber* _appliedImageOrientation;
	id<NSCopying> _cacheKey;
	unsigned long long _sequenceID;
	AXMDiagnostics* _diagnostics;
	NSMutableArray* _features;
	AXMVisionResult* _result;
	VNImageRequestHandler* _visionImageRequestHandler;

}

@property (nonatomic,retain) NSMutableArray * features;                                        //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) AXMVisionAnalysisOptions * analysisOptions;                       //@synthesize analysisOptions=_analysisOptions - In the implementation block
@property (nonatomic,retain) AXMVisionResult * result;                                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSNumber * appliedImageOrientation;                               //@synthesize appliedImageOrientation=_appliedImageOrientation - In the implementation block
@property (nonatomic,retain) AXMDiagnostics * diagnostics;                                     //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) VNImageRequestHandler * visionImageRequestHandler;                //@synthesize visionImageRequestHandler=_visionImageRequestHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessRemotely;                                       //@synthesize shouldProcessRemotely=_shouldProcessRemotely - In the implementation block
@property (nonatomic,readonly) NSArray * resultHandlers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) BOOL sourceProvidesResults; 
@property (nonatomic,readonly) BOOL visionImageRequestHandlerIsLoaded; 
@property (nonatomic,retain) id<NSCopying> cacheKey;                                           //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) BOOL shouldCallCompletionHandlersForEngineBusyError;              //@synthesize shouldCallCompletionHandlersForEngineBusyError=_shouldCallCompletionHandlersForEngineBusyError - In the implementation block
@property (assign,nonatomic) BOOL shouldCallCompletionHandlersForEmptyResultSet;               //@synthesize shouldCallCompletionHandlersForEmptyResultSet=_shouldCallCompletionHandlersForEmptyResultSet - In the implementation block
@property (assign,nonatomic) BOOL evaluationExclusivelyUsesVisionFramework;                    //@synthesize evaluationExclusivelyUsesVisionFramework=_evaluationExclusivelyUsesVisionFramework - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceID;                                    //@synthesize sequenceID=_sequenceID - In the implementation block
+(id)contextWithSourceParameters:(id)arg1 options:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setResult:(AXMVisionResult *)arg1 ;
-(void)errorOccurred:(id)arg1 ;
-(VNImageRequestHandler *)visionImageRequestHandler;
-(void)appendFeature:(id)arg1 ;
-(void)setShouldProcessRemotely:(BOOL)arg1 ;
-(BOOL)evaluationExclusivelyUsesVisionFramework;
-(AXMVisionAnalysisOptions *)analysisOptions;
-(void)produceImage:(/*^block*/id)arg1 ;
-(id)analyzeBuffer:(/*^block*/id)arg1 ;
-(void)addResultHandlers:(id)arg1 ;
-(NSArray *)resultHandlers;
-(BOOL)sourceProvidesResults;
-(void)setEvaluationExclusivelyUsesVisionFramework:(BOOL)arg1 ;
-(id)generateImageRepresentation;
-(id)generateFileNameForImageWithPrefix:(id)arg1 extension:(id)arg2 ;
-(void)didFinishProcessingContext;
-(BOOL)shouldCallCompletionHandlersForEmptyResultSet;
-(void)willBeginProcessingContext;
-(BOOL)shouldProcessRemotely;
-(BOOL)shouldCallCompletionHandlersForEngineBusyError;
-(void)addResultHandler:(/*^block*/id)arg1 ;
-(id)initWithSourceParameters:(id)arg1 options:(id)arg2 ;
-(void)setAnalysisOptions:(AXMVisionAnalysisOptions *)arg1 ;
-(void)setAppliedImageOrientation:(NSNumber *)arg1 ;
-(NSNumber *)appliedImageOrientation;
-(void)_discardSourceImageIfPossible;
-(CVBufferRef)nativeFormatPixelBufferRenderIfNeeded:(BOOL)arg1 ;
-(CGColorSpaceRef)imageColorSpace;
-(id)visionImageRequestHandlerWithOptions:(id)arg1 ;
-(BOOL)visionImageRequestHandlerIsLoaded;
-(void)setShouldCallCompletionHandlersForEngineBusyError:(BOOL)arg1 ;
-(void)setShouldCallCompletionHandlersForEmptyResultSet:(BOOL)arg1 ;
-(unsigned long long)sequenceID;
-(void)setSequenceID:(unsigned long long)arg1 ;
-(void)setVisionImageRequestHandler:(VNImageRequestHandler *)arg1 ;
-(AXMDiagnostics *)diagnostics;
-(NSMutableArray *)features;
-(void)setFeatures:(NSMutableArray *)arg1 ;
-(void)setDiagnostics:(AXMDiagnostics *)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)_commonInit;
-(AXMVisionResult *)result;
-(id<NSCopying>)cacheKey;
-(void)setCacheKey:(id<NSCopying>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

