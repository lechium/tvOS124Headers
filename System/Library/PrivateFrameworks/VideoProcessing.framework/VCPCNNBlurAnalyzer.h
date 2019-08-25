/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPCNNBlurAnalyzer : VCPImageAnalyzer {

	BOOL _sdof;
	float _contrast;

}
+(id)analyzer;
-(float)calculateScoreFromNetworkOutput:(float*)arg1 outChannel:(int)arg2 outHeight:(int)arg3 outWidth:(int)arg4 textureness:(char*)arg5 imgWidth:(int)arg6 ;
-(int)initModel:(int)arg1 srcWidth:(int)arg2 ;
-(int)computeSharpnessScore:(float*)arg1 textureness:(char*)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(/*^block*/id)arg5 ;
-(id)initWithParameters:(BOOL)arg1 contrast:(float)arg2 ;
-(int)computeCNNBasedSharpness:(CVBufferRef)arg1 sharpnessScore:(float*)arg2 cancel:(/*^block*/id)arg3 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)initInputFromCVPixelBuffer:(CVBufferRef)arg1 cnnInputHeight:(int)arg2 cnnInputWidth:(int)arg3 rect:(CGRect*)arg4 input:(float*)arg5 ;
@end
