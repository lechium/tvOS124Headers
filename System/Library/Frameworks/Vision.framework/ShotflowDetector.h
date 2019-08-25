/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class ShotflowNetwork;

@interface ShotflowDetector : NSObject {

	ShotflowNetwork* _network;
	float _overlap_threshold;
	float _filterThreshold;
	float _nmsThreshold;
	float _osfsThreshold;
	float _osfsSizeRatio;
	float _olmcsThreshold;
	int _olmcsMergeCountDelta;
	float _smartThreshold;
	float _smartDistanceFactor;

}

@property (assign,nonatomic) float overlap_threshold;                //@synthesize overlap_threshold=_overlap_threshold - In the implementation block
@property (assign,nonatomic) float threshold; 
@property (assign,nonatomic) float filterThreshold;                  //@synthesize filterThreshold=_filterThreshold - In the implementation block
@property (assign,nonatomic) float nmsThreshold;                     //@synthesize nmsThreshold=_nmsThreshold - In the implementation block
@property (assign,nonatomic) float osfsThreshold;                    //@synthesize osfsThreshold=_osfsThreshold - In the implementation block
@property (assign,nonatomic) float osfsSizeRatio;                    //@synthesize osfsSizeRatio=_osfsSizeRatio - In the implementation block
@property (assign,nonatomic) float olmcsThreshold;                   //@synthesize olmcsThreshold=_olmcsThreshold - In the implementation block
@property (assign,nonatomic) int olmcsMergeCountDelta;               //@synthesize olmcsMergeCountDelta=_olmcsMergeCountDelta - In the implementation block
@property (assign,nonatomic) float smartThreshold;                   //@synthesize smartThreshold=_smartThreshold - In the implementation block
@property (assign,nonatomic) float smartDistanceFactor;              //@synthesize smartDistanceFactor=_smartDistanceFactor - In the implementation block
+(id)processingDeviceDetectorWithModelPath:(id)arg1 networkThreshold:(float)arg2 filterThreshold:(float)arg3 preferredDeviceID:(int)arg4 engineID:(int)arg5 storageType:(int)arg6 ;
-(float)threshold;
-(void)setThreshold:(float)arg1 ;
-(id)initWithNetwork:(id)arg1 filterThreshold:(float)arg2 ;
-(float)nmsThreshold;
-(float)osfsThreshold;
-(float)osfsSizeRatio;
-(float)olmcsThreshold;
-(int)olmcsMergeCountDelta;
-(float)smartThreshold;
-(float)smartDistanceFactor;
-(float)filterThreshold;
-(id)smartMergeBoxes:(id)arg1 ;
-(id)nmsBoxes:(id)arg1 ;
-(id)overlappingSmallFacesSuppression:(id)arg1 ;
-(id)overlappingLowMergeCountSuppression:(id)arg1 ;
-(id)filterBoxes:(id)arg1 ;
-(id)mergeBoxes:(id)arg1 ;
-(id)detect:(const vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
-(float)overlap_threshold;
-(void)setOverlap_threshold:(float)arg1 ;
-(void)setFilterThreshold:(float)arg1 ;
-(void)setNmsThreshold:(float)arg1 ;
-(void)setOsfsThreshold:(float)arg1 ;
-(void)setOsfsSizeRatio:(float)arg1 ;
-(void)setOlmcsThreshold:(float)arg1 ;
-(void)setOlmcsMergeCountDelta:(int)arg1 ;
-(void)setSmartThreshold:(float)arg1 ;
-(void)setSmartDistanceFactor:(float)arg1 ;
@end
