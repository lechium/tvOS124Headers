/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSArray, NSMutableArray;

@interface VCPMovieHighlightAnalyzer : NSObject {

	NSArray* _junkResults;
	NSArray* _qualityResults;
	NSArray* _faceResults;
	NSArray* _actionResults;
	NSArray* _voiceResults;
	NSArray* _featureResults;
	NSArray* _keyFrameResults;
	NSMutableArray* _internalResults;
	NSMutableArray* _internalConstraintResults;
	BOOL _isLivePhoto;
	BOOL _verbose;

}
-(int)generateInitialSegments;
-(int)computeHighlightScoreWithConstraint;
-(void)mergeShortSegments;
-(void)SetKeyFramesForSegments:(id)arg1 ;
-(id)pickKeyFramesInRange:(SCD_Struct_VC9)arg1 ;
-(int)pickHighlightsFrom:(id)arg1 ;
-(void)computeHighlightScoreOfSegment:(id)arg1 ;
-(int)evaluateSegment:(id)arg1 ;
-(BOOL)addSegment:(id)arg1 ;
-(void)searchFeatureVectorOfSegment:(id)arg1 ;
-(float)computeExpressionScoreInTimerange:(SCD_Struct_VC9)arg1 ;
-(float)computeActionScoreInTimerange:(SCD_Struct_VC9)arg1 ;
-(float)computeVoiceScoreInTimeRange:(SCD_Struct_VC9)arg1 ;
-(id)initWithAnalysisType:(unsigned long long)arg1 isLivePhoto:(BOOL)arg2 ;
-(int)prepareRequiredQualityResult:(id)arg1 junkDetectionResult:(id)arg2 descriptorResult:(id)arg3 faceResult:(id)arg4 actionResult:(id)arg5 voiceResult:(id)arg6 keyFrameResult:(id)arg7 ;
-(int)generateHighlights;
-(id)movieSummary;
-(void)mergeSimilarSegments;
-(id)results;
@end
