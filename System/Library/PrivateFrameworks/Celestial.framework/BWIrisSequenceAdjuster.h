/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, BWMotionDataPreserver;

@interface BWIrisSequenceAdjuster : NSObject {

	NSMutableArray* _discontinuities;
	SCD_Struct_BW2 _firstIrisAudioOffset;
	NSMutableArray* _interleavingQueues;
	SCD_Struct_BW2 _nextAdjustedVideoTime;
	unsigned* _mediaTypes;
	NSMutableArray* _timeSkews;
	SCD_Struct_BW2 _masterMovieOriginalStartTime;
	SCD_Struct_BW2 _masterMovieOriginalEndTime;
	SCD_Struct_BW2 _previewFrameDuration;
	BWMotionDataPreserver* _motionDataPreserver;
	int _audioOffsetForOriginalStillImageTimeMaximumFrameLatency;

}

@property (assign,nonatomic) int audioOffsetForOriginalStillImageTimeMaximumFrameLatency;              //@synthesize audioOffsetForOriginalStillImageTimeMaximumFrameLatency=_audioOffsetForOriginalStillImageTimeMaximumFrameLatency - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 masterMovieOriginalStartTime; 
@property (assign,nonatomic) SCD_Struct_BW2 masterMovieOriginalEndTime;                                //@synthesize masterMovieOriginalEndTime=_masterMovieOriginalEndTime - In the implementation block
+(void)initialize;
-(SCD_Struct_BW2)_adjustedTimeForAudioBufferWithTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)_adjustedTimeForVideoBufferWithTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)_audioOffsetForOriginalStillImageTime:(SCD_Struct_BW2)arg1 adjustedStillImageTime:(SCD_Struct_BW2)arg2 ;
-(SCD_Struct_BW2)_adjustedTimeForMetadataBufferWithTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)adjustedTimeForTime:(SCD_Struct_BW2)arg1 ;
-(void)_getPreviousTimeSkewOut:(SCD_Struct_BW61*)arg1 andNextTimeSkewOut:(SCD_Struct_BW61*)arg2 forTime:(SCD_Struct_BW2)arg3 ;
-(long long)_indexOfTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)_originalDurationForVideoBufferWithTime:(SCD_Struct_BW2)arg1 ;
-(void)_adjustTimesInAudioInterleavingQueues;
-(void)enqueueVideoBufferTime:(SCD_Struct_BW2)arg1 nativeTime:(SCD_Struct_BW2)arg2 isBracketFrame:(BOOL)arg3 isSISFrame:(BOOL)arg4 ;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 forMediaTypeWithIndex:(long long)arg2 ;
-(SCD_Struct_BW2)audioOffsetForOriginalStillImageTime:(SCD_Struct_BW2)arg1 ;
-(opaqueCMSampleBufferRef)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(long long)arg1 ;
-(void)adjustMovieInfoTimes:(id)arg1 ;
-(SCD_Struct_BW2)adjustedTimeForStillImageTime:(SCD_Struct_BW2)arg1 ;
-(void)setMasterMovieOriginalStartTime:(SCD_Struct_BW2)arg1 ;
-(int)audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
-(SCD_Struct_BW2)masterMovieOriginalStartTime;
-(SCD_Struct_BW2)masterMovieOriginalEndTime;
-(void)setMasterMovieOriginalEndTime:(SCD_Struct_BW2)arg1 ;
-(void)setAudioOffsetForOriginalStillImageTimeMaximumFrameLatency:(int)arg1 ;
-(id)initWithMediaTypes:(id)arg1 ;
-(void)dealloc;
-(void)reset;
@end

