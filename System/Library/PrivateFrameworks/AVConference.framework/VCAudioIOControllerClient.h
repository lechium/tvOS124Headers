/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOControllerSource.h>
#import <libobjc.A.dylib/VCAudioIOControllerSink.h>

@class NSString;

@interface VCAudioIOControllerClient : NSObject <VCAudioIOControllerSource, VCAudioIOControllerSink> {

	id _delegate;
	AudioStreamBasicDescription _format;
	int _deviceRole;
	BOOL _allowAudioRecording;
	int _operatingMode;
	BOOL _isRemoteCodecInfoValid;
	unsigned _remoteCodecType;
	double _remoteCodecSampleRate;
	BOOL _isRemoteVersionInfoValid;
	VoiceIOFarEndVersionInfo _farEndVersionInfo;
	int _clientPid;
	BOOL _isInputMeteringEnabled;
	BOOL _isOutputMeteringEnabled;
	unsigned char _direction;

}

@property (nonatomic,readonly) int clientPid;                                                                                             //@synthesize clientPid=_clientPid - In the implementation block
@property (nonatomic,readonly) id<VCAudioIOControllerDelegate><VCAudioIOControllerSink><VCAudioIOControllerSource> delegate; 
@property (nonatomic,readonly) AudioStreamBasicDescription format;                                                                        //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) int deviceRole;                                                                                              //@synthesize deviceRole=_deviceRole - In the implementation block
@property (assign,nonatomic) BOOL allowAudioRecording;                                                                                    //@synthesize allowAudioRecording=_allowAudioRecording - In the implementation block
@property (assign,nonatomic) int operatingMode;                                                                                           //@synthesize operatingMode=_operatingMode - In the implementation block
@property (assign,nonatomic) unsigned char direction;                                                                                     //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteCodecInfoValid;                                                                               //@synthesize isRemoteCodecInfoValid=_isRemoteCodecInfoValid - In the implementation block
@property (nonatomic,readonly) unsigned remoteCodecType;                                                                                  //@synthesize remoteCodecType=_remoteCodecType - In the implementation block
@property (nonatomic,readonly) double remoteCodecSampleRate;                                                                              //@synthesize remoteCodecSampleRate=_remoteCodecSampleRate - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteVersionInfoValid;                                                                             //@synthesize isRemoteVersionInfoValid=_isRemoteVersionInfoValid - In the implementation block
@property (nonatomic,readonly) VoiceIOFarEndVersionInfo farEndVersionInfo;                                                                //@synthesize farEndVersionInfo=_farEndVersionInfo - In the implementation block
@property (assign,getter=isInputMeteringEnabled,nonatomic) BOOL inputMeteringEnabled;                                                     //@synthesize isInputMeteringEnabled=_isInputMeteringEnabled - In the implementation block
@property (assign,getter=isOuputMeteringEnabled,nonatomic) BOOL outputMeteringEnabled;                                                    //@synthesize isOutputMeteringEnabled=_isOutputMeteringEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(BOOL)isInputMeteringEnabled;
-(BOOL)isOuputMeteringEnabled;
-(int)deviceRole;
-(BOOL)allowAudioRecording;
-(void)setAllowAudioRecording:(BOOL)arg1 ;
-(void)setDeviceRole:(int)arg1 ;
-(BOOL)isRemoteCodecInfoValid;
-(double)remoteCodecSampleRate;
-(unsigned)remoteCodecType;
-(BOOL)isRemoteVersionInfoValid;
-(VoiceIOFarEndVersionInfo)farEndVersionInfo;
-(void)setFarEndVersionInfo:(VoiceIOFarEndVersionInfo)arg1 ;
-(void)pullAudioSamples:(opaqueVCAudioBufferListRef)arg1 controllerTime:(const VCAudioIOControllerTime*)arg2 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 controllerTime:(const VCAudioIOControllerTime*)arg2 ;
-(void)setOutputMeteringEnabled:(BOOL)arg1 ;
-(void)setInputMeteringEnabled:(BOOL)arg1 ;
-(void)setRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2 ;
-(void)setClientFormat:(AudioStreamBasicDescription)arg1 ;
-(id)initWithDelegate:(id)arg1 clientPid:(int)arg2 ;
-(int)clientPid;
-(void)dealloc;
-(NSString *)description;
-(id<VCAudioIOControllerDelegate><VCAudioIOControllerSink><VCAudioIOControllerSource>)delegate;
-(unsigned char)direction;
-(void)setDirection:(unsigned char)arg1 ;
-(AudioStreamBasicDescription)format;
@end

