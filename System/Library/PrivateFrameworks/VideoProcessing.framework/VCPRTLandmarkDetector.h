/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPRTLandmarkDetector : NSObject {

	LandmarkDetector* _internalLandmarkDetector;
	int _numOfLandmarks;

}
-(id)initFromConfigFile:(id)arg1 numStage:(int)arg2 numLandmarks:(int)arg3 numTreePerStage:(int)arg4 depthOfTree:(int)arg5 numFeatures:(int)arg6 ;
-(void)detectLandmark:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 facerect:(float*)arg5 prevResult:(float*)arg6 result:(float*)arg7 ;
-(void)calculateFaceRectFromPrevLM:(float*)arg1 result:(float*)arg2 numOfLandmarks:(int)arg3 ;
-(void)dealloc;
@end

