/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPImageDescriptor, VCPVideoKeyFrame;

@interface VCPMovieHighlight : NSObject {

	BOOL _isAutoPlayable;
	float _score;
	float _junkScore;
	float _qualityScore;
	float _expressionScore;
	float _actionScore;
	float _voiceScore;
	VCPImageDescriptor* _descriptor;
	VCPVideoKeyFrame* _keyFrame;
	SCD_Struct_VC9 _timerange;

}

@property (assign,nonatomic) SCD_Struct_VC9 timerange;                     //@synthesize timerange=_timerange - In the implementation block
@property (assign,nonatomic) float score;                                  //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) float junkScore;                              //@synthesize junkScore=_junkScore - In the implementation block
@property (assign,nonatomic) float qualityScore;                           //@synthesize qualityScore=_qualityScore - In the implementation block
@property (assign,nonatomic) float expressionScore;                        //@synthesize expressionScore=_expressionScore - In the implementation block
@property (assign,nonatomic) float actionScore;                            //@synthesize actionScore=_actionScore - In the implementation block
@property (assign,nonatomic) float voiceScore;                             //@synthesize voiceScore=_voiceScore - In the implementation block
@property (assign,nonatomic) BOOL isAutoPlayable;                          //@synthesize isAutoPlayable=_isAutoPlayable - In the implementation block
@property (nonatomic,retain) VCPImageDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) VCPVideoKeyFrame * keyFrame;                  //@synthesize keyFrame=_keyFrame - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(float)actionScore;
-(void)setActionScore:(float)arg1 ;
-(SCD_Struct_VC9)timerange;
-(VCPVideoKeyFrame *)keyFrame;
-(BOOL)isAutoPlayable;
-(float)expressionScore;
-(float)voiceScore;
-(void)mergeSegment:(id)arg1 ;
-(BOOL)isShort;
-(void)copyScoresFrom:(id)arg1 ;
-(void)checkAutoPlayable;
-(void)setTimerange:(SCD_Struct_VC9)arg1 ;
-(void)setExpressionScore:(float)arg1 ;
-(void)setVoiceScore:(float)arg1 ;
-(void)setIsAutoPlayable:(BOOL)arg1 ;
-(void)setKeyFrame:(VCPVideoKeyFrame *)arg1 ;
-(float)qualityScore;
-(float)junkScore;
-(void)setQualityScore:(float)arg1 ;
-(void)setJunkScore:(float)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_VC9)arg1 ;
-(void)setDescriptor:(VCPImageDescriptor *)arg1 ;
-(VCPImageDescriptor *)descriptor;
@end

