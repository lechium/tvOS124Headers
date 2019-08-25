/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray;

@interface VCPVideoKeyFrame : NSObject {

	float _subjectAction;
	float _cameraMotion;
	float _interestingness;
	float _obstruction;
	float _colorfulness;
	BOOL _subMb;
	BOOL _isHeadingFrame;
	float _score;
	float _sharpness;
	float _faceSharpness;
	float _exposureScore;
	unsigned long long _statsFlags;
	NSMutableArray* _detectedFaces;
	SCD_Struct_VC6 _timestamp;

}

@property (assign,nonatomic) SCD_Struct_VC6 timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float score;                                 //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) float sharpness;                             //@synthesize sharpness=_sharpness - In the implementation block
@property (assign,nonatomic) float faceSharpness;                         //@synthesize faceSharpness=_faceSharpness - In the implementation block
@property (assign,nonatomic) float exposureScore;                         //@synthesize exposureScore=_exposureScore - In the implementation block
@property (assign,nonatomic) BOOL isHeadingFrame;                         //@synthesize isHeadingFrame=_isHeadingFrame - In the implementation block
@property (assign,nonatomic) unsigned long long statsFlags;               //@synthesize statsFlags=_statsFlags - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedFaces;              //@synthesize detectedFaces=_detectedFaces - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(NSMutableArray *)detectedFaces;
-(void)setDetectedFaces:(NSMutableArray *)arg1 ;
-(void)setExposureScore:(float)arg1 ;
-(float)exposureScore;
-(void)setExposure:(float)arg1 ;
-(float)sharpness;
-(void)setStatsFlags:(unsigned long long)arg1 ;
-(unsigned long long)statsFlags;
-(void)setSharpness:(float)arg1 ;
-(float)computeScoreFromColorfulness;
-(float)computeScoreFromExposure;
-(float)computeExpressionScore;
-(float)computeScoreFromAction;
-(float)computeGlobalQuality;
-(float)computeVisualPleasingScore;
-(float)computeContentScore;
-(float)computePenaltyScore;
-(void)resetStatsFlag;
-(void)setFaceStatsFlag:(BOOL)arg1 detectedFaces:(id)arg2 ;
-(void)setMotionStatsFlag:(BOOL)arg1 cameraMotion:(float)arg2 subjectAction:(float)arg3 interestingness:(float)arg4 obstruction:(float)arg5 colorfulness:(float)arg6 subMb:(BOOL)arg7 ;
-(void)computeCurationScore;
-(BOOL)hasGoodSubjectAction;
-(float)faceSharpness;
-(void)setFaceSharpness:(float)arg1 ;
-(BOOL)isHeadingFrame;
-(void)setIsHeadingFrame:(BOOL)arg1 ;
-(void)printStats;
-(id)init;
-(SCD_Struct_VC6)timestamp;
-(void)setTimestamp:(SCD_Struct_VC6)arg1 ;
@end

