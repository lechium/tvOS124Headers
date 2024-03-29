/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, VCPVideoActivityDescriptor;

@interface VCPFrameAnalysisStats : NSObject {

	BOOL _frameProcessedByVideoAnalyzer;
	BOOL _subMbMotionAvailable;
	BOOL _frameProcessedByFaceDetector;
	float _cameraMotionScore;
	float _subjectActionScore;
	float _interestingnessScore;
	float _obstructionScore;
	float _exposureScore;
	float _colorfulnessScore;
	NSMutableArray* _detectedFaces;
	VCPVideoActivityDescriptor* _videoActivityDescriptor;

}

@property (assign,nonatomic) BOOL frameProcessedByVideoAnalyzer;                                //@synthesize frameProcessedByVideoAnalyzer=_frameProcessedByVideoAnalyzer - In the implementation block
@property (assign,nonatomic) float cameraMotionScore;                                           //@synthesize cameraMotionScore=_cameraMotionScore - In the implementation block
@property (assign,nonatomic) float subjectActionScore;                                          //@synthesize subjectActionScore=_subjectActionScore - In the implementation block
@property (assign,nonatomic) float interestingnessScore;                                        //@synthesize interestingnessScore=_interestingnessScore - In the implementation block
@property (assign,nonatomic) float obstructionScore;                                            //@synthesize obstructionScore=_obstructionScore - In the implementation block
@property (assign,nonatomic) float exposureScore;                                               //@synthesize exposureScore=_exposureScore - In the implementation block
@property (assign,nonatomic) float colorfulnessScore;                                           //@synthesize colorfulnessScore=_colorfulnessScore - In the implementation block
@property (assign,nonatomic) BOOL subMbMotionAvailable;                                         //@synthesize subMbMotionAvailable=_subMbMotionAvailable - In the implementation block
@property (assign,nonatomic) BOOL frameProcessedByFaceDetector;                                 //@synthesize frameProcessedByFaceDetector=_frameProcessedByFaceDetector - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedFaces;                                    //@synthesize detectedFaces=_detectedFaces - In the implementation block
@property (nonatomic,retain) VCPVideoActivityDescriptor * videoActivityDescriptor;              //@synthesize videoActivityDescriptor=_videoActivityDescriptor - In the implementation block
-(NSMutableArray *)detectedFaces;
-(void)setDetectedFaces:(NSMutableArray *)arg1 ;
-(void)setExposureScore:(float)arg1 ;
-(float)exposureScore;
-(void)setVideoActivityDescriptor:(VCPVideoActivityDescriptor *)arg1 ;
-(VCPVideoActivityDescriptor *)videoActivityDescriptor;
-(void)setCameraMotionScore:(float)arg1 ;
-(void)setSubjectActionScore:(float)arg1 ;
-(void)setInterestingnessScore:(float)arg1 ;
-(void)setObstructionScore:(float)arg1 ;
-(void)setColorfulnessScore:(float)arg1 ;
-(void)setFrameProcessedByVideoAnalyzer:(BOOL)arg1 ;
-(void)setSubMbMotionAvailable:(BOOL)arg1 ;
-(BOOL)frameProcessedByVideoAnalyzer;
-(float)cameraMotionScore;
-(float)subjectActionScore;
-(float)interestingnessScore;
-(float)obstructionScore;
-(float)colorfulnessScore;
-(BOOL)subMbMotionAvailable;
-(BOOL)frameProcessedByFaceDetector;
-(void)setFrameProcessedByFaceDetector:(BOOL)arg1 ;
-(id)init;
-(void)reset;
@end

