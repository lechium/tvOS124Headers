/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoFacePoseAnalyzer : NSObject {

	SCD_Struct_VC10 _pose;

}

@property (assign) SCD_Struct_VC10 pose;              //@synthesize pose=_pose - In the implementation block
-(SCD_Struct_VC10)pose;
-(id)initWithFocalLengthInPixels:(float)arg1 ;
-(BOOL)updateFocalLengthInPixels:(float)arg1 ;
-(int)analyzeFrameForPose:(CVBufferRef)arg1 withFaceRect:(CGRect)arg2 withTimestamp:(SCD_Struct_VC6)arg3 ;
-(void)setPose:(SCD_Struct_VC10)arg1 ;
@end

