/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, AVAudioDeviceTestProcessingChain;

@interface AVAudioDeviceTestSequence : NSObject <NSSecureCoding> {

	float _volume;
	long long _outputID;
	NSURL* _stimulusURL;
	AVAudioDeviceTestProcessingChain* _inputProcessingChain;
	AVAudioDeviceTestProcessingChain* _outputProcessingChain;
	long long _outputMode;

}

@property (assign,nonatomic) long long outputID;                                                    //@synthesize outputID=_outputID - In the implementation block
@property (assign,nonatomic) float volume;                                                          //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSURL * stimulusURL;                                                   //@synthesize stimulusURL=_stimulusURL - In the implementation block
@property (nonatomic,retain) AVAudioDeviceTestProcessingChain * inputProcessingChain;               //@synthesize inputProcessingChain=_inputProcessingChain - In the implementation block
@property (nonatomic,retain) AVAudioDeviceTestProcessingChain * outputProcessingChain;              //@synthesize outputProcessingChain=_outputProcessingChain - In the implementation block
@property (assign,nonatomic) long long outputMode;                                                  //@synthesize outputMode=_outputMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)outputID;
-(void)setOutputID:(long long)arg1 ;
-(NSURL *)stimulusURL;
-(void)setStimulusURL:(NSURL *)arg1 ;
-(AVAudioDeviceTestProcessingChain *)inputProcessingChain;
-(void)setInputProcessingChain:(AVAudioDeviceTestProcessingChain *)arg1 ;
-(AVAudioDeviceTestProcessingChain *)outputProcessingChain;
-(void)setOutputProcessingChain:(AVAudioDeviceTestProcessingChain *)arg1 ;
-(long long)outputMode;
-(void)setOutputMode:(long long)arg1 ;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

