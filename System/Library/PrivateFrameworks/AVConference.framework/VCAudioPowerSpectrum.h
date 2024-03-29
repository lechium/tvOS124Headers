/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>

@protocol VCAudioPowerSpectrumDelegate;
@class NSString;

@interface VCAudioPowerSpectrum : NSObject <VCAudioIOSink> {

	VCRange _frequencyRange;
	unsigned _sampleRate;
	unsigned _fftSampleCount;
	AudioStreamBasicDescription _format;
	opaqueVCAudioBufferListRef _sampleBuffer;
	float* _hanningWindow;
	unsigned* _octave2IndexTable6;
	unsigned _octave2IndexTable6Count;
	float _fftNormFactor;
	VCAudioPowerSpectrumChannel* _channelSettings;
	float* _lerpIdxs;
	unsigned _outputBinCount;
	AB _powerSpectrumConfigured;
	id<VCAudioPowerSpectrumDelegate> _delegate;
	long long _streamToken;

}

@property (nonatomic,readonly) VCRange frequencyRange;                                 //@synthesize frequencyRange=_frequencyRange - In the implementation block
@property (nonatomic,readonly) long long streamToken;                                  //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,readonly) id<VCAudioPowerSpectrumDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)cleanupHanningWindow;
-(void)cleanupBinInterpolation;
-(void)cleanupOctave2IndexTable;
-(void)cleanupChannel:(VCAudioPowerSpectrumChannel*)arg1 ;
-(BOOL)setupOctave2IndexTableWithBinCount:(unsigned)arg1 ;
-(BOOL)setupBinInterpolationWithBinCount:(unsigned)arg1 ;
-(BOOL)setupHanningWindow;
-(BOOL)setupChannel:(VCAudioPowerSpectrumChannel*)arg1 ;
-(BOOL)setupOctave2IndexTableForChannel:(VCAudioPowerSpectrumChannel*)arg1 ;
-(BOOL)setupFFTForChannel:(VCAudioPowerSpectrumChannel*)arg1 ;
-(BOOL)setupBinsForChannel:(VCAudioPowerSpectrumChannel*)arg1 ;
-(void)cleanupBinsForChannel:(VCAudioPowerSpectrumChannel*)arg1 ;
-(void)cleanupFFTForChannel:(VCAudioPowerSpectrumChannel*)arg1 ;
-(void)cleanupOctave2IndexTableForChannel:(VCAudioPowerSpectrumChannel*)arg1 ;
-(BOOL)setupAudioPowerSpectrumWithBinCount:(unsigned)arg1 format:(const AudioStreamBasicDescription*)arg2 ;
-(void)computeSpectrumForChannelIndex:(unsigned)arg1 ;
-(id)initWithBinCount:(unsigned)arg1 streamToken:(long long)arg2 delegate:(id)arg3 ;
-(id)frequencyBinsForChannelIndex:(unsigned)arg1 ;
-(unsigned)getNumChannels;
-(VCRange)frequencyRange;
-(long long)streamToken;
-(void)dealloc;
-(NSString *)description;
-(id<VCAudioPowerSpectrumDelegate>)delegate;
-(void)cleanUp;
@end

