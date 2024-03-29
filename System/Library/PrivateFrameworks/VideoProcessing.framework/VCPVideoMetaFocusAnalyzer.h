/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoMetaFocusSegment, NSMutableArray, NSArray;

@interface VCPVideoMetaFocusAnalyzer : NSObject {

	VCPVideoMetaFocusSegment* _activeSegment;
	NSMutableArray* _mutableResults;
	SCD_Struct_VC9 _frameTimeRange;

}

@property (nonatomic,retain,readonly) NSArray * results; 
-(int)finalizeAnalysis;
-(void)addSegmentToResults;
-(int)processFrameMetadata:(id)arg1 ;
-(id)init;
-(NSArray *)results;
@end

