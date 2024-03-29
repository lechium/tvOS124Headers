/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class VCPSceneChangeSegment, NSMutableArray;

@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer {

	float _sceneDeltaBuffer[10];
	FrameBuffer* _frameBuffer;
	VCPSceneChangeSegment* _activeSegment;
	NSMutableArray* _sceneSegments;
	BOOL _verbose;
	BOOL _firstFrame;
	SCD_Struct_VC9 _frameTimeRange;
	BOOL _currentStatus;
	BOOL _isSegmentPoint;

}
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(void)ComputeSceneDelta:(Frame*)arg1 ;
-(BOOL)decideLensSwitchPoint:(Frame*)arg1 ;
-(void)PrintSegments;
-(int)finalizeAnalysisPass:(SCD_Struct_VC9)arg1 ;
-(BOOL)isSegmentPoint;
-(id)init;
-(id)results;
@end

