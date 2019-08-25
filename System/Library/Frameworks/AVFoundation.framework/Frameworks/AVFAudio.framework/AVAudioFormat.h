/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVAudioChannelLayout, NSData, NSDictionary;

@interface AVAudioFormat : NSObject <NSSecureCoding> {

	AudioStreamBasicDescription _asbd;
	AVAudioChannelLayout* _layout;
	unsigned long long _commonFormat;
	void* _reserved;

}

@property (getter=isStandard,nonatomic,readonly) BOOL standard; 
@property (nonatomic,readonly) unsigned long long commonFormat; 
@property (nonatomic,readonly) unsigned channelCount; 
@property (nonatomic,readonly) double sampleRate; 
@property (getter=isInterleaved,nonatomic,readonly) BOOL interleaved; 
@property (nonatomic,readonly) const AudioStreamBasicDescription* streamDescription; 
@property (nonatomic,readonly) AVAudioChannelLayout * channelLayout; 
@property (nonatomic,retain) NSData * magicCookie; 
@property (nonatomic,readonly) NSDictionary * settings; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef formatDescription; 
+(id)settingsFromASBD:(const AudioStreamBasicDescription*)arg1 channelLayout:(id)arg2 ;
+(id)formatWithInvalidSampleRateAndChannelCount;
+(BOOL)supportsSecureCoding;
-(const opaqueCMFormatDescriptionRef)formatDescription;
-(const AudioStreamBasicDescription*)streamDescription;
-(BOOL)isInterleaved;
-(id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 interleaved:(BOOL)arg3 channelLayout:(id)arg4 ;
-(AVAudioChannelLayout *)channelLayout;
-(NSData *)magicCookie;
-(void)setMagicCookie:(NSData *)arg1 ;
-(id)initWithStreamDescription:(const AudioStreamBasicDescription*)arg1 channelLayout:(id)arg2 ;
-(id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2 ;
-(id)initWithCMAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)isStandard;
-(unsigned long long)commonFormat;
-(id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned)arg2 ;
-(unsigned)channelCount;
-(id)initWithStreamDescription:(const AudioStreamBasicDescription*)arg1 ;
-(id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 channels:(unsigned)arg3 interleaved:(BOOL)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithSettings:(id)arg1 ;
-(NSDictionary *)settings;
-(double)sampleRate;
@end

