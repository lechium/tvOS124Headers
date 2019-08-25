/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSAudioTimeErrorCorrelator.h>

@interface TSAudioTimeErrorCorrelatorPostUpsampler : TSAudioTimeErrorCorrelator {

	float* _channelABuffer;
	float* _scratch1Buffer;
	float* _scratch2Buffer;
	float* _correlationBuffer;
	float* _upsamplerFilterCoefficientsBuffer;
	long long _upsamplerFilterCoefficientsLength;

}
-(id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3 ;
-(void)_makeBlock;
-(void)dealloc;
@end

