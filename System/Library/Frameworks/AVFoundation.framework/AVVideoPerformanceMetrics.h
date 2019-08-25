/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVVideoPerformanceMetricsInternal;

@interface AVVideoPerformanceMetrics : NSObject {

	AVVideoPerformanceMetricsInternal* _performanceMetricsInternal;

}

@property (nonatomic,readonly) unsigned long long totalNumberOfVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfDroppedVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfCorruptedVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfDisplayCompositedVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfNonDisplayCompositedVideoFrames; 
@property (nonatomic,readonly) double totalFrameDelay; 
-(unsigned long long)totalNumberOfVideoFrames;
-(unsigned long long)numberOfCorruptedVideoFrames;
-(unsigned long long)numberOfDisplayCompositedVideoFrames;
-(unsigned long long)numberOfNonDisplayCompositedVideoFrames;
-(double)totalFrameDelay;
-(unsigned long long)numberOfDroppedVideoFrames;
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
@end
